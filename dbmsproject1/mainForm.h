#pragma once
#include "usersForm.h"

#include "createTicket.h"
#include "addTrain.h"
#include "addTimeTable.h"
#include "viewTimeTable.h"
#include "viewTrains.h"
namespace dbmsproject1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for mainForm
	/// </summary>
	public ref class mainForm : public System::Windows::Forms::Form
	{
	public:
		mainForm(void)
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
		~mainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  txtpass;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;

	protected:

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->txtpass = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Chocolate;
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(12, 25);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(304, 316);
			this->panel1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(73, 177);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(132, 35);
			this->button1->TabIndex = 1;
			this->button1->Text = L"GET TICKETS";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &mainForm::button1_Click_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(93, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(121, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"User Services";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Chocolate;
			this->panel2->Controls->Add(this->button6);
			this->panel2->Controls->Add(this->txtpass);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Location = System::Drawing::Point(331, 25);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(304, 316);
			this->panel2->TabIndex = 2;
			// 
			// txtpass
			// 
			this->txtpass->Location = System::Drawing::Point(89, 78);
			this->txtpass->Name = L"txtpass";
			this->txtpass->Size = System::Drawing::Size(108, 20);
			this->txtpass->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(27, 82);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Password:";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(218, 77);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(64, 23);
			this->button5->TabIndex = 5;
			this->button5->Text = L"LOGIN";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &mainForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(89, 244);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(132, 35);
			this->button4->TabIndex = 4;
			this->button4->Text = L"VIEW TIME TABLE";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &mainForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(89, 201);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(132, 35);
			this->button3->TabIndex = 3;
			this->button3->Text = L"ADD TIME TABLE";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &mainForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(89, 115);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(132, 35);
			this->button2->TabIndex = 2;
			this->button2->Text = L"ADD TRAIN";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &mainForm::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(85, 31);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(136, 22);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Admin Services";
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(89, 158);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(132, 35);
			this->button6->TabIndex = 8;
			this->button6->Text = L"VIEW TRAINS";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &mainForm::button6_Click);
			// 
			// mainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(663, 353);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"mainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Railway Seat booking  : Main";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &mainForm::mainForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void mainForm_Load(System::Object^  sender, System::EventArgs^  e) {
		
		button2->Visible = false;
		button3->Visible = false;
		button4->Visible = false;
		button6->Visible = false;
	}

	
	private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		Form^ getTicketForm = gcnew dbmsproject1::createTicket();
		getTicketForm->Show();
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	//add train
	Form^ getTicketForm = gcnew dbmsproject1::addTrain();
	getTicketForm->Show();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	//add time table
	Form^ getTicketForm = gcnew dbmsproject1::addTimeTable();
	getTicketForm->Show();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	//add time table and tickets
	Form^ getTicketForm = gcnew dbmsproject1::viewTimeTable();
	getTicketForm->Show();

}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	if (txtpass->Text == "1234") {

		button2->Visible = true;
		button3->Visible = true;
		button4->Visible = true;
		button6->Visible = true;
	}
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	Form^ viewTrains1 = gcnew dbmsproject1::viewTrains();
	viewTrains1->Show();
}
};
}
