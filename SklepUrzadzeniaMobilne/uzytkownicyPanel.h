#pragma once
#include "uzytkownikOkienko.h"
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
			
			uzytkownikOkienko^ u1 = gcnew uzytkownikOkienko();
			uzytkownikOkienko^ u2 = gcnew uzytkownikOkienko();

			u1->TopLevel = false;
			this->flowLayoutPanel->Controls->Add(u1);
			u1->Show();


			u2->TopLevel = false;
			this->flowLayoutPanel->Controls->Add(u2);
			u2->Show();
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
	protected:

	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->flowLayoutPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->SuspendLayout();
			// 
			// flowLayoutPanel
			// 
			this->flowLayoutPanel->AutoScroll = true;
			this->flowLayoutPanel->Location = System::Drawing::Point(12, 12);
			this->flowLayoutPanel->Name = L"flowLayoutPanel";
			this->flowLayoutPanel->Size = System::Drawing::Size(518, 247);
			this->flowLayoutPanel->TabIndex = 0;
			// 
			// uzytkownicyPanel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SaddleBrown;
			this->ClientSize = System::Drawing::Size(542, 271);
			this->Controls->Add(this->flowLayoutPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"uzytkownicyPanel";
			this->Text = L"uzytkownicyPanel";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
