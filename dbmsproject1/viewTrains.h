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
	/// Summary for viewTrains
	/// </summary>
	public ref class viewTrains : public System::Windows::Forms::Form
	{
	public:
		viewTrains(void)
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
		~viewTrains()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  trainFindView;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  trainId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  tainName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  cls3seats;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  cl2seats;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  cl1seats;
	private: System::Windows::Forms::Panel^  panel1;

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
			this->trainFindView = (gcnew System::Windows::Forms::DataGridView());
			this->trainId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tainName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cls3seats = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cl2seats = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cl1seats = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trainFindView))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// trainFindView
			// 
			this->trainFindView->AllowUserToAddRows = false;
			this->trainFindView->AllowUserToDeleteRows = false;
			this->trainFindView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->trainFindView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->trainId,
					this->tainName, this->cls3seats, this->cl2seats, this->cl1seats
			});
			this->trainFindView->Location = System::Drawing::Point(12, 13);
			this->trainFindView->Name = L"trainFindView";
			this->trainFindView->ReadOnly = true;
			this->trainFindView->Size = System::Drawing::Size(697, 348);
			this->trainFindView->TabIndex = 28;
			// 
			// trainId
			// 
			this->trainId->HeaderText = L"TrainId";
			this->trainId->Name = L"trainId";
			this->trainId->ReadOnly = true;
			// 
			// tainName
			// 
			this->tainName->HeaderText = L"Train Name";
			this->tainName->Name = L"tainName";
			this->tainName->ReadOnly = true;
			// 
			// cls3seats
			// 
			this->cls3seats->HeaderText = L"3rd Class Seats";
			this->cls3seats->Name = L"cls3seats";
			this->cls3seats->ReadOnly = true;
			// 
			// cl2seats
			// 
			this->cl2seats->HeaderText = L"2nd Class Seats";
			this->cl2seats->Name = L"cl2seats";
			this->cl2seats->ReadOnly = true;
			// 
			// cl1seats
			// 
			this->cl1seats->HeaderText = L"1st Class Seats";
			this->cl1seats->Name = L"cl1seats";
			this->cl1seats->ReadOnly = true;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->panel1->Controls->Add(this->trainFindView);
			this->panel1->Location = System::Drawing::Point(0, -1);
			this->panel1->Margin = System::Windows::Forms::Padding(0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(712, 381);
			this->panel1->TabIndex = 29;
			// 
			// viewTrains
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(704, 372);
			this->Controls->Add(this->panel1);
			this->Name = L"viewTrains";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"viewTrains";
			this->Load += gcnew System::EventHandler(this, &viewTrains::viewTrains_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trainFindView))->EndInit();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void viewTrains_Load(System::Object^  sender, System::EventArgs^  e) {

		MySqlConnection^ con = gcnew MySqlConnection(DatabaseCon::getConString());
		con->Open();
		MySqlCommand^ cmd = gcnew MySqlCommand("select * from trains ORDER BY trainname ASC", con);
		MySqlDataReader^ dr = cmd->ExecuteReader();

		int count = 0;
		trainFindView->Rows->Clear();
		while (dr->Read())
		{
			count += 1;
			cli::array<String^>^ row = {
				dr->GetString(0),//train id
				dr->GetString(1),//name
				dr->GetString(2),//class3 seats
				dr->GetString(3),//class2 seats
				dr->GetString(4)//class1 seats
			};

			trainFindView->Rows->Add(row);
		}
		if (count == 0) {

			MessageBox::Show("No trains found.");
		}
	}
	};
}
