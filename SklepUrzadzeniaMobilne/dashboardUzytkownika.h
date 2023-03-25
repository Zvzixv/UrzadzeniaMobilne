#pragma once

namespace SklepUrzadzeniaMobilne {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for dashboardUzytkownika
	/// </summary>
	public ref class dashboardUzytkownika : public System::Windows::Forms::Form
	{
	public:
		dashboardUzytkownika(void)
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
		~dashboardUzytkownika()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ nazwaUzytkownikalabel;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ statusZamowienialabel;
	private: System::Windows::Forms::Label^ label3;

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
			this->nazwaUzytkownikalabel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->statusZamowienialabel = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(46, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Witaj";
			// 
			// nazwaUzytkownikalabel
			// 
			this->nazwaUzytkownikalabel->AutoSize = true;
			this->nazwaUzytkownikalabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nazwaUzytkownikalabel->ForeColor = System::Drawing::SystemColors::Control;
			this->nazwaUzytkownikalabel->Location = System::Drawing::Point(117, 54);
			this->nazwaUzytkownikalabel->Name = L"nazwaUzytkownikalabel";
			this->nazwaUzytkownikalabel->Size = System::Drawing::Size(223, 26);
			this->nazwaUzytkownikalabel->TabIndex = 1;
			this->nazwaUzytkownikalabel->Text = L"nazwa uzytkownika";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(46, 159);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(433, 26);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Status Twojego ostatniego zamówienia:";
			// 
			// statusZamowienialabel
			// 
			this->statusZamowienialabel->AutoSize = true;
			this->statusZamowienialabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->statusZamowienialabel->ForeColor = System::Drawing::SystemColors::Control;
			this->statusZamowienialabel->Location = System::Drawing::Point(486, 159);
			this->statusZamowienialabel->Name = L"statusZamowienialabel";
			this->statusZamowienialabel->Size = System::Drawing::Size(242, 26);
			this->statusZamowienialabel->TabIndex = 2;
			this->statusZamowienialabel->Text = L"Oczekuje na wysyłkę";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
			this->label3->Location = System::Drawing::Point(666, 54);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(151, 26);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Data czy cos";
			// 
			// dashboardUzytkownika
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SaddleBrown;
			this->ClientSize = System::Drawing::Size(859, 533);
			this->Controls->Add(this->statusZamowienialabel);
			this->Controls->Add(this->nazwaUzytkownikalabel);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"dashboardUzytkownika";
			this->Text = L"dashboardUzytkownika";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
