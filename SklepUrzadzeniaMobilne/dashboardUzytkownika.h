#pragma once
#include "Uzytkownik.h"
#include <msclr\marshal_cppstd.h>
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
		dashboardUzytkownika(Uzytkownik* zalogowany)
		{
			InitializeComponent();
			uz_zal = zalogowany;

			//System::String^ label = msclr::interop::marshal_as<System::String^>(uz_zal->GetImie());
			//String^ str = gcnew String(uz_zal->GetImie().c_str());
			//nazwaUzytkownikalabel->Text = str;

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


	private: Uzytkownik* uz_zal;
	
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ nazwaUzytkownikalabel;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(dashboardUzytkownika::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->nazwaUzytkownikalabel = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(31, 35);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Witaj";
			// 
			// nazwaUzytkownikalabel
			// 
			this->nazwaUzytkownikalabel->AutoSize = true;
			this->nazwaUzytkownikalabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nazwaUzytkownikalabel->ForeColor = System::Drawing::SystemColors::Control;
			this->nazwaUzytkownikalabel->Location = System::Drawing::Point(78, 35);
			this->nazwaUzytkownikalabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->nazwaUzytkownikalabel->Name = L"nazwaUzytkownikalabel";
			this->nazwaUzytkownikalabel->Size = System::Drawing::Size(152, 18);
			this->nazwaUzytkownikalabel->TabIndex = 1;
			this->nazwaUzytkownikalabel->Text = L"nazwa uzytkownika";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
			this->label3->Location = System::Drawing::Point(444, 35);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(103, 18);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Data czy cos";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(81, 108);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(393, 226);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// dashboardUzytkownika
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SaddleBrown;
			this->ClientSize = System::Drawing::Size(573, 346);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->nazwaUzytkownikalabel);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"dashboardUzytkownika";
			this->Text = L"dashboardUzytkownika";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
