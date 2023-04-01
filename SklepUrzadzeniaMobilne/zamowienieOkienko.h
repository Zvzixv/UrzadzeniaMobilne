#pragma once

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
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ zwrotbutton;
	private: System::Windows::Forms::Label^ datalabel;
	private: System::Windows::Forms::Label^ produktylabel;

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
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label1->Location = System::Drawing::Point(13, 39);
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
			this->produktylabel->Location = System::Drawing::Point(12, 61);
			this->produktylabel->Name = L"produktylabel";
			this->produktylabel->Size = System::Drawing::Size(82, 16);
			this->produktylabel->TabIndex = 0;
			this->produktylabel->Text = L"<produkty>";
			// 
			// zamowienieOkienko
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaShell;
			this->ClientSize = System::Drawing::Size(466, 153);
			this->Controls->Add(this->zwrotbutton);
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
		//usuniecie z bazy dodac ofc

		this->Hide();
	}
};
}
