#pragma once
#include "DatabaseCon.h"
#include "Utils.h"
#include <iostream>

namespace dbmsproject1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for usersForm
	/// </summary>
	public ref class usersForm : public System::Windows::Forms::Form
	{
	public:
		usersForm(void)
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
		~usersForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  address;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  created;
	private: System::Windows::Forms::Button^  button5;



	private: System::Windows::Forms::TextBox^  txtsrch;
	private: System::Windows::Forms::Label^  label4;


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->address = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->created = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->txtsrch = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(191, 23);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"find";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &usersForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Find Id:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(38, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Name:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 95);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Address:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(79, 25);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(106, 20);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(79, 58);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(217, 20);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(79, 88);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(217, 20);
			this->textBox3->TabIndex = 6;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 137);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(66, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"clear";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &usersForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(84, 137);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(66, 23);
			this->button3->TabIndex = 8;
			this->button3->Text = L"add new ";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &usersForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(156, 137);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(66, 23);
			this->button4->TabIndex = 9;
			this->button4->Text = L"delete";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &usersForm::button4_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->id, this->name,
					this->address, this->created
			});
			this->dataGridView1->Location = System::Drawing::Point(15, 220);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(617, 265);
			this->dataGridView1->TabIndex = 10;
			// 
			// id
			// 
			this->id->HeaderText = L"ID";
			this->id->Name = L"id";
			// 
			// name
			// 
			this->name->HeaderText = L"Name";
			this->name->Name = L"name";
			// 
			// address
			// 
			this->address->HeaderText = L"Address";
			this->address->Name = L"address";
			// 
			// created
			// 
			this->created->HeaderText = L"Created";
			this->created->Name = L"created";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(290, 180);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 11;
			this->button5->Text = L"Search";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &usersForm::button5_Click_1);
			// 
			// txtsrch
			// 
			this->txtsrch->Location = System::Drawing::Point(117, 181);
			this->txtsrch->Name = L"txtsrch";
			this->txtsrch->Size = System::Drawing::Size(161, 20);
			this->txtsrch->TabIndex = 15;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 185);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(95, 13);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Search (by Name):";
			// 
			// usersForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(710, 497);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtsrch);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"usersForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"usersForm";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &usersForm::usersForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void usersForm_Load(System::Object^  sender, System::EventArgs^  e) {
		
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			int findId = Int32::Parse(textBox1->Text);
			MySqlConnection^ con = gcnew MySqlConnection(DatabaseCon::getConString());
			con->Open();
			MySqlCommand^ cmd = gcnew MySqlCommand("select * from users where id = " + findId, con);
			MySqlDataReader^ dr = cmd->ExecuteReader();
			
			int count = 0;
			while (dr->Read())
			{
				count += 1;
				textBox2->Text = dr->GetString(1);
				textBox3->Text = dr->GetString(2);
			}
			if (count == 0) {
				textBox2->Text = "";
				textBox3->Text = "";
				MessageBox::Show("the row for the given id is not found.");
			}
			con->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
			textBox2->Text = "";
			textBox3->Text = "";
		}

	}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ name = textBox2->Text;
	String^ address = textBox3->Text;
	name = name->Trim();
	address = address->Trim();

	if (name->Length > 0 && address->Length > 0) {
		try {
			MySqlConnection^ con = gcnew MySqlConnection(DatabaseCon::getConString());
			con->Open();

			//mysql query  = INSERT INTO users(name,address) values( 'name 1','address 1'  )"

			String^ createdDate = Utils::getDate();
			MySqlCommand^ cmd = gcnew MySqlCommand("INSERT INTO users(name,address,created) values( '" + name+"','"+address+"','"+createdDate+"')", con);
			MySqlDataReader^ dr = cmd->ExecuteReader();

			textBox2->Text = "";
			textBox3->Text = "";
			MessageBox::Show("Row Inserted.");
			
			con->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	
	}
}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		System::Windows::Forms::DialogResult result = MessageBox::Show("are u sure to delete ?", "Delete User", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

		System:Console::WriteLine(result);

		if (System::Windows::Forms::DialogResult::Yes == result) {

			try {
				int deleteId = Int32::Parse(textBox1->Text);
				if (deleteId > -1) {
					MySqlConnection^ con = gcnew MySqlConnection(DatabaseCon::getConString());
					con->Open();

					//mysql query  = delete from users where id = 1"

					String^ createdDate = Utils::getDate();
					MySqlCommand^ cmd = gcnew MySqlCommand(" delete from users where id = "+deleteId,con);
					MySqlDataReader^ dr = cmd->ExecuteReader();

					
					MessageBox::Show("Row Delted.");
					con->Close();
				}
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}
	}
private: System::Void button5_Click_1(System::Object^  sender, System::EventArgs^  e) {

	try {
		String^ searchText = txtsrch->Text;
		MySqlConnection^ con = gcnew MySqlConnection(DatabaseCon::getConString());
		con->Open();
		MySqlCommand^ cmd = gcnew MySqlCommand("select * from users where name like '%"+ searchText +"%'", con);
		MySqlDataReader^ dr = cmd->ExecuteReader();

		int count = 0;
		dataGridView1->Rows->Clear();
		while (dr->Read())
		{
			count += 1;
			cli::array<String^>^ row = {""+dr->GetString(0), dr->GetString(1), dr->GetString(2),""+dr->GetString(3) };

			
			dataGridView1->Rows->Add(row);
		}
		if (count == 0) {
		
			MessageBox::Show("any users not found.");
		}
		con->Close();
	}
	catch (Exception^ ex)
	{
		System::Console::WriteLine(ex);
		MessageBox::Show(ex->Message);
	}
	}
};
}
