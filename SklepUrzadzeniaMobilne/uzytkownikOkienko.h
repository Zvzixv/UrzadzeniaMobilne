#pragma once
#include "Uzytkownik.h"
#include <msclr/marshal_cppstd.h>
#include "SerializatorUzytkownicy.h"

namespace SklepUrzadzeniaMobilne {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o uzytkownikOkienko
	/// </summary>
	public ref class uzytkownikOkienko : public System::Windows::Forms::Form
	{
	public:
		uzytkownikOkienko(void)
		{
			InitializeComponent();
		}
		uzytkownikOkienko(Uzytkownik* uz)
		{
			InitializeComponent();
			uzytkownik = uz;

			std::string login = uz->GetLogin();
			System::String^ loginSkonwertowany = msclr::interop::marshal_as<System::String^>(login);

			std::string imienazwisko = uz->GetImie() + " " + uz->GetNazwisko();
			System::String^ imienazwiskoSkonwertowany = msclr::interop::marshal_as<System::String^>(imienazwisko);

			std::string rola = uz->GetRola();
			System::String^ rolaSkonwertowany = msclr::interop::marshal_as<System::String^>(rola);
			
			loginlabel->Text = loginSkonwertowany;
			imieNazwiskolabel->Text = imienazwiskoSkonwertowany;
			rolalabel->Text = rolaSkonwertowany;
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~uzytkownikOkienko()
		{
			if (components)
			{
				delete components;
			}
		}

	private: Uzytkownik* uzytkownik;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ zmienRolebutton;
	private: System::Windows::Forms::Label^ loginlabel;
	private: System::Windows::Forms::Label^ imieNazwiskolabel;
	private: System::Windows::Forms::Label^ rolalabel;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(uzytkownikOkienko::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->zmienRolebutton = (gcnew System::Windows::Forms::Button());
			this->loginlabel = (gcnew System::Windows::Forms::Label());
			this->imieNazwiskolabel = (gcnew System::Windows::Forms::Label());
			this->rolalabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(87, 121);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label1->Location = System::Drawing::Point(122, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(140, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Nazwa u¿ytkownika:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label2->Location = System::Drawing::Point(122, 29);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Imiê i nazwisko:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label3->Location = System::Drawing::Point(122, 45);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 16);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Rola:";
			// 
			// zmienRolebutton
			// 
			this->zmienRolebutton->BackColor = System::Drawing::Color::SeaShell;
			this->zmienRolebutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->zmienRolebutton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->zmienRolebutton->ForeColor = System::Drawing::Color::SaddleBrown;
			this->zmienRolebutton->Location = System::Drawing::Point(125, 89);
			this->zmienRolebutton->Name = L"zmienRolebutton";
			this->zmienRolebutton->Size = System::Drawing::Size(75, 44);
			this->zmienRolebutton->TabIndex = 2;
			this->zmienRolebutton->Text = L"Zmieñ rolê";
			this->zmienRolebutton->UseVisualStyleBackColor = false;
			this->zmienRolebutton->Click += gcnew System::EventHandler(this, &uzytkownikOkienko::zmienRolebutton_Click);
			// 
			// loginlabel
			// 
			this->loginlabel->AutoSize = true;
			this->loginlabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->loginlabel->ForeColor = System::Drawing::Color::SaddleBrown;
			this->loginlabel->Location = System::Drawing::Point(268, 13);
			this->loginlabel->Name = L"loginlabel";
			this->loginlabel->Size = System::Drawing::Size(153, 16);
			this->loginlabel->TabIndex = 1;
			this->loginlabel->Text = L"<nazwa_uzytkownika>";
			// 
			// imieNazwiskolabel
			// 
			this->imieNazwiskolabel->AutoSize = true;
			this->imieNazwiskolabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->imieNazwiskolabel->ForeColor = System::Drawing::Color::SaddleBrown;
			this->imieNazwiskolabel->Location = System::Drawing::Point(238, 29);
			this->imieNazwiskolabel->Name = L"imieNazwiskolabel";
			this->imieNazwiskolabel->Size = System::Drawing::Size(122, 16);
			this->imieNazwiskolabel->TabIndex = 1;
			this->imieNazwiskolabel->Text = L"<imie i nazwisko>";
			// 
			// rolalabel
			// 
			this->rolalabel->AutoSize = true;
			this->rolalabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->rolalabel->ForeColor = System::Drawing::Color::SaddleBrown;
			this->rolalabel->Location = System::Drawing::Point(168, 45);
			this->rolalabel->Name = L"rolalabel";
			this->rolalabel->Size = System::Drawing::Size(49, 16);
			this->rolalabel->TabIndex = 1;
			this->rolalabel->Text = L"<rola>";
			// 
			// uzytkownikOkienko
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaShell;
			this->ClientSize = System::Drawing::Size(457, 149);
			this->Controls->Add(this->zmienRolebutton);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->rolalabel);
			this->Controls->Add(this->imieNazwiskolabel);
			this->Controls->Add(this->loginlabel);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"uzytkownikOkienko";
			this->Text = L"uzytkownikOkienko";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		private: System::Void zmienRolebutton_Click(System::Object^ sender, System::EventArgs^ e) {
			SerializatorUzytkownicy::zmienUprawnienia(this->uzytkownik->GetLogin());


			if (this->uzytkownik->GetRola() == "Uzytkownik")
			{
				System::String^ rolaSkonwertowany = msclr::interop::marshal_as<System::String^>("Administrator");
				this->rolalabel->Text = rolaSkonwertowany;
				uzytkownik->SetRola("Administrator");
			}
			else if (this->uzytkownik->GetRola() == "Administrator")
			{
				System::String^ rolaSkonwertowany = msclr::interop::marshal_as<System::String^>("Uzytkownik");
				this->rolalabel->Text = rolaSkonwertowany;
				uzytkownik->SetRola("Uzytkownik");
			}
		}
#pragma endregion
};
}
