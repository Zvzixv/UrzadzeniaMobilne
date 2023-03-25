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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ noweHaslotextBox;

	private: System::Windows::Forms::TextBox^ stareHaslotextBox;

		   bool starehasloklikniete = false;
		   bool nowehaslokliniete = false;

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
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label1->Location = System::Drawing::Point(15, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(158, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Zmiana hasła";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(405, 25);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(172, 26);
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
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(330, 204);
			this->panel1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::SaddleBrown;
			this->button1->Location = System::Drawing::Point(201, 144);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 37);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Zapisz";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// noweHaslotextBox
			// 
			this->noweHaslotextBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->noweHaslotextBox->ForeColor = System::Drawing::Color::SaddleBrown;
			this->noweHaslotextBox->Location = System::Drawing::Point(20, 88);
			this->noweHaslotextBox->Name = L"noweHaslotextBox";
			this->noweHaslotextBox->Size = System::Drawing::Size(226, 27);
			this->noweHaslotextBox->TabIndex = 1;
			this->noweHaslotextBox->Text = L"Wpisz nowe hasło";
			this->noweHaslotextBox->Leave += gcnew System::EventHandler(this, &ustawienia::noweHaslotextBox_Leave);
			this->noweHaslotextBox->Validated += gcnew System::EventHandler(this, &ustawienia::noweHaslotextBox_Validated);
			// 
			// stareHaslotextBox
			// 
			this->stareHaslotextBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stareHaslotextBox->ForeColor = System::Drawing::Color::SaddleBrown;
			this->stareHaslotextBox->Location = System::Drawing::Point(20, 56);
			this->stareHaslotextBox->Name = L"stareHaslotextBox";
			this->stareHaslotextBox->Size = System::Drawing::Size(226, 27);
			this->stareHaslotextBox->TabIndex = 1;
			this->stareHaslotextBox->Text = L"Wpisz stare hasło";
			this->stareHaslotextBox->Leave += gcnew System::EventHandler(this, &ustawienia::stareHaslotextBox_Leave);
			this->stareHaslotextBox->Validated += gcnew System::EventHandler(this, &ustawienia::stareHaslotextBox_Validated);
			// 
			// ustawienia
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SaddleBrown;
			this->ClientSize = System::Drawing::Size(837, 477);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ustawienia";
			this->Text = L"ustawienia";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void stareHaslotextBox_Validated(System::Object^ sender, System::EventArgs^ e) {
	//tu jakies gowno sie klania i nie dziala, ogarne to potem
	if (!starehasloklikniete)
	{
		this->stareHaslotextBox->Text = "";
		starehasloklikniete = true;
		//this->stareHaslotextBox.Font = new Font(pass1textBox.Font, FontStyle.Regular);
		this->stareHaslotextBox->PasswordChar = '*';
		this->stareHaslotextBox->UseSystemPasswordChar = true;
	}
}
private: System::Void stareHaslotextBox_Leave(System::Object^ sender, System::EventArgs^ e) {
	if (starehasloklikniete && this->stareHaslotextBox->TextLength == 0)
	{
		this->stareHaslotextBox->Text = "Wpisz stare hasło";
		starehasloklikniete = false;
		this->stareHaslotextBox->UseSystemPasswordChar = false;
		this->stareHaslotextBox->PasswordChar = '\0';
	}
}
private: System::Void noweHaslotextBox_Validated(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void noweHaslotextBox_Leave(System::Object^ sender, System::EventArgs^ e) {
}
};
}
