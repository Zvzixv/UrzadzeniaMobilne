#pragma once
#include "uzytkownikOkienko.h"
#include "Utils.h"
using namespace System::Collections::Generic;
namespace SklepUrzadzeniaMobilne {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o uzytkownicyPanel
	/// </summary>
	public ref class uzytkownicyPanel : public System::Windows::Forms::Form
	{
	public:
		uzytkownicyPanel(void)
		{
			InitializeComponent();

			std::vector<Uzytkownik> bazaUzytkownikow;
			Utils::wczytajUzytkownikow(&bazaUzytkownikow);
			List<uzytkownikOkienko^>^ paneleUzytkownikow = gcnew List<uzytkownikOkienko^>();

			for (auto u : bazaUzytkownikow)
			{
				Uzytkownik* uwskaznik = new Uzytkownik(u);
				uzytkownikOkienko^ upanel = gcnew uzytkownikOkienko(uwskaznik);
				paneleUzytkownikow->Add(upanel);

			}

			for each (uzytkownikOkienko ^ panel in paneleUzytkownikow) {
				panel->TopLevel = false;
				this->flowLayoutPanel->Controls->Add(panel);
				panel->Show();
			}

		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~uzytkownicyPanel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel;
	private: System::Windows::Forms::Label^ label1;
	protected:

	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->flowLayoutPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// flowLayoutPanel
			// 
			this->flowLayoutPanel->AutoScroll = true;
			this->flowLayoutPanel->Location = System::Drawing::Point(12, 12);
			this->flowLayoutPanel->Name = L"flowLayoutPanel";
			this->flowLayoutPanel->Size = System::Drawing::Size(518, 229);
			this->flowLayoutPanel->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::Color::SeaShell;
			this->label1->Location = System::Drawing::Point(9, 245);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(492, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Jeœli zmieniamy rolê samemu sobie to zmiany zostan¹ widoczne po przelogowaniu.";
			// 
			// uzytkownicyPanel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SaddleBrown;
			this->ClientSize = System::Drawing::Size(542, 271);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->flowLayoutPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"uzytkownicyPanel";
			this->Text = L"uzytkownicyPanel";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
