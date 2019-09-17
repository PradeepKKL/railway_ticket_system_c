#pragma once
#include "DatabaseCon.h"
#include "Utils.h"
namespace dbmsproject1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Summary for addTrain
	/// </summary>
	public ref class addTrain : public System::Windows::Forms::Form
	{
	public:
		addTrain(void)
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
		~addTrain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  txtTrainName;
	private: System::Windows::Forms::TextBox^  txt3seats;
	private: System::Windows::Forms::TextBox^  txt2seats;
	private: System::Windows::Forms::TextBox^  txt1seats;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtTrainName = (gcnew System::Windows::Forms::TextBox());
			this->txt3seats = (gcnew System::Windows::Forms::TextBox());
			this->txt2seats = (gcnew System::Windows::Forms::TextBox());
			this->txt1seats = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(30, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(68, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Train Name :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(30, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"3rd class Seats :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(30, 94);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"2nd class Seats :";
			this->label3->Click += gcnew System::EventHandler(this, &addTrain::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(30, 125);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(84, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"1st class Seats :";
			// 
			// txtTrainName
			// 
			this->txtTrainName->Location = System::Drawing::Point(127, 40);
			this->txtTrainName->Name = L"txtTrainName";
			this->txtTrainName->Size = System::Drawing::Size(169, 20);
			this->txtTrainName->TabIndex = 4;
			// 
			// txt3seats
			// 
			this->txt3seats->Location = System::Drawing::Point(127, 68);
			this->txt3seats->Name = L"txt3seats";
			this->txt3seats->Size = System::Drawing::Size(100, 20);
			this->txt3seats->TabIndex = 5;
			// 
			// txt2seats
			// 
			this->txt2seats->Location = System::Drawing::Point(127, 94);
			this->txt2seats->Name = L"txt2seats";
			this->txt2seats->Size = System::Drawing::Size(100, 20);
			this->txt2seats->TabIndex = 6;
			// 
			// txt1seats
			// 
			this->txt1seats->Location = System::Drawing::Point(127, 120);
			this->txt1seats->Name = L"txt1seats";
			this->txt1seats->Size = System::Drawing::Size(100, 20);
			this->txt1seats->TabIndex = 7;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(127, 193);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &addTrain::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(208, 193);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Close";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(43, 193);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 10;
			this->button3->Text = L"clear";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &addTrain::button3_Click);
			// 
			// addTrain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(428, 239);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txt1seats);
			this->Controls->Add(this->txt2seats);
			this->Controls->Add(this->txt3seats);
			this->Controls->Add(this->txtTrainName);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"addTrain";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"addTrain";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ trainName = L"";
		int seats3 = 0;
		int seats2 = 0;
		int seats1 = 0;
		try {
			trainName = txtTrainName->Text;
			seats3 = Int32::Parse(txt3seats->Text);
			seats2 = Int32::Parse(txt2seats->Text);
			seats1 = Int32::Parse(txt1seats->Text);

			MySqlConnection^ con = gcnew MySqlConnection(DatabaseCon::getConString());
			con->Open();

			String^ createdDate = Utils::getDate();
			MySqlCommand^ cmd = gcnew MySqlCommand("INSERT INTO trains(trainname,class3seats,class2seats,class1seats,created) values( '" + trainName + "'," + seats3 + "," + seats2 + "," + seats1 + ",'" + createdDate + "')", con);
			MySqlDataReader^ dr = cmd->ExecuteReader();

			MessageBox::Show("Train Inserted.");

			con->Close();

		}
		catch (Exception^ err) {
			MessageBox::Show(err->Message);
		}

	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		clearFields();
	}
	void clearFields(){
		txtTrainName->Text = "";
		txt3seats->Text = "";
		txt2seats->Text = "";
		txt1seats->Text = "";
	}
};
}
