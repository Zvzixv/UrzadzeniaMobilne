#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include "Uzytkownik.h"
#include "Adres.h"
#include <msclr\marshal_cppstd.h>
#include <stdlib.h>
#include "SerializatorUzytkownicy.h"

using namespace System::Runtime::InteropServices;


namespace SklepUrzadzeniaMobilne {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for rejestracja
	/// </summary>
	public ref class rejestracja : public System::Windows::Forms::Form
	{
	public:
		rejestracja(void)
		{
			InitializeComponent();
		}

		rejestracja(Form ^f)
		{
			InitializeComponent();
			formpowrotny = f;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~rejestracja()
		{
			if (components)
			{
				delete components;
			}
		}

	private: Form ^formpowrotny;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ logintextBox;
	private: System::Windows::Forms::TextBox^ imietextBox;
	private: System::Windows::Forms::TextBox^ nazwiskotextBox;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ haslo1textBox;
	private: System::Windows::Forms::TextBox^ haslo2textBox;
	private: System::Windows::Forms::TextBox^ ulicatextBox;
	private: System::Windows::Forms::TextBox^ miastotextBox;
	private: System::Windows::Forms::TextBox^ numertextBox;
	private: System::Windows::Forms::TextBox^ kodtextBox;
	private: System::Windows::Forms::Button^ stworzKontobutton;
	private: System::Windows::Forms::Button^ powrotbutton;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->logintextBox = (gcnew System::Windows::Forms::TextBox());
			this->imietextBox = (gcnew System::Windows::Forms::TextBox());
			this->nazwiskotextBox = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->haslo1textBox = (gcnew System::Windows::Forms::TextBox());
			this->haslo2textBox = (gcnew System::Windows::Forms::TextBox());
			this->ulicatextBox = (gcnew System::Windows::Forms::TextBox());
			this->miastotextBox = (gcnew System::Windows::Forms::TextBox());
			this->numertextBox = (gcnew System::Windows::Forms::TextBox());
			this->kodtextBox = (gcnew System::Windows::Forms::TextBox());
			this->stworzKontobutton = (gcnew System::Windows::Forms::Button());
			this->powrotbutton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(81, 16);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 18);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Login";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(81, 53);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 18);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Imię";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(81, 90);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(77, 18);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Nazwisko";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(81, 128);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 18);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Hasło";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(462, 16);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 18);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Ulica";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(462, 53);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(194, 18);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Numer domu/mieszkania";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label8->Location = System::Drawing::Point(462, 90);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(113, 18);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Kod pocztowy";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label9->Location = System::Drawing::Point(462, 128);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(56, 18);
			this->label9->TabIndex = 2;
			this->label9->Text = L"Miasto";
			// 
			// logintextBox
			// 
			this->logintextBox->Location = System::Drawing::Point(85, 34);
			this->logintextBox->Margin = System::Windows::Forms::Padding(2);
			this->logintextBox->Name = L"logintextBox";
			this->logintextBox->Size = System::Drawing::Size(113, 20);
			this->logintextBox->TabIndex = 3;
			// 
			// imietextBox
			// 
			this->imietextBox->Location = System::Drawing::Point(85, 72);
			this->imietextBox->Margin = System::Windows::Forms::Padding(2);
			this->imietextBox->Name = L"imietextBox";
			this->imietextBox->Size = System::Drawing::Size(113, 20);
			this->imietextBox->TabIndex = 3;
			// 
			// nazwiskotextBox
			// 
			this->nazwiskotextBox->Location = System::Drawing::Point(85, 109);
			this->nazwiskotextBox->Margin = System::Windows::Forms::Padding(2);
			this->nazwiskotextBox->Name = L"nazwiskotextBox";
			this->nazwiskotextBox->Size = System::Drawing::Size(113, 20);
			this->nazwiskotextBox->TabIndex = 3;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label10->Location = System::Drawing::Point(81, 168);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(49, 18);
			this->label10->TabIndex = 2;
			this->label10->Text = L"Hasło";
			// 
			// haslo1textBox
			// 
			this->haslo1textBox->Location = System::Drawing::Point(85, 149);
			this->haslo1textBox->Margin = System::Windows::Forms::Padding(2);
			this->haslo1textBox->Name = L"haslo1textBox";
			this->haslo1textBox->Size = System::Drawing::Size(113, 20);
			this->haslo1textBox->TabIndex = 3;
			// 
			// haslo2textBox
			// 
			this->haslo2textBox->Location = System::Drawing::Point(85, 187);
			this->haslo2textBox->Margin = System::Windows::Forms::Padding(2);
			this->haslo2textBox->Name = L"haslo2textBox";
			this->haslo2textBox->Size = System::Drawing::Size(113, 20);
			this->haslo2textBox->TabIndex = 3;
			// 
			// ulicatextBox
			// 
			this->ulicatextBox->Location = System::Drawing::Point(465, 34);
			this->ulicatextBox->Margin = System::Windows::Forms::Padding(2);
			this->ulicatextBox->Name = L"ulicatextBox";
			this->ulicatextBox->Size = System::Drawing::Size(113, 20);
			this->ulicatextBox->TabIndex = 3;
			// 
			// miastotextBox
			// 
			this->miastotextBox->Location = System::Drawing::Point(465, 147);
			this->miastotextBox->Margin = System::Windows::Forms::Padding(2);
			this->miastotextBox->Name = L"miastotextBox";
			this->miastotextBox->Size = System::Drawing::Size(113, 20);
			this->miastotextBox->TabIndex = 3;
			// 
			// numertextBox
			// 
			this->numertextBox->Location = System::Drawing::Point(465, 72);
			this->numertextBox->Margin = System::Windows::Forms::Padding(2);
			this->numertextBox->Name = L"numertextBox";
			this->numertextBox->Size = System::Drawing::Size(113, 20);
			this->numertextBox->TabIndex = 3;
			// 
			// kodtextBox
			// 
			this->kodtextBox->Location = System::Drawing::Point(465, 109);
			this->kodtextBox->Margin = System::Windows::Forms::Padding(2);
			this->kodtextBox->Name = L"kodtextBox";
			this->kodtextBox->Size = System::Drawing::Size(113, 20);
			this->kodtextBox->TabIndex = 3;
			// 
			// stworzKontobutton
			// 
			this->stworzKontobutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->stworzKontobutton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stworzKontobutton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->stworzKontobutton->Location = System::Drawing::Point(465, 222);
			this->stworzKontobutton->Margin = System::Windows::Forms::Padding(2);
			this->stworzKontobutton->Name = L"stworzKontobutton";
			this->stworzKontobutton->Size = System::Drawing::Size(76, 47);
			this->stworzKontobutton->TabIndex = 4;
			this->stworzKontobutton->Text = L"Stwórz konto";
			this->stworzKontobutton->UseVisualStyleBackColor = true;
			this->stworzKontobutton->Click += gcnew System::EventHandler(this, &rejestracja::stworzKontobutton_Click);
			// 
			// powrotbutton
			// 
			this->powrotbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->powrotbutton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->powrotbutton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->powrotbutton->Location = System::Drawing::Point(465, 280);
			this->powrotbutton->Margin = System::Windows::Forms::Padding(2);
			this->powrotbutton->Name = L"powrotbutton";
			this->powrotbutton->Size = System::Drawing::Size(76, 33);
			this->powrotbutton->TabIndex = 4;
			this->powrotbutton->Text = L"Powrót";
			this->powrotbutton->UseVisualStyleBackColor = true;
			this->powrotbutton->Click += gcnew System::EventHandler(this, &rejestracja::powrotbutton_Click);
			// 
			// rejestracja
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SaddleBrown;
			this->ClientSize = System::Drawing::Size(728, 383);
			this->Controls->Add(this->powrotbutton);
			this->Controls->Add(this->stworzKontobutton);
			this->Controls->Add(this->miastotextBox);
			this->Controls->Add(this->haslo2textBox);
			this->Controls->Add(this->haslo1textBox);
			this->Controls->Add(this->nazwiskotextBox);
			this->Controls->Add(this->kodtextBox);
			this->Controls->Add(this->numertextBox);
			this->Controls->Add(this->ulicatextBox);
			this->Controls->Add(this->imietextBox);
			this->Controls->Add(this->logintextBox);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"rejestracja";
			this->Text = L"rejestracja";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void stworzKontobutton_Click(System::Object^ sender, System::EventArgs^ e) {
		std::vector<json> array;
		bool result = SerializatorUzytkownicy::wczytajBaze(&array);

		if (logintextBox->Text == "")
		{
			MessageBox::Show("Login jest pusty");
			return;
		}
		if (imietextBox->Text == "")
		{
			MessageBox::Show("Imie jest puste");
			return;
		}
		if (nazwiskotextBox->Text == "")
		{
			MessageBox::Show("Nazwisko jest puste");
			return;
		}
		if (haslo1textBox->Text == "")
		{
			MessageBox::Show("Pierwsze pole na hasło jest puste");
			return;
		}
		if (haslo2textBox->Text == "")
		{
			MessageBox::Show("Drugie pole na hasło jest puste");
			return;
		}
		if (ulicatextBox->Text == "")
		{
			MessageBox::Show("Ulica jest pusta");
			return;
		}
		if (numertextBox->Text == "")
		{
			MessageBox::Show("Numer domu/mieszkania jest pusty");
			return;
		}
		if (kodtextBox->Text == "")
		{
			MessageBox::Show("Kod pocztowy jest pusty");
			return;
		}
		if (miastotextBox->Text == "")
		{
			MessageBox::Show("Miasto jest puste");
			return;
		}

		int numerDomuInt = stoi(msclr::interop::marshal_as<std::string>(numertextBox->Text));
		std::string unmanaged = msclr::interop::marshal_as<std::string>(miastotextBox->Text);
		Adres* adr = new Adres(0, msclr::interop::marshal_as<std::string>(miastotextBox->Text), msclr::interop::marshal_as<std::string>(kodtextBox->Text), msclr::interop::marshal_as<std::string>(ulicatextBox->Text), numerDomuInt);
		Uzytkownik* uz = new Uzytkownik(0, msclr::interop::marshal_as<std::string>(logintextBox->Text), msclr::interop::marshal_as<std::string>(imietextBox->Text), msclr::interop::marshal_as<std::string>(nazwiskotextBox->Text), msclr::interop::marshal_as<std::string>(haslo1textBox->Text), "Uzytkownik", *adr);

		uz->zapiszUzytkownika(&array);
		this->Hide();
		this->formpowrotny->Show();
	}
private: System::Void powrotbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	this->formpowrotny->Show();
}
};
}
