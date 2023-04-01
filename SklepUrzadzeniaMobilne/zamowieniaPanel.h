#pragma once
#include "zamowienieOkienko.h"
namespace SklepUrzadzeniaMobilne {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for zamowieniaPanel
	/// </summary>
	public ref class zamowieniaPanel : public System::Windows::Forms::Form
	{
	public:
		zamowieniaPanel(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			zamowienieOkienko^ zam1 = gcnew zamowienieOkienko();
			zamowienieOkienko^ zam2 = gcnew zamowienieOkienko();
			zamowienieOkienko^ zam3 = gcnew zamowienieOkienko();


			zam1->TopLevel = false;
			this->flowLayoutPanel->Controls->Add(zam1);
			zam1->Show();


			zam2->TopLevel = false;
			this->flowLayoutPanel->Controls->Add(zam2);
			zam2->Show();

			zam3->TopLevel = false;
			this->flowLayoutPanel->Controls->Add(zam3);
			zam3->Show();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~zamowieniaPanel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel;


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
			this->flowLayoutPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->SuspendLayout();
			// 
			// flowLayoutPanel
			// 
			this->flowLayoutPanel->AutoScroll = true;
			this->flowLayoutPanel->Location = System::Drawing::Point(12, 12);
			this->flowLayoutPanel->Name = L"flowLayoutPanel";
			this->flowLayoutPanel->Size = System::Drawing::Size(534, 286);
			this->flowLayoutPanel->TabIndex = 0;
			// 
			// zamowieniaPanel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SaddleBrown;
			this->ClientSize = System::Drawing::Size(558, 310);
			this->Controls->Add(this->flowLayoutPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"zamowieniaPanel";
			this->Text = L"zamowieniaPanel";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
