#pragma once
#include "Produkt.h"
#include <iostream>
#include <sstream>
#include<string>
#include <msclr/marshal_cppstd.h>
namespace SklepUrzadzeniaMobilne {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	template <typename T> string tostr(const T& t) {
		ostringstream os;
		os << t;
		return os.str();
	}

	/// <summary>
	/// Podsumowanie informacji o produktOkienko
	/// </summary>
	public ref class produktOkienko : public System::Windows::Forms::Form
	{
	public:
		produktOkienko(void)
		{
			InitializeComponent();
		}

		produktOkienko(Produkt* p)
		{
			InitializeComponent();
			produkt = p;

			string result = tostr(produkt->Get_cena())+" PLN";

			kategorialabel->Text = msclr::interop::marshal_as<System::String^>(produkt->Get_typ_produktu());
			label->Text = msclr::interop::marshal_as<System::String^>(produkt->Get_marka() + " " + produkt->Get_nazwa());
			cenalabel->Text = msclr::interop::marshal_as<System::String^>(result);

			if (produkt->Get_typ_produktu() == "Telefon")
			{

				pictureBox->Image = Image::FromFile("telefon1.png");
			}
			else if (produkt->Get_typ_produktu() == "Laptop")
			{
				pictureBox->Image = Image::FromFile("laptop.png");
			}
			else if (produkt->Get_typ_produktu() == "Akcesoria")
			{
				pictureBox->Image = Image::FromFile("akcesoria.png");
			}
			else if (produkt->Get_typ_produktu() == "Tablet")
			{
				pictureBox->Image = Image::FromFile("tablet.png");
			}

		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~produktOkienko()
		{
			if (components)
			{
				delete components;
			}
		}

	public: bool czyKupowany = false;
	public: Produkt* produkt;

	private: System::Windows::Forms::PictureBox^ pictureBox;
	protected:
	private: System::Windows::Forms::Button^ dodajButton;
	private: System::Windows::Forms::Label^ label;
	private: System::Windows::Forms::Label^ kategorialabel;
	private: System::Windows::Forms::Label^ cenalabel;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(produktOkienko::typeid));
			this->pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->dodajButton = (gcnew System::Windows::Forms::Button());
			this->label = (gcnew System::Windows::Forms::Label());
			this->kategorialabel = (gcnew System::Windows::Forms::Label());
			this->cenalabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox
			// 
			this->pictureBox->Location = System::Drawing::Point(12, 66);
			this->pictureBox->Name = L"pictureBox";
			this->pictureBox->Size = System::Drawing::Size(151, 145);
			this->pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox->TabIndex = 0;
			this->pictureBox->TabStop = false;
			// 
			// dodajButton
			// 
			this->dodajButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"dodajButton.BackgroundImage")));
			this->dodajButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->dodajButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->dodajButton->ForeColor = System::Drawing::Color::SeaShell;
			this->dodajButton->Location = System::Drawing::Point(71, 217);
			this->dodajButton->Name = L"dodajButton";
			this->dodajButton->Size = System::Drawing::Size(29, 27);
			this->dodajButton->TabIndex = 1;
			this->dodajButton->UseVisualStyleBackColor = true;
			this->dodajButton->Click += gcnew System::EventHandler(this, &produktOkienko::dodajButton_Click);
			// 
			// label
			// 
			this->label->AutoSize = true;
			this->label->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label->Location = System::Drawing::Point(32, 27);
			this->label->Name = L"label";
			this->label->Size = System::Drawing::Size(112, 16);
			this->label->TabIndex = 2;
			this->label->Text = L"nazwa produktu";
			this->label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// kategorialabel
			// 
			this->kategorialabel->AutoSize = true;
			this->kategorialabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->kategorialabel->ForeColor = System::Drawing::Color::SaddleBrown;
			this->kategorialabel->Location = System::Drawing::Point(32, 9);
			this->kategorialabel->Name = L"kategorialabel";
			this->kategorialabel->Size = System::Drawing::Size(112, 16);
			this->kategorialabel->TabIndex = 2;
			this->kategorialabel->Text = L"nazwa produktu";
			this->kategorialabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// cenalabel
			// 
			this->cenalabel->AutoSize = true;
			this->cenalabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->cenalabel->ForeColor = System::Drawing::Color::SaddleBrown;
			this->cenalabel->Location = System::Drawing::Point(32, 47);
			this->cenalabel->Name = L"cenalabel";
			this->cenalabel->Size = System::Drawing::Size(112, 16);
			this->cenalabel->TabIndex = 2;
			this->cenalabel->Text = L"nazwa produktu";
			this->cenalabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// produktOkienko
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaShell;
			this->ClientSize = System::Drawing::Size(175, 256);
			this->Controls->Add(this->kategorialabel);
			this->Controls->Add(this->cenalabel);
			this->Controls->Add(this->label);
			this->Controls->Add(this->dodajButton);
			this->Controls->Add(this->pictureBox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"produktOkienko";
			this->Text = L"produktOkienko";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dodajButton_Click(System::Object^ sender, System::EventArgs^ e) {
		czyKupowany = true;
	}

	public: System::Boolean kupowanyGetData()
	{
		return czyKupowany;
	}
	};
}
