#pragma once
#include "Zamowienie.h"
#include <msclr/marshal_cppstd.h>
#include "produktOkienko.h"
#include "Uzytkownik.h"
#include "SerializatorZamowienia.h"
namespace SklepUrzadzeniaMobilne {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o zamowienieOkienko
	/// </summary>
	public ref class zamowienieOkienko : public System::Windows::Forms::Form
	{
	public:
		zamowienieOkienko(void)
		{
			InitializeComponent();
		}

		zamowienieOkienko(Zamowienie * z, Uzytkownik* zalogowany)
		{
			InitializeComponent();
			zamowienie = z;

			String^ dataSkonwertowana = msclr::interop::marshal_as<System::String^>(zamowienie->getDataZlozenia());
			datalabel->Text = dataSkonwertowana;

			string informacje;

			for (auto prod : zamowienie->getProdukty())
			{
				informacje += prod->Get_typ_produktu() + " " + prod->Get_marka() + " " + prod->Get_nazwa() + " - " + tostr(prod->Get_cena()) + " PLN\n";
			}

			produktylabel->Text = msclr::interop::marshal_as<System::String^>(informacje);
			
			Uzytkownik wlasciciel = zamowienie->getUzytkownik();

			if (zalogowany->GetRola() == "Uzytkownik")
			{
				wlasciciellabel->Visible = false;
				wlascicieldanelabel->Visible = false;
			}
			else
			{
				wlasciciellabel->Visible = true;
				wlascicieldanelabel->Visible = true;
				wlascicieldanelabel->Text = msclr::interop::marshal_as<System::String^>(wlasciciel.GetLogin());
			}
		}


	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~zamowienieOkienko()
		{
			if (components)
			{
				delete components;
			}
		}

	private: Zamowienie* zamowienie;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ zwrotbutton;
	private: System::Windows::Forms::Label^ datalabel;
	private: System::Windows::Forms::Label^ produktylabel;
	private: System::Windows::Forms::Label^ wlasciciellabel;
	private: System::Windows::Forms::Label^ wlascicieldanelabel;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->zwrotbutton = (gcnew System::Windows::Forms::Button());
			this->datalabel = (gcnew System::Windows::Forms::Label());
			this->produktylabel = (gcnew System::Windows::Forms::Label());
			this->wlasciciellabel = (gcnew System::Windows::Forms::Label());
			this->wlascicieldanelabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label1->Location = System::Drawing::Point(12, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(148, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Zamówione produkty:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label2->Location = System::Drawing::Point(13, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(124, 16);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Data zamówienia:";
			// 
			// zwrotbutton
			// 
			this->zwrotbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->zwrotbutton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->zwrotbutton->ForeColor = System::Drawing::Color::SaddleBrown;
			this->zwrotbutton->Location = System::Drawing::Point(361, 51);
			this->zwrotbutton->Name = L"zwrotbutton";
			this->zwrotbutton->Size = System::Drawing::Size(75, 36);
			this->zwrotbutton->TabIndex = 1;
			this->zwrotbutton->Text = L"Zwrot";
			this->zwrotbutton->UseVisualStyleBackColor = true;
			this->zwrotbutton->Click += gcnew System::EventHandler(this, &zamowienieOkienko::zwrotbutton_Click);
			// 
			// datalabel
			// 
			this->datalabel->AutoSize = true;
			this->datalabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->datalabel->ForeColor = System::Drawing::Color::SaddleBrown;
			this->datalabel->Location = System::Drawing::Point(143, 9);
			this->datalabel->Name = L"datalabel";
			this->datalabel->Size = System::Drawing::Size(54, 16);
			this->datalabel->TabIndex = 0;
			this->datalabel->Text = L"<data>";
			// 
			// produktylabel
			// 
			this->produktylabel->AutoSize = true;
			this->produktylabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->produktylabel->ForeColor = System::Drawing::Color::SaddleBrown;
			this->produktylabel->Location = System::Drawing::Point(11, 73);
			this->produktylabel->Name = L"produktylabel";
			this->produktylabel->Size = System::Drawing::Size(82, 16);
			this->produktylabel->TabIndex = 0;
			this->produktylabel->Text = L"<produkty>";
			// 
			// wlasciciellabel
			// 
			this->wlasciciellabel->AutoSize = true;
			this->wlasciciellabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->wlasciciellabel->ForeColor = System::Drawing::Color::SaddleBrown;
			this->wlasciciellabel->Location = System::Drawing::Point(11, 25);
			this->wlasciciellabel->Name = L"wlasciciellabel";
			this->wlasciciellabel->Size = System::Drawing::Size(164, 16);
			this->wlasciciellabel->TabIndex = 0;
			this->wlasciciellabel->Text = L"W³aœciciel zamówienia: ";
			// 
			// wlascicieldanelabel
			// 
			this->wlascicieldanelabel->AutoSize = true;
			this->wlascicieldanelabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->wlascicieldanelabel->ForeColor = System::Drawing::Color::SaddleBrown;
			this->wlascicieldanelabel->Location = System::Drawing::Point(181, 25);
			this->wlascicieldanelabel->Name = L"wlascicieldanelabel";
			this->wlascicieldanelabel->Size = System::Drawing::Size(82, 16);
			this->wlascicieldanelabel->TabIndex = 0;
			this->wlascicieldanelabel->Text = L"<produkty>";
			// 
			// zamowienieOkienko
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaShell;
			this->ClientSize = System::Drawing::Size(466, 201);
			this->Controls->Add(this->zwrotbutton);
			this->Controls->Add(this->wlascicieldanelabel);
			this->Controls->Add(this->wlasciciellabel);
			this->Controls->Add(this->produktylabel);
			this->Controls->Add(this->datalabel);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"zamowienieOkienko";
			this->Text = L"zamowienieOkienko";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void zwrotbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		std::vector<Zamowienie> bazaZamowien;
		SerializatorZamowienia::odczytajZamowienia(&bazaZamowien);

		for (auto it = bazaZamowien.begin(); it != bazaZamowien.end(); ++it) {
			if (it->getIdZamowienia() == this->zamowienie->getIdZamowienia()) {
				bazaZamowien.erase(it);
				break; 
			}
		}

		SerializatorZamowienia::zapiszZamowienie(&bazaZamowien);
		this->Hide();
	}
};
}
