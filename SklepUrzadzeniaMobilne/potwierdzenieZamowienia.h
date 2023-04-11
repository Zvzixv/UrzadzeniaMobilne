#pragma once
#include <vector>
#include "Produkt.h"
#include <msclr/marshal_cppstd.h>
#include "produktOkienko.h"
#include "SerializatorZamowienia.h"
namespace SklepUrzadzeniaMobilne {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;



	/// <summary>
	/// Podsumowanie informacji o potwierdzenieZamowienia
	/// </summary>
	public ref class potwierdzenieZamowienia : public System::Windows::Forms::Form
	{
	public:
		potwierdzenieZamowienia(void)
		{
			InitializeComponent();
		}

		potwierdzenieZamowienia(vector<Produkt*>* k, Uzytkownik* uz_zal)
		{
			InitializeComponent();
			koszyk = k;
			uz_zalogowany = uz_zal;
			wyswietlInformacje();

		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~potwierdzenieZamowienia()
		{
			if (components)
			{
				delete components;
			}
		}

	private: std::vector<Produkt*>* koszyk;
	private: Uzytkownik* uz_zalogowany;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ produktylabel;
	private: System::Windows::Forms::Button^ zapiszZamowieniebutton;
	private: System::Windows::Forms::Button^ anulujbutton;
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
			this->produktylabel = (gcnew System::Windows::Forms::Label());
			this->zapiszZamowieniebutton = (gcnew System::Windows::Forms::Button());
			this->anulujbutton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::Color::SeaShell;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Twoje produkty:";
			// 
			// produktylabel
			// 
			this->produktylabel->AutoSize = true;
			this->produktylabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->produktylabel->ForeColor = System::Drawing::Color::SeaShell;
			this->produktylabel->Location = System::Drawing::Point(13, 40);
			this->produktylabel->Name = L"produktylabel";
			this->produktylabel->Size = System::Drawing::Size(82, 16);
			this->produktylabel->TabIndex = 0;
			this->produktylabel->Text = L"<produkty>";
			// 
			// zapiszZamowieniebutton
			// 
			this->zapiszZamowieniebutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->zapiszZamowieniebutton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->zapiszZamowieniebutton->ForeColor = System::Drawing::Color::SeaShell;
			this->zapiszZamowieniebutton->Location = System::Drawing::Point(389, 202);
			this->zapiszZamowieniebutton->Name = L"zapiszZamowieniebutton";
			this->zapiszZamowieniebutton->Size = System::Drawing::Size(75, 30);
			this->zapiszZamowieniebutton->TabIndex = 1;
			this->zapiszZamowieniebutton->Text = L"Op³aæ";
			this->zapiszZamowieniebutton->UseVisualStyleBackColor = true;
			this->zapiszZamowieniebutton->Click += gcnew System::EventHandler(this, &potwierdzenieZamowienia::zapiszZamowieniebutton_Click);
			// 
			// anulujbutton
			// 
			this->anulujbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->anulujbutton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->anulujbutton->ForeColor = System::Drawing::Color::SeaShell;
			this->anulujbutton->Location = System::Drawing::Point(293, 202);
			this->anulujbutton->Name = L"anulujbutton";
			this->anulujbutton->Size = System::Drawing::Size(75, 30);
			this->anulujbutton->TabIndex = 2;
			this->anulujbutton->Text = L"Anuluj";
			this->anulujbutton->UseVisualStyleBackColor = true;
			this->anulujbutton->Click += gcnew System::EventHandler(this, &potwierdzenieZamowienia::anulujbutton_Click);
			// 
			// potwierdzenieZamowienia
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SaddleBrown;
			this->ClientSize = System::Drawing::Size(499, 261);
			this->Controls->Add(this->anulujbutton);
			this->Controls->Add(this->zapiszZamowieniebutton);
			this->Controls->Add(this->produktylabel);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"potwierdzenieZamowienia";
			this->Text = L"potwierdzenieZamowienia";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void zapiszZamowieniebutton_Click(System::Object^ sender, System::EventArgs^ e) {
		vector<Zamowienie> zamowienia;
		SerializatorZamowienia::odczytajZamowienia(&zamowienia);

		SYSTEMTIME systemtime;
		GetLocalTime(&systemtime);
		String^ data = systemtime.wDay + "." + systemtime.wMonth + "." + systemtime.wYear;
		string dataFormat = msclr::interop::marshal_as<std::string>(data);

		int ostatniElement = zamowienia.size()-1;
		Zamowienie ostatnieZamowienie = zamowienia[ostatniElement];
		int ostatnieId = ostatnieZamowienie.getIdZamowienia();
		int noweId = ostatnieId + 1;

		Zamowienie noweZamowienie;
		noweZamowienie.setIdZamowienia(noweId);
		noweZamowienie.setUzytkownik(*uz_zalogowany);
		noweZamowienie.setProdukty(*koszyk);
		noweZamowienie.setDataZlozenia(dataFormat);
		zamowienia.push_back(noweZamowienie);

		SerializatorZamowienia::zapiszZamowienie(&zamowienia);
		this->Close();
	}
	private: System::Void anulujbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void wyswietlInformacje()
	{
		   string informacje;
		   for (auto prod : *koszyk)
		   {
			   informacje += prod->Get_typ_produktu() + " " + prod->Get_marka() + " " + prod->Get_nazwa() + " - " + tostr(prod->Get_cena())+ " PLN\n";
		   }

		   produktylabel->Text = msclr::interop::marshal_as<System::String^>(informacje);
		   informacje = "";
	}
};
}
