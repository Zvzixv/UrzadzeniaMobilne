#pragma once
#include "dashboardUzytkownika.h"
#include "ProduktyPanel.h"
#include "zamowieniaPanel.h"
#include "ustawienia.h"
#include "uzytkownicyPanel.h"
#include "Uzytkownik.h"
namespace SklepUrzadzeniaMobilne {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PanelAdministratora
	/// </summary>
	public ref class PanelAdministratora : public System::Windows::Forms::Form
	{
	public:
		PanelAdministratora(void)
		{
			InitializeComponent();
		}

		PanelAdministratora(Form^ f, char r, Uzytkownik* zalogowany)
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
			this->label1->Text = "Panel administratora";
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PanelAdministratora()
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

	private: System::Windows::Forms::Button^ panelAdministratorabutton;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ uzytkownicybutton;
	private: System::Windows::Forms::Panel^ panelNawigacyjny;


	private: System::Windows::Forms::Button^ zamowieniabutton;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PanelAdministratora::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->ustawieniabutton = (gcnew System::Windows::Forms::Button());
			this->zamowieniabutton = (gcnew System::Windows::Forms::Button());
			this->uzytkownicybutton = (gcnew System::Windows::Forms::Button());
			this->produktybutton = (gcnew System::Windows::Forms::Button());
			this->panelAdministratorabutton = (gcnew System::Windows::Forms::Button());
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
			this->panel1->Controls->Add(this->zamowieniabutton);
			this->panel1->Controls->Add(this->uzytkownicybutton);
			this->panel1->Controls->Add(this->produktybutton);
			this->panel1->Controls->Add(this->panelAdministratorabutton);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(152, 383);
			this->panel1->TabIndex = 1;
			// 
			// ustawieniabutton
			// 
			this->ustawieniabutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ustawieniabutton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ustawieniabutton->ForeColor = System::Drawing::Color::SaddleBrown;
			this->ustawieniabutton->Location = System::Drawing::Point(0, 336);
			this->ustawieniabutton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ustawieniabutton->Name = L"ustawieniabutton";
			this->ustawieniabutton->Size = System::Drawing::Size(152, 47);
			this->ustawieniabutton->TabIndex = 1;
			this->ustawieniabutton->Text = L"Ustawienia";
			this->ustawieniabutton->UseVisualStyleBackColor = true;
			this->ustawieniabutton->Click += gcnew System::EventHandler(this, &PanelAdministratora::ustawieniabutton_Click);
			// 
			// zamowieniabutton
			// 
			this->zamowieniabutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->zamowieniabutton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->zamowieniabutton->ForeColor = System::Drawing::Color::SaddleBrown;
			this->zamowieniabutton->Location = System::Drawing::Point(0, 226);
			this->zamowieniabutton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->zamowieniabutton->Name = L"zamowieniabutton";
			this->zamowieniabutton->Size = System::Drawing::Size(152, 47);
			this->zamowieniabutton->TabIndex = 1;
			this->zamowieniabutton->Text = L"Zamówienia";
			this->zamowieniabutton->UseVisualStyleBackColor = true;
			this->zamowieniabutton->Click += gcnew System::EventHandler(this, &PanelAdministratora::zamowieniabutton_Click);
			// 
			// uzytkownicybutton
			// 
			this->uzytkownicybutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->uzytkownicybutton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->uzytkownicybutton->ForeColor = System::Drawing::Color::SaddleBrown;
			this->uzytkownicybutton->Location = System::Drawing::Point(0, 181);
			this->uzytkownicybutton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->uzytkownicybutton->Name = L"uzytkownicybutton";
			this->uzytkownicybutton->Size = System::Drawing::Size(152, 47);
			this->uzytkownicybutton->TabIndex = 1;
			this->uzytkownicybutton->Text = L"Użytkownicy";
			this->uzytkownicybutton->UseVisualStyleBackColor = true;
			this->uzytkownicybutton->Click += gcnew System::EventHandler(this, &PanelAdministratora::uzytkownicybutton_Click);
			// 
			// produktybutton
			// 
			this->produktybutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->produktybutton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->produktybutton->ForeColor = System::Drawing::Color::SaddleBrown;
			this->produktybutton->Location = System::Drawing::Point(0, 136);
			this->produktybutton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->produktybutton->Name = L"produktybutton";
			this->produktybutton->Size = System::Drawing::Size(152, 47);
			this->produktybutton->TabIndex = 1;
			this->produktybutton->Text = L"Produkty";
			this->produktybutton->UseVisualStyleBackColor = true;
			this->produktybutton->Click += gcnew System::EventHandler(this, &PanelAdministratora::produktybutton_Click);
			// 
			// panelAdministratorabutton
			// 
			this->panelAdministratorabutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->panelAdministratorabutton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panelAdministratorabutton->ForeColor = System::Drawing::Color::SaddleBrown;
			this->panelAdministratorabutton->Location = System::Drawing::Point(0, 92);
			this->panelAdministratorabutton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panelAdministratorabutton->Name = L"panelAdministratorabutton";
			this->panelAdministratorabutton->Size = System::Drawing::Size(152, 47);
			this->panelAdministratorabutton->TabIndex = 1;
			this->panelAdministratorabutton->Text = L"Panel administratora";
			this->panelAdministratorabutton->UseVisualStyleBackColor = true;
			this->panelAdministratorabutton->Click += gcnew System::EventHandler(this, &PanelAdministratora::panelAdministratorabutton_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(152, 94);
			this->panel2->TabIndex = 1;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(18, 8);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(115, 65);
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
			this->label1->Location = System::Drawing::Point(165, 14);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(147, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Panel administratora";
			// 
			// panelNawigacyjny
			// 
			this->panelNawigacyjny->Location = System::Drawing::Point(156, 36);
			this->panelNawigacyjny->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panelNawigacyjny->Name = L"panelNawigacyjny";
			this->panelNawigacyjny->Size = System::Drawing::Size(573, 346);
			this->panelNawigacyjny->TabIndex = 3;
			// 
			// PanelAdministratora
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SaddleBrown;
			this->ClientSize = System::Drawing::Size(728, 383);
			this->Controls->Add(this->panelNawigacyjny);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"PanelAdministratora";
			this->Text = L"PanelAdministratora";
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void panelAdministratorabutton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panelNawigacyjny->Controls->Clear();
		dashboardUzytkownika^ du = gcnew dashboardUzytkownika(uz_zalogowany);
		du->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		du->TopLevel = false;

		this->panelNawigacyjny->Controls->Add(du);
		du->Show();
		this->label1->Text = "Panel administratora";
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
private: System::Void uzytkownicybutton_Click(System::Object^ sender, System::EventArgs^ e) {

	this->panelNawigacyjny->Controls->Clear();
	uzytkownicyPanel^ u = gcnew uzytkownicyPanel();
	u->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
	u->TopLevel = false;

	this->panelNawigacyjny->Controls->Add(u);
	u->Show();
	this->label1->Text = "Użytkownicy";
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
private: System::Void ustawieniabutton_Click(System::Object^ sender, System::EventArgs^ e) {

	this->panelNawigacyjny->Controls->Clear();
	ustawienia^ u = gcnew ustawienia(powrotny, this, uz_zalogowany);
	u->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
	u->TopLevel = false;

	this->panelNawigacyjny->Controls->Add(u);
	u->Show();
	this->label1->Text = "Ustawienia";
}
};
}
