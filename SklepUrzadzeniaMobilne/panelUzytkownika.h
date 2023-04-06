#pragma once
#include "dashboardUzytkownika.h"
#include "ProduktyPanel.h"
#include "zamowieniaPanel.h"
#include "kontakt.h"
#include "ustawienia.h"
#include "Uzytkownik.h"

namespace SklepUrzadzeniaMobilne {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for panelUzytkownika
	/// </summary>
	public ref class panelUzytkownika : public System::Windows::Forms::Form
	{
	public:
		panelUzytkownika(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			this->panelNawigacyjny->Controls->Clear();
			dashboardUzytkownika^ du = gcnew dashboardUzytkownika();
			du->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			du->TopLevel = false;

			this->panelNawigacyjny->Controls->Add(du);
			du->Show();
			this->label1->Text = "Panel użytkownika";
		}
		panelUzytkownika(Form^ f, char r, Uzytkownik* zalogowany)
		{
			InitializeComponent();
			powrotny = f;
			rola = r;
			uz_zalogowany = zalogowany;

			this->panelNawigacyjny->Controls->Clear();
			dashboardUzytkownika^ du = gcnew dashboardUzytkownika(uz_zalogowany);
			du->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			du->TopLevel = false;

			this->panelNawigacyjny->Controls->Add(du);
			du->Show();
			this->label1->Text = "Panel użytkownika";
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~panelUzytkownika()
		{
			if (components)
			{
				delete components;
			}
		}

	private: Form^ powrotny;
	private: char rola;
	private: Uzytkownik* uz_zalogowany;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ ustawieniabutton;
	protected:

	private: System::Windows::Forms::Button^ produktybutton;
	private: System::Windows::Forms::Button^ dashboardUzytkownikabutton;



	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panelNawigacyjny;

	private: System::Windows::Forms::Button^ zamowieniabutton;
	private: System::Windows::Forms::Button^ kontaktbutton;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(panelUzytkownika::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->ustawieniabutton = (gcnew System::Windows::Forms::Button());
			this->kontaktbutton = (gcnew System::Windows::Forms::Button());
			this->zamowieniabutton = (gcnew System::Windows::Forms::Button());
			this->produktybutton = (gcnew System::Windows::Forms::Button());
			this->dashboardUzytkownikabutton = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panelNawigacyjny = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::SeaShell;
			this->panel1->Controls->Add(this->ustawieniabutton);
			this->panel1->Controls->Add(this->kontaktbutton);
			this->panel1->Controls->Add(this->zamowieniabutton);
			this->panel1->Controls->Add(this->produktybutton);
			this->panel1->Controls->Add(this->dashboardUzytkownikabutton);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(228, 589);
			this->panel1->TabIndex = 0;
			// 
			// ustawieniabutton
			// 
			this->ustawieniabutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ustawieniabutton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ustawieniabutton->ForeColor = System::Drawing::Color::SaddleBrown;
			this->ustawieniabutton->Location = System::Drawing::Point(0, 517);
			this->ustawieniabutton->Name = L"ustawieniabutton";
			this->ustawieniabutton->Size = System::Drawing::Size(228, 72);
			this->ustawieniabutton->TabIndex = 1;
			this->ustawieniabutton->Text = L"Ustawienia";
			this->ustawieniabutton->UseVisualStyleBackColor = true;
			this->ustawieniabutton->Click += gcnew System::EventHandler(this, &panelUzytkownika::ustawieniabutton_Click);
			// 
			// kontaktbutton
			// 
			this->kontaktbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->kontaktbutton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->kontaktbutton->ForeColor = System::Drawing::Color::SaddleBrown;
			this->kontaktbutton->Location = System::Drawing::Point(0, 346);
			this->kontaktbutton->Name = L"kontaktbutton";
			this->kontaktbutton->Size = System::Drawing::Size(228, 72);
			this->kontaktbutton->TabIndex = 1;
			this->kontaktbutton->Text = L"Kontakt";
			this->kontaktbutton->UseVisualStyleBackColor = true;
			this->kontaktbutton->Click += gcnew System::EventHandler(this, &panelUzytkownika::kontaktbutton_Click);
			// 
			// zamowieniabutton
			// 
			this->zamowieniabutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->zamowieniabutton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->zamowieniabutton->ForeColor = System::Drawing::Color::SaddleBrown;
			this->zamowieniabutton->Location = System::Drawing::Point(0, 279);
			this->zamowieniabutton->Name = L"zamowieniabutton";
			this->zamowieniabutton->Size = System::Drawing::Size(228, 72);
			this->zamowieniabutton->TabIndex = 1;
			this->zamowieniabutton->Text = L"Zamówienia";
			this->zamowieniabutton->UseVisualStyleBackColor = true;
			this->zamowieniabutton->Click += gcnew System::EventHandler(this, &panelUzytkownika::zamowieniabutton_Click);
			// 
			// produktybutton
			// 
			this->produktybutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->produktybutton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->produktybutton->ForeColor = System::Drawing::Color::SaddleBrown;
			this->produktybutton->Location = System::Drawing::Point(0, 210);
			this->produktybutton->Name = L"produktybutton";
			this->produktybutton->Size = System::Drawing::Size(228, 72);
			this->produktybutton->TabIndex = 1;
			this->produktybutton->Text = L"Produkty";
			this->produktybutton->UseVisualStyleBackColor = true;
			this->produktybutton->Click += gcnew System::EventHandler(this, &panelUzytkownika::produktybutton_Click);
			// 
			// dashboardUzytkownikabutton
			// 
			this->dashboardUzytkownikabutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->dashboardUzytkownikabutton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dashboardUzytkownikabutton->ForeColor = System::Drawing::Color::SaddleBrown;
			this->dashboardUzytkownikabutton->Location = System::Drawing::Point(0, 141);
			this->dashboardUzytkownikabutton->Name = L"dashboardUzytkownikabutton";
			this->dashboardUzytkownikabutton->Size = System::Drawing::Size(228, 72);
			this->dashboardUzytkownikabutton->TabIndex = 1;
			this->dashboardUzytkownikabutton->Text = L"Panel użytkownika";
			this->dashboardUzytkownikabutton->UseVisualStyleBackColor = true;
			this->dashboardUzytkownikabutton->Click += gcnew System::EventHandler(this, &panelUzytkownika::dashboardUzytkownikabutton_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(228, 144);
			this->panel2->TabIndex = 1;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(27, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(172, 100);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(254, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(192, 23);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Panel użytkownika";
			// 
			// panelNawigacyjny
			// 
			this->panelNawigacyjny->Location = System::Drawing::Point(234, 56);
			this->panelNawigacyjny->Name = L"panelNawigacyjny";
			this->panelNawigacyjny->Size = System::Drawing::Size(859, 533);
			this->panelNawigacyjny->TabIndex = 2;
			// 
			// panelUzytkownika
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SaddleBrown;
			this->ClientSize = System::Drawing::Size(1092, 589);
			this->Controls->Add(this->panelNawigacyjny);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"panelUzytkownika";
			this->Text = L"Panel użytkownika";
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dashboardUzytkownikabutton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panelNawigacyjny->Controls->Clear();
		dashboardUzytkownika^ du = gcnew dashboardUzytkownika(uz_zalogowany);
		du->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		du->TopLevel = false;

		this->panelNawigacyjny->Controls->Add(du);
		du->Show();
		this->label1->Text = "Panel użytkownika";
		
	}
private: System::Void produktybutton_Click(System::Object^ sender, System::EventArgs^ e) {

	this->panelNawigacyjny->Controls->Clear();
	ProduktyPanel^ pp = gcnew ProduktyPanel();
	pp->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
	pp->TopLevel = false;

	this->panelNawigacyjny->Controls->Add(pp);
	pp->Show();
	this->label1->Text = "Produkty";
}
private: System::Void zamowieniabutton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->panelNawigacyjny->Controls->Clear();
	zamowieniaPanel^ zp = gcnew zamowieniaPanel(uz_zalogowany);
	zp->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
	zp->TopLevel = false;

	this->panelNawigacyjny->Controls->Add(zp);
	zp->Show();
	this->label1->Text = "Zamówienia";
}
private: System::Void kontaktbutton_Click(System::Object^ sender, System::EventArgs^ e) {

	this->panelNawigacyjny->Controls->Clear();
	kontakt^ k = gcnew kontakt();
	k->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
	k->TopLevel = false;

	this->panelNawigacyjny->Controls->Add(k);
	k->Show();
	this->label1->Text = "Kontakt";
}
private: System::Void ustawieniabutton_Click(System::Object^ sender, System::EventArgs^ e) {

	this->panelNawigacyjny->Controls->Clear();
	ustawienia^ u = gcnew ustawienia(powrotny, this, uz_zalogowany);
	u->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
	u->TopLevel = false;

	this->panelNawigacyjny->Controls->Add(u);
	u->Show();
	this->label1->Text = "Ustawienia";
}

public: System::Void Powrot() {
	this->Hide();
	powrotny->Show();
}
};
}
