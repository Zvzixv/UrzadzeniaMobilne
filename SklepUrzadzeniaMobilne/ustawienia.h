#pragma once
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
		ustawienia(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		ustawienia(Form^ f, Form^ w)
		{
			InitializeComponent();
			powrotny = f;
			wyzszy = w;
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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ noweHaslotextBox;

	private: System::Windows::Forms::TextBox^ stareHaslotextBox;

		   bool starehasloklikniete = false;
		   bool nowehasloklikniete = false;
	private: System::Windows::Forms::Button^ wylogujbutton;
	private: System::Windows::Forms::Button^ usunbutton;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->noweHaslotextBox = (gcnew System::Windows::Forms::TextBox());
			this->stareHaslotextBox = (gcnew System::Windows::Forms::TextBox());
			this->wylogujbutton = (gcnew System::Windows::Forms::Button());
			this->usunbutton = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
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
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(270, 16);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(117, 18);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Zmiana adresu";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::SeaShell;
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->noweHaslotextBox);
			this->panel1->Controls->Add(this->stareHaslotextBox);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(8, 8);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(220, 133);
			this->panel1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::SaddleBrown;
			this->button1->Location = System::Drawing::Point(142, 91);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(61, 28);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Zapisz";
			this->button1->UseVisualStyleBackColor = true;
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
			// ustawienia
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SaddleBrown;
			this->ClientSize = System::Drawing::Size(558, 310);
			this->Controls->Add(this->usunbutton);
			this->Controls->Add(this->wylogujbutton);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"ustawienia";
			this->Text = L"ustawienia";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void stareHaslotextBox_Validated(System::Object^ sender, System::EventArgs^ e) {
	if (!starehasloklikniete)
	{
		this->stareHaslotextBox->Text = "";
		starehasloklikniete = true;
		this->stareHaslotextBox->PasswordChar = '*';
		//this->stareHaslotextBox->UseSystemPasswordChar = true; to z jakiegos powodu wyrzuca wyjątek idk
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
	//usuwanie z bazy

	this->wyzszy->Hide();
	this->powrotny->Show();
}
};
}
