#pragma once

namespace SklepUrzadzeniaMobilne {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o produktOkienko
	/// </summary>
	public ref class produktOkienko : public System::Windows::Forms::Form
	{
	public:
		produktOkienko(void)
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
		~produktOkienko()
		{
			if (components)
			{
				delete components;
			}
		}

	private: bool czyKupowany = false;

	private: System::Windows::Forms::PictureBox^ pictureBox;
	protected:
	private: System::Windows::Forms::Button^ dodajButton;
	private: System::Windows::Forms::Label^ label;

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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox
			// 
			this->pictureBox->Location = System::Drawing::Point(29, 28);
			this->pictureBox->Name = L"pictureBox";
			this->pictureBox->Size = System::Drawing::Size(112, 145);
			this->pictureBox->TabIndex = 0;
			this->pictureBox->TabStop = false;
			// 
			// dodajButton
			// 
			this->dodajButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"dodajButton.BackgroundImage")));
			this->dodajButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->dodajButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->dodajButton->ForeColor = System::Drawing::Color::SeaShell;
			this->dodajButton->Location = System::Drawing::Point(66, 179);
			this->dodajButton->Name = L"dodajButton";
			this->dodajButton->Size = System::Drawing::Size(36, 34);
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
			this->label->Location = System::Drawing::Point(29, 9);
			this->label->Name = L"label";
			this->label->Size = System::Drawing::Size(112, 16);
			this->label->TabIndex = 2;
			this->label->Text = L"nazwa produktu";
			// 
			// produktOkienko
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaShell;
			this->ClientSize = System::Drawing::Size(168, 228);
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
