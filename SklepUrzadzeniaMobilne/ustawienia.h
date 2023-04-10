#pragma once
#include "Utils.h"
#include <msclr\marshal_cppstd.h>
namespace SklepUrzadzeniaMobilne {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ustawienia
	/// </summary>
	public ref class ustawienia : public System::Windows::Forms::Form
	{
	public:
		bool starehasloklikniete = false;
		bool nowehasloklikniete = false;
		bool nowemiastoklikniete = false;
		bool nowykodklikniete = false;
		bool nowaulicakliniete = false;
		bool nowynumerklikniete = false;
		ustawienia(void)
		{
			InitializeComponent();
		}
		ustawienia(Form^ f, Form^ w, Uzytkownik* zalogowany)
		{
			InitializeComponent();
			powrotny = f;
			wyzszy = w;
			uzalogowany = zalogowany;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ustawienia()
		{
			if (components)
			{
				delete components;
			}
		}

	private: Form^ powrotny;
	private: Form^ wyzszy;
	private: Uzytkownik* uzalogowany;
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ zmianaHaslabutton;
	private: System::Windows::Forms::TextBox^ noweHaslotextBox;
	private: System::Windows::Forms::TextBox^ stareHaslotextBox;
	private: System::Windows::Forms::Button^ wylogujbutton;
	private: System::Windows::Forms::Button^ usunbutton;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ noweMiastotextBox;
	private: System::Windows::Forms::TextBox^ nowyNumertextBox;
	private: System::Windows::Forms::TextBox^ nowaUlicatextBox;
	private: System::Windows::Forms::TextBox^ nowyKodtextBox;
	private: System::Windows::Forms::Button^ zmianaAdresubutton;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->zmianaHaslabutton = (gcnew System::Windows::Forms::Button());
			this->noweHaslotextBox = (gcnew System::Windows::Forms::TextBox());
			this->stareHaslotextBox = (gcnew System::Windows::Forms::TextBox());
			this->wylogujbutton = (gcnew System::Windows::Forms::Button());
			this->usunbutton = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->zmianaAdresubutton = (gcnew System::Windows::Forms::Button());
			this->nowyNumertextBox = (gcnew System::Windows::Forms::TextBox());
			this->nowaUlicatextBox = (gcnew System::Windows::Forms::TextBox());
			this->nowyKodtextBox = (gcnew System::Windows::Forms::TextBox());
			this->noweMiastotextBox = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label1->Location = System::Drawing::Point(10, 8);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(107, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Zmiana hasła";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label2->Location = System::Drawing::Point(12, 8);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(117, 18);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Zmiana adresu";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::SeaShell;
			this->panel1->Controls->Add(this->zmianaHaslabutton);
			this->panel1->Controls->Add(this->noweHaslotextBox);
			this->panel1->Controls->Add(this->stareHaslotextBox);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(8, 8);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(220, 133);
			this->panel1->TabIndex = 1;
			// 
			// zmianaHaslabutton
			// 
			this->zmianaHaslabutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->zmianaHaslabutton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->zmianaHaslabutton->ForeColor = System::Drawing::Color::SaddleBrown;
			this->zmianaHaslabutton->Location = System::Drawing::Point(142, 91);
			this->zmianaHaslabutton->Margin = System::Windows::Forms::Padding(2);
			this->zmianaHaslabutton->Name = L"zmianaHaslabutton";
			this->zmianaHaslabutton->Size = System::Drawing::Size(61, 28);
			this->zmianaHaslabutton->TabIndex = 2;
			this->zmianaHaslabutton->Text = L"Zapisz";
			this->zmianaHaslabutton->UseVisualStyleBackColor = true;
			// 
			// noweHaslotextBox
			// 
			this->noweHaslotextBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->noweHaslotextBox->ForeColor = System::Drawing::Color::SaddleBrown;
			this->noweHaslotextBox->Location = System::Drawing::Point(13, 57);
			this->noweHaslotextBox->Margin = System::Windows::Forms::Padding(2);
			this->noweHaslotextBox->Name = L"noweHaslotextBox";
			this->noweHaslotextBox->Size = System::Drawing::Size(152, 21);
			this->noweHaslotextBox->TabIndex = 1;
			this->noweHaslotextBox->Text = L"Wpisz nowe hasło";
			this->noweHaslotextBox->Enter += gcnew System::EventHandler(this, &ustawienia::noweHaslotextBox_Validated);
			this->noweHaslotextBox->Leave += gcnew System::EventHandler(this, &ustawienia::noweHaslotextBox_Leave);
			// 
			// stareHaslotextBox
			// 
			this->stareHaslotextBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stareHaslotextBox->ForeColor = System::Drawing::Color::SaddleBrown;
			this->stareHaslotextBox->Location = System::Drawing::Point(13, 36);
			this->stareHaslotextBox->Margin = System::Windows::Forms::Padding(2);
			this->stareHaslotextBox->Name = L"stareHaslotextBox";
			this->stareHaslotextBox->Size = System::Drawing::Size(152, 21);
			this->stareHaslotextBox->TabIndex = 1;
			this->stareHaslotextBox->Text = L"Wpisz stare hasło";
			this->stareHaslotextBox->Enter += gcnew System::EventHandler(this, &ustawienia::stareHaslotextBox_Validated);
			this->stareHaslotextBox->Leave += gcnew System::EventHandler(this, &ustawienia::stareHaslotextBox_Leave);
			// 
			// wylogujbutton
			// 
			this->wylogujbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->wylogujbutton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->wylogujbutton->ForeColor = System::Drawing::Color::SeaShell;
			this->wylogujbutton->Location = System::Drawing::Point(21, 221);
			this->wylogujbutton->Margin = System::Windows::Forms::Padding(2);
			this->wylogujbutton->Name = L"wylogujbutton";
			this->wylogujbutton->Size = System::Drawing::Size(87, 28);
			this->wylogujbutton->TabIndex = 2;
			this->wylogujbutton->Text = L"Wyloguj";
			this->wylogujbutton->UseVisualStyleBackColor = true;
			this->wylogujbutton->Click += gcnew System::EventHandler(this, &ustawienia::wylogujbutton_Click);
			// 
			// usunbutton
			// 
			this->usunbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->usunbutton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usunbutton->ForeColor = System::Drawing::Color::SeaShell;
			this->usunbutton->Location = System::Drawing::Point(21, 253);
			this->usunbutton->Margin = System::Windows::Forms::Padding(2);
			this->usunbutton->Name = L"usunbutton";
			this->usunbutton->Size = System::Drawing::Size(87, 46);
			this->usunbutton->TabIndex = 2;
			this->usunbutton->Text = L"Usuń konto";
			this->usunbutton->UseVisualStyleBackColor = true;
			this->usunbutton->Click += gcnew System::EventHandler(this, &ustawienia::usunbutton_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::SeaShell;
			this->panel2->Controls->Add(this->zmianaAdresubutton);
			this->panel2->Controls->Add(this->nowyNumertextBox);
			this->panel2->Controls->Add(this->nowaUlicatextBox);
			this->panel2->Controls->Add(this->nowyKodtextBox);
			this->panel2->Controls->Add(this->noweMiastotextBox);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Location = System::Drawing::Point(262, 8);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(284, 291);
			this->panel2->TabIndex = 3;
			// 
			// zmianaAdresubutton
			// 
			this->zmianaAdresubutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->zmianaAdresubutton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->zmianaAdresubutton->ForeColor = System::Drawing::Color::SaddleBrown;
			this->zmianaAdresubutton->Location = System::Drawing::Point(208, 245);
			this->zmianaAdresubutton->Margin = System::Windows::Forms::Padding(2);
			this->zmianaAdresubutton->Name = L"zmianaAdresubutton";
			this->zmianaAdresubutton->Size = System::Drawing::Size(61, 28);
			this->zmianaAdresubutton->TabIndex = 2;
			this->zmianaAdresubutton->Text = L"Zapisz";
			this->zmianaAdresubutton->UseVisualStyleBackColor = true;
			this->zmianaAdresubutton->Click += gcnew System::EventHandler(this, &ustawienia::zmianaAdresubutton_Click);
			// 
			// nowyNumertextBox
			// 
			this->nowyNumertextBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->nowyNumertextBox->ForeColor = System::Drawing::Color::SaddleBrown;
			this->nowyNumertextBox->Location = System::Drawing::Point(15, 117);
			this->nowyNumertextBox->Name = L"nowyNumertextBox";
			this->nowyNumertextBox->Size = System::Drawing::Size(193, 21);
			this->nowyNumertextBox->TabIndex = 4;
			this->nowyNumertextBox->Text = L"Wpisz tutaj nowy numer domu";
			this->nowyNumertextBox->Enter += gcnew System::EventHandler(this, &ustawienia::nowyNumertextBox_Enter);
			this->nowyNumertextBox->Leave += gcnew System::EventHandler(this, &ustawienia::nowyNumertextBox_Leave);
			// 
			// nowaUlicatextBox
			// 
			this->nowaUlicatextBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->nowaUlicatextBox->ForeColor = System::Drawing::Color::SaddleBrown;
			this->nowaUlicatextBox->Location = System::Drawing::Point(15, 90);
			this->nowaUlicatextBox->Name = L"nowaUlicatextBox";
			this->nowaUlicatextBox->Size = System::Drawing::Size(193, 21);
			this->nowaUlicatextBox->TabIndex = 3;
			this->nowaUlicatextBox->Text = L"Wpisz tutaj nową ulicę";
			this->nowaUlicatextBox->Enter += gcnew System::EventHandler(this, &ustawienia::nowaUlicatextBox_Enter);
			this->nowaUlicatextBox->Leave += gcnew System::EventHandler(this, &ustawienia::nowaUlicatextBox_Leave);
			// 
			// nowyKodtextBox
			// 
			this->nowyKodtextBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->nowyKodtextBox->ForeColor = System::Drawing::Color::SaddleBrown;
			this->nowyKodtextBox->Location = System::Drawing::Point(15, 63);
			this->nowyKodtextBox->Name = L"nowyKodtextBox";
			this->nowyKodtextBox->Size = System::Drawing::Size(193, 21);
			this->nowyKodtextBox->TabIndex = 2;
			this->nowyKodtextBox->Text = L"Wpisz tutaj nowy kod pocztowy";
			this->nowyKodtextBox->Enter += gcnew System::EventHandler(this, &ustawienia::nowyKodtextBox_Enter);
			this->nowyKodtextBox->Leave += gcnew System::EventHandler(this, &ustawienia::nowyKodtextBox_Leave);
			// 
			// noweMiastotextBox
			// 
			this->noweMiastotextBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->noweMiastotextBox->ForeColor = System::Drawing::Color::SaddleBrown;
			this->noweMiastotextBox->Location = System::Drawing::Point(15, 36);
			this->noweMiastotextBox->Name = L"noweMiastotextBox";
			this->noweMiastotextBox->Size = System::Drawing::Size(193, 21);
			this->noweMiastotextBox->TabIndex = 1;
			this->noweMiastotextBox->Text = L"Wpisz tutaj nowe miasto";
			this->noweMiastotextBox->Enter += gcnew System::EventHandler(this, &ustawienia::noweMiastotextBox_Enter);
			this->noweMiastotextBox->Leave += gcnew System::EventHandler(this, &ustawienia::noweMiastotextBox_Leave);
			// 
			// ustawienia
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SaddleBrown;
			this->ClientSize = System::Drawing::Size(558, 310);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->usunbutton);
			this->Controls->Add(this->wylogujbutton);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"ustawienia";
			this->Text = L"ustawienia";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void stareHaslotextBox_Validated(System::Object^ sender, System::EventArgs^ e) {
	if (!starehasloklikniete)
	{
		this->stareHaslotextBox->Text = "";
		starehasloklikniete = true;
		this->stareHaslotextBox->PasswordChar = '*';
	}
}
private: System::Void stareHaslotextBox_Leave(System::Object^ sender, System::EventArgs^ e) {
	if (starehasloklikniete && this->stareHaslotextBox->TextLength == 0)
	{
		this->stareHaslotextBox->Text = "Wpisz stare hasło";
		starehasloklikniete = false;
		this->stareHaslotextBox->PasswordChar = '\0';
	}
}
private: System::Void noweHaslotextBox_Validated(System::Object^ sender, System::EventArgs^ e) {
	if (!nowehasloklikniete)
	{
		this->noweHaslotextBox->Text = "";
		nowehasloklikniete = true;
		this->noweHaslotextBox->PasswordChar = '*';
	}
}
private: System::Void noweHaslotextBox_Leave(System::Object^ sender, System::EventArgs^ e) {
	if (nowehasloklikniete && this->noweHaslotextBox->TextLength == 0)
	{
		this->noweHaslotextBox->Text = "Wpisz nowe hasło";
		nowehasloklikniete = false;
		this->noweHaslotextBox->PasswordChar = '\0';
	}
}
private: System::Void wylogujbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->wyzszy->Hide();
	this->powrotny->Show();
}
private: System::Void usunbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	
	std::vector<Uzytkownik> bazaUzytkownikow;
	Utils::wczytajUzytkownikow(&bazaUzytkownikow);

	Utils::usunUzytkownika(&bazaUzytkownikow, uzalogowany->GetLogin());

	this->wyzszy->Hide();
	this->powrotny->Show();
}

private: System::Void noweMiastotextBox_Enter(System::Object^ sender, System::EventArgs^ e) {

	if (!nowemiastoklikniete)
	{
		this->noweMiastotextBox->Text = "";
		nowemiastoklikniete = true;
	}
}
private: System::Void noweMiastotextBox_Leave(System::Object^ sender, System::EventArgs^ e) {

	if (nowemiastoklikniete && this->noweMiastotextBox->TextLength == 0)
	{
		this->noweMiastotextBox->Text = "Wpisz tutaj nowe miasto";
		nowemiastoklikniete = false;
	}
}
private: System::Void nowyKodtextBox_Enter(System::Object^ sender, System::EventArgs^ e) {

	if (!nowykodklikniete)
	{
		this->nowyKodtextBox->Text = "";
		nowykodklikniete = true;
	}
}
private: System::Void nowyKodtextBox_Leave(System::Object^ sender, System::EventArgs^ e) {

	if (nowykodklikniete && this->nowyKodtextBox->TextLength == 0)
	{
		this->nowyKodtextBox->Text = "Wpisz tutaj nowy kod pocztowy";
		nowykodklikniete = false;
	}
}
private: System::Void nowaUlicatextBox_Enter(System::Object^ sender, System::EventArgs^ e) {

	if (!nowaulicakliniete)
	{
		this->nowaUlicatextBox->Text = "";
		nowaulicakliniete = true;
	}
}
private: System::Void nowaUlicatextBox_Leave(System::Object^ sender, System::EventArgs^ e) {

	if (nowaulicakliniete && this->nowaUlicatextBox->TextLength == 0)
	{
		this->nowaUlicatextBox->Text = "Wpisz tutaj nową ulicę";
		nowaulicakliniete = false;
	}
}
private: System::Void nowyNumertextBox_Enter(System::Object^ sender, System::EventArgs^ e) {

	if (!nowynumerklikniete)
	{
		this->nowyNumertextBox->Text = "";
		nowynumerklikniete = true;
	}
}
private: System::Void nowyNumertextBox_Leave(System::Object^ sender, System::EventArgs^ e) {

	if (nowynumerklikniete && this->nowyNumertextBox->TextLength == 0)
	{
		this->nowyNumertextBox->Text = "Wpisz tutaj nowy numer domu";
		nowynumerklikniete = false;
	}
}

private: System::Void zmianaAdresubutton_Click(System::Object^ sender, System::EventArgs^ e) {

	string noweMiasto; string nowyKod; string nowaUlica; string nowyNumerDomu;

	this->noweMiastotextBox->Text == "Wpisz tutaj nowe miasto" ? noweMiasto = "" : noweMiasto = msclr::interop::marshal_as<std::string>(this->noweMiastotextBox->Text);
	this->nowyKodtextBox->Text == "Wpisz tutaj nowy kod pocztowy" ? nowyKod = "" : nowyKod = msclr::interop::marshal_as<std::string>(this->nowyKodtextBox->Text);
	this->nowaUlicatextBox->Text == "Wpisz tutaj nową ulicę" ? nowaUlica = "" : nowaUlica = msclr::interop::marshal_as<std::string>(this->nowaUlicatextBox->Text);
	this->nowyNumertextBox->Text == "Wpisz tutaj nowy numer domu" ? nowyNumerDomu = "" : nowyNumerDomu = msclr::interop::marshal_as<std::string>(this->nowyNumertextBox->Text);
	int nowyNumerDomuInt;

	if (nowyNumerDomu == "") nowyNumerDomuInt = 0;
	else nowyNumerDomuInt = stoi(nowyNumerDomu); 

	Utils::zmienAdres(uzalogowany->GetLogin(), noweMiasto, nowyKod, nowaUlica, nowyNumerDomuInt);

}
};
}
