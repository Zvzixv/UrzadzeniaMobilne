#pragma once
#include "panelUzytkownika.h"
#include "PanelAdministratora.h"
namespace SklepUrzadzeniaMobilne {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o form
	/// </summary>
	public ref class form : public System::Windows::Forms::Form
	{
	public:
		form(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ uzytkowniktextBox;
	private: System::Windows::Forms::TextBox^ haslotextBox;
	private: System::Windows::Forms::Button^ zalogujbutton;
	private: System::Windows::Forms::Button^ stworzKontobutton;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(form::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->uzytkowniktextBox = (gcnew System::Windows::Forms::TextBox());
			this->haslotextBox = (gcnew System::Windows::Forms::TextBox());
			this->zalogujbutton = (gcnew System::Windows::Forms::Button());
			this->stworzKontobutton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(433, 88);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(220, 118);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(505, 220);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 26);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Login";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(505, 282);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 26);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Hasło";
			// 
			// uzytkowniktextBox
			// 
			this->uzytkowniktextBox->ForeColor = System::Drawing::SystemColors::WindowText;
			this->uzytkowniktextBox->Location = System::Drawing::Point(461, 249);
			this->uzytkowniktextBox->Name = L"uzytkowniktextBox";
			this->uzytkowniktextBox->Size = System::Drawing::Size(156, 26);
			this->uzytkowniktextBox->TabIndex = 2;
			// 
			// haslotextBox
			// 
			this->haslotextBox->Location = System::Drawing::Point(461, 311);
			this->haslotextBox->Name = L"haslotextBox";
			this->haslotextBox->Size = System::Drawing::Size(156, 26);
			this->haslotextBox->TabIndex = 2;
			// 
			// zalogujbutton
			// 
			this->zalogujbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->zalogujbutton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->zalogujbutton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->zalogujbutton->Location = System::Drawing::Point(487, 359);
			this->zalogujbutton->Name = L"zalogujbutton";
			this->zalogujbutton->Size = System::Drawing::Size(114, 42);
			this->zalogujbutton->TabIndex = 3;
			this->zalogujbutton->Text = L"Zaloguj";
			this->zalogujbutton->UseVisualStyleBackColor = true;
			this->zalogujbutton->Click += gcnew System::EventHandler(this, &form::zalogujbutton_Click);
			// 
			// stworzKontobutton
			// 
			this->stworzKontobutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->stworzKontobutton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stworzKontobutton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->stworzKontobutton->Location = System::Drawing::Point(487, 420);
			this->stworzKontobutton->Name = L"stworzKontobutton";
			this->stworzKontobutton->Size = System::Drawing::Size(114, 72);
			this->stworzKontobutton->TabIndex = 3;
			this->stworzKontobutton->Text = L"Stwórz konto";
			this->stworzKontobutton->UseVisualStyleBackColor = true;
			// 
			// form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SaddleBrown;
			this->ClientSize = System::Drawing::Size(1092, 589);
			this->Controls->Add(this->stworzKontobutton);
			this->Controls->Add(this->zalogujbutton);
			this->Controls->Add(this->haslotextBox);
			this->Controls->Add(this->uzytkowniktextBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"form";
			this->Text = L"Sklep z urządzeniami mobilnymi";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void zalogujbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		panelUzytkownika^ pu = gcnew panelUzytkownika();
		pu->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		pu->TopLevel = false;
		//pu->Show();
		//this->Hide();

		Controls->Clear();
		Controls->Add(pu);
		pu->Show();
		
	}
};
}
