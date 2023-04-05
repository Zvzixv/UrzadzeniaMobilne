#pragma once
#include "produktOkienko.h"
#include "potwierdzenieZamowienia.h"
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
	/// Summary for ProduktyPanel
	/// </summary>
	public ref class ProduktyPanel : public System::Windows::Forms::Form
	{
	public:
		ProduktyPanel(void)
		{
			InitializeComponent();
			

			std::vector<Produkt*>bazaProduktow;
			Utils::wczytajProdukty(&bazaProduktow);
			List<produktOkienko^>^ paneleProduktow = gcnew List <produktOkienko^>();

			for (auto u : bazaProduktow)
			{
				produktOkienko^ upanel = gcnew produktOkienko(u);
				paneleProduktow->Add(upanel);

			}

			for each (produktOkienko ^ panel in paneleProduktow) {
				panel->TopLevel = false;
				this->flowLayoutPanel->Controls->Add(panel);
				panel->Show();
			}


		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ProduktyPanel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel;
	private: System::Windows::Forms::Button^ finalizacjabutton;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->flowLayoutPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->finalizacjabutton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// flowLayoutPanel
			// 
			this->flowLayoutPanel->AutoScroll = true;
			this->flowLayoutPanel->Location = System::Drawing::Point(12, 42);
			this->flowLayoutPanel->Name = L"flowLayoutPanel";
			this->flowLayoutPanel->Size = System::Drawing::Size(534, 256);
			this->flowLayoutPanel->TabIndex = 0;
			// 
			// finalizacjabutton
			// 
			this->finalizacjabutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->finalizacjabutton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->finalizacjabutton->ForeColor = System::Drawing::Color::SeaShell;
			this->finalizacjabutton->Location = System::Drawing::Point(446, 4);
			this->finalizacjabutton->Name = L"finalizacjabutton";
			this->finalizacjabutton->Size = System::Drawing::Size(100, 32);
			this->finalizacjabutton->TabIndex = 1;
			this->finalizacjabutton->Text = L"Finalizacja";
			this->finalizacjabutton->UseVisualStyleBackColor = true;
			this->finalizacjabutton->Click += gcnew System::EventHandler(this, &ProduktyPanel::finalizacjabutton_Click);
			// 
			// ProduktyPanel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SaddleBrown;
			this->ClientSize = System::Drawing::Size(558, 310);
			this->Controls->Add(this->finalizacjabutton);
			this->Controls->Add(this->flowLayoutPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"ProduktyPanel";
			this->Text = L"ProduktyPanel";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void finalizacjabutton_Click(System::Object^ sender, System::EventArgs^ e) {
		//tutaj cos w stylu ze dla wszystkich paneli sprawdzane sa czy beda kupowane i przesyla sie je dalej simply, moze zadziala

		//foreach okienka sprawdz czy okienko->kupowanyGetData - ejst true to dodaj do listy.

		potwierdzenieZamowienia^ pz = gcnew potwierdzenieZamowienia();

		pz->ShowDialog();
	}
	};
}
