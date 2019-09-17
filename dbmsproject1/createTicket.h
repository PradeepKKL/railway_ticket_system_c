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
	/// Summary for createTicket
	/// </summary>
	public ref class createTicket : public System::Windows::Forms::Form
	{
	public:
		createTicket(void)
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
		~createTicket()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  datagvTimeTable;
	protected:

	protected:

	protected:








	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  combLocTo;

	private: System::Windows::Forms::ComboBox^  combLocFrom;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::TextBox^  txtNIC;
	private: System::Windows::Forms::TextBox^  txtName;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  txtTicketCount;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  lblTrainTimeName;


	private: System::Windows::Forms::Label^  lblSelectedTrainText;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::ComboBox^  combClassSelect;
	private: System::Windows::Forms::Label^  lblTotalPayment;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  TimeTableId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  trainId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  From;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  To;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  StartTime;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  EndTime;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Class3Price;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Class2Price;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Class1Price;
	private: System::Windows::Forms::Label^  lblTicketsAvl;




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
			this->datagvTimeTable = (gcnew System::Windows::Forms::DataGridView());
			this->TimeTableId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->trainId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->From = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->To = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->StartTime = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->EndTime = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Class3Price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Class2Price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Class1Price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->combLocTo = (gcnew System::Windows::Forms::ComboBox());
			this->combLocFrom = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->lblTicketsAvl = (gcnew System::Windows::Forms::Label());
			this->lblTotalPayment = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->combClassSelect = (gcnew System::Windows::Forms::ComboBox());
			this->lblTrainTimeName = (gcnew System::Windows::Forms::Label());
			this->lblSelectedTrainText = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->txtTicketCount = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtNIC = (gcnew System::Windows::Forms::TextBox());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->datagvTimeTable))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// datagvTimeTable
			// 
			this->datagvTimeTable->AllowUserToAddRows = false;
			this->datagvTimeTable->AllowUserToDeleteRows = false;
			this->datagvTimeTable->AllowUserToOrderColumns = true;
			this->datagvTimeTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->datagvTimeTable->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->TimeTableId,
					this->trainId, this->From, this->To, this->StartTime, this->EndTime, this->Class3Price, this->Class2Price, this->Class1Price
			});
			this->datagvTimeTable->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->datagvTimeTable->Location = System::Drawing::Point(12, 78);
			this->datagvTimeTable->Margin = System::Windows::Forms::Padding(0);
			this->datagvTimeTable->Name = L"datagvTimeTable";
			this->datagvTimeTable->ReadOnly = true;
			this->datagvTimeTable->Size = System::Drawing::Size(842, 263);
			this->datagvTimeTable->TabIndex = 0;
			this->datagvTimeTable->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &createTicket::datagvTimeTable_CellClick);
			this->datagvTimeTable->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &createTicket::datagvTimeTable_CellContentClick);
			// 
			// TimeTableId
			// 
			this->TimeTableId->HeaderText = L"TimeTable Id";
			this->TimeTableId->Name = L"TimeTableId";
			this->TimeTableId->ReadOnly = true;
			// 
			// trainId
			// 
			this->trainId->HeaderText = L"trainId";
			this->trainId->Name = L"trainId";
			this->trainId->ReadOnly = true;
			this->trainId->Visible = false;
			// 
			// From
			// 
			this->From->HeaderText = L"From";
			this->From->Name = L"From";
			this->From->ReadOnly = true;
			// 
			// To
			// 
			this->To->HeaderText = L"To";
			this->To->Name = L"To";
			this->To->ReadOnly = true;
			// 
			// StartTime
			// 
			this->StartTime->HeaderText = L"Start Time";
			this->StartTime->Name = L"StartTime";
			this->StartTime->ReadOnly = true;
			// 
			// EndTime
			// 
			this->EndTime->HeaderText = L"End Time";
			this->EndTime->Name = L"EndTime";
			this->EndTime->ReadOnly = true;
			// 
			// Class3Price
			// 
			this->Class3Price->HeaderText = L"3rd Class Price";
			this->Class3Price->Name = L"Class3Price";
			this->Class3Price->ReadOnly = true;
			// 
			// Class2Price
			// 
			this->Class2Price->HeaderText = L"2nd Class Price";
			this->Class2Price->Name = L"Class2Price";
			this->Class2Price->ReadOnly = true;
			// 
			// Class1Price
			// 
			this->Class1Price->HeaderText = L"1st Class Price";
			this->Class1Price->Name = L"Class1Price";
			this->Class1Price->ReadOnly = true;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->combLocTo);
			this->panel1->Controls->Add(this->combLocFrom);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->datagvTimeTable);
			this->panel1->Location = System::Drawing::Point(-2, -1);
			this->panel1->Margin = System::Windows::Forms::Padding(0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(877, 357);
			this->panel1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(601, 36);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(88, 33);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Find";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &createTicket::button1_Click);
			// 
			// combLocTo
			// 
			this->combLocTo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->combLocTo->FormattingEnabled = true;
			this->combLocTo->Location = System::Drawing::Point(369, 38);
			this->combLocTo->Name = L"combLocTo";
			this->combLocTo->Size = System::Drawing::Size(225, 28);
			this->combLocTo->TabIndex = 5;
			this->combLocTo->SelectedIndexChanged += gcnew System::EventHandler(this, &createTicket::combLocTo_SelectedIndexChanged);
			// 
			// combLocFrom
			// 
			this->combLocFrom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->combLocFrom->FormattingEnabled = true;
			this->combLocFrom->Location = System::Drawing::Point(63, 38);
			this->combLocFrom->Name = L"combLocFrom";
			this->combLocFrom->Size = System::Drawing::Size(225, 28);
			this->combLocFrom->TabIndex = 4;
			this->combLocFrom->SelectedIndexChanged += gcnew System::EventHandler(this, &createTicket::combLocFrom_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(332, 45);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 15);
			this->label3->TabIndex = 3;
			this->label3->Text = L"To :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 15);
			this->label2->TabIndex = 2;
			this->label2->Text = L"From :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Find Train Time :";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel2->Controls->Add(this->lblTicketsAvl);
			this->panel2->Controls->Add(this->lblTotalPayment);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->combClassSelect);
			this->panel2->Controls->Add(this->lblTrainTimeName);
			this->panel2->Controls->Add(this->lblSelectedTrainText);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->txtTicketCount);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->txtNIC);
			this->panel2->Controls->Add(this->txtName);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Location = System::Drawing::Point(-3, 356);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(878, 150);
			this->panel2->TabIndex = 2;
			// 
			// lblTicketsAvl
			// 
			this->lblTicketsAvl->AutoSize = true;
			this->lblTicketsAvl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTicketsAvl->Location = System::Drawing::Point(546, 23);
			this->lblTicketsAvl->Name = L"lblTicketsAvl";
			this->lblTicketsAvl->Size = System::Drawing::Size(101, 15);
			this->lblTicketsAvl->TabIndex = 19;
			this->lblTicketsAvl->Text = L"Tickets Count :";
			// 
			// lblTotalPayment
			// 
			this->lblTotalPayment->AutoSize = true;
			this->lblTotalPayment->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTotalPayment->Location = System::Drawing::Point(546, 64);
			this->lblTotalPayment->Name = L"lblTotalPayment";
			this->lblTotalPayment->Size = System::Drawing::Size(57, 15);
			this->lblTotalPayment->TabIndex = 18;
			this->lblTotalPayment->Text = L"TOTAL :";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(307, 97);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(50, 15);
			this->label10->TabIndex = 17;
			this->label10->Text = L"Class :";
			// 
			// combClassSelect
			// 
			this->combClassSelect->FormattingEnabled = true;
			this->combClassSelect->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"3rd Class", L"2nd Class", L"1st Class" });
			this->combClassSelect->Location = System::Drawing::Point(414, 96);
			this->combClassSelect->Name = L"combClassSelect";
			this->combClassSelect->Size = System::Drawing::Size(101, 21);
			this->combClassSelect->TabIndex = 16;
			this->combClassSelect->Text = L"3rd Class";
			this->combClassSelect->SelectedIndexChanged += gcnew System::EventHandler(this, &createTicket::combClassSelect_SelectedIndexChanged);
			// 
			// lblTrainTimeName
			// 
			this->lblTrainTimeName->AutoSize = true;
			this->lblTrainTimeName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTrainTimeName->Location = System::Drawing::Point(60, 82);
			this->lblTrainTimeName->Name = L"lblTrainTimeName";
			this->lblTrainTimeName->Size = System::Drawing::Size(152, 15);
			this->lblTrainTimeName->TabIndex = 15;
			this->lblTrainTimeName->Text = L"At 05:43 (podi manike)";
			// 
			// lblSelectedTrainText
			// 
			this->lblSelectedTrainText->AutoSize = true;
			this->lblSelectedTrainText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSelectedTrainText->Location = System::Drawing::Point(60, 61);
			this->lblSelectedTrainText->Name = L"lblSelectedTrainText";
			this->lblSelectedTrainText->Size = System::Drawing::Size(123, 15);
			this->lblSelectedTrainText->TabIndex = 14;
			this->lblSelectedTrainText->Text = L"Colombo to Jaffna";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(9, 61);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(48, 15);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Train :";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Red;
			this->button2->Location = System::Drawing::Point(546, 88);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(109, 33);
			this->button2->TabIndex = 7;
			this->button2->Text = L"GET";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &createTicket::button2_Click);
			// 
			// txtTicketCount
			// 
			this->txtTicketCount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtTicketCount->Location = System::Drawing::Point(414, 58);
			this->txtTicketCount->Name = L"txtTicketCount";
			this->txtTicketCount->Size = System::Drawing::Size(101, 21);
			this->txtTicketCount->TabIndex = 12;
			this->txtTicketCount->Text = L"1";
			this->txtTicketCount->TextChanged += gcnew System::EventHandler(this, &createTicket::txtTicketCount_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(307, 61);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(101, 15);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Tickets Count :";
			// 
			// txtNIC
			// 
			this->txtNIC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNIC->Location = System::Drawing::Point(351, 17);
			this->txtNIC->Name = L"txtNIC";
			this->txtNIC->Size = System::Drawing::Size(164, 21);
			this->txtNIC->TabIndex = 10;
			// 
			// txtName
			// 
			this->txtName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtName->Location = System::Drawing::Point(63, 17);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(225, 21);
			this->txtName->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(307, 20);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(38, 15);
			this->label5->TabIndex = 8;
			this->label5->Text = L"NIC :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(9, 20);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 15);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Name :";
			// 
			// createTicket
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(866, 506);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"createTicket";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Create Ticket";
			this->Load += gcnew System::EventHandler(this, &createTicket::createTicket_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->datagvTimeTable))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void createTicket_Load(System::Object^  sender, System::EventArgs^  e) {
		this->FillFromLocations();
		this->FillToLocations("");
	}


	private: System::Void combLocFrom_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

		if (combLocFrom->SelectedIndex > -1) {
			String^ SelectedLocFrom = "" + combLocFrom->Items[combLocFrom->SelectedIndex];
			this->combLocTo->Items->Clear();
			this->combLocTo->Text = "";
			this->FillToLocations(SelectedLocFrom);

		}
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->findTrainTimeTable();
	}


	private: System::Void combLocTo_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		this->findTrainTimeTable();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->getTickets();
	}
	private: System::Void combClassSelect_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		this->trainSelected();
		this->classTicketCountChanged();
	}
	private: System::Void txtTicketCount_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		String^ ticketCountstr = txtTicketCount->Text->Trim();
		if (ticketCountstr->Length >0) {
			this->classTicketCountChanged();
		}
	}
	private: System::Void datagvTimeTable_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		int rowIndex = e->RowIndex;
		if (rowIndex > -1) {
			this->selectedTimeTableIndex = rowIndex; 
			this->validateTimeTableSelected();
			this->trainSelected();
			this->classTicketCountChanged();
		}
	}

	int selectedTimeTableIndex = -1;
	int  strTrainTimeTableId = -1;
	String^ trainName = "";
	int TotalReceived = 0;
	int TotalSelectedClassSeat = 0;
	int ticketCount = 0;
	int seatClass = -1;

	private: System::Void FillFromLocations() {
		try {

			MySqlConnection^ con = gcnew MySqlConnection(DatabaseCon::getConString());
			con->Open();

			//------------------ start from
			MySqlCommand^ cmd = gcnew MySqlCommand("SELECT timetable.startsat FROM timetable group by timetable.startsat ORDER by  timetable.startsat  ", con);
			MySqlDataReader^ dr = cmd->ExecuteReader();
			combLocFrom->Items->Clear();
			while (dr->Read())
			{
				combLocFrom->Items->Add("" + dr->GetString(0));
			}

		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void FillToLocations(String^ FromLoc) {
		try {

			MySqlConnection^ con = gcnew MySqlConnection(DatabaseCon::getConString());
			con->Open();
			String^  sql = "SELECT timetable.destination FROM timetable group by timetable.destination ORDER by  timetable.destination  ";
			if (FromLoc->Length > 0) {
				sql = "SELECT timetable.destination FROM timetable where timetable.startsat='" + FromLoc + "' AND timetable.destination !='" + FromLoc + "'  group by timetable.destination ORDER by  timetable.destination  ";
			}
			MySqlCommand^ cmd = gcnew MySqlCommand(sql, con);
			MySqlDataReader^ dr = cmd->ExecuteReader();
			combLocTo->Items->Clear();
			while (dr->Read())
			{
				combLocTo->Items->Add("" + dr->GetString(0));
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void findTrainTimeTable() {

		try {
			bool validated = true;

			if (combLocFrom->SelectedIndex < 0 ||
				combLocTo->SelectedIndex < 0) {
				MessageBox::Show("Train Start and End are not selected.");
				validated = false;
			}

			if (validated) {

				String^ locFrom = "" + combLocFrom->Items[combLocFrom->SelectedIndex];
				String^ locTo = "" + combLocTo->Items[combLocTo->SelectedIndex];

				MySqlConnection^ con = gcnew MySqlConnection(DatabaseCon::getConString());
				con->Open();
				MySqlCommand^ cmd = gcnew MySqlCommand("select * from timetable where startsat='" + locFrom + "' and destination= '" + locTo + "'", con);
				MySqlDataReader^ dr = cmd->ExecuteReader();

				int count = 0;
				datagvTimeTable->Rows->Clear();
				while (dr->Read())
				{
					count++;
					cli::array<String^>^ row = {
						dr->GetString(0),//id
						dr->GetString(1),//trainId
						dr->GetString(2),//startsat
						dr->GetString(3),//destination
						dr->GetString(4),//starttime
						dr->GetString(5),//endtime
						dr->GetString(6),//clsprice3
						dr->GetString(7),//clsprice2
						dr->GetString(8)//clsprice1
					};
					datagvTimeTable->Rows->Add(row);
				}
				if (count == 0) {

					MessageBox::Show("No trains found.");
				}
				con->Close();
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	private: bool validateTimeTableSelected() {

		
		return this->selectedTimeTableIndex;
	}
	private: System::Void trainSelected() {
		//get train name and set  lbls

		try {
			bool validated = true;
			
			if (this->selectedTimeTableIndex < 0) {
			 validated = false;
			 MessageBox::Show("No Train Time Selected.");
			}
			if (validated) {

				String^  strTrainId = datagvTimeTable->Rows[this->selectedTimeTableIndex]->Cells[1]->Value->ToString();

				MySqlConnection^ con = gcnew MySqlConnection(DatabaseCon::getConString());
				con->Open();
				MySqlCommand^ cmd = gcnew MySqlCommand("select * from trains where id=" + strTrainId, con);
				MySqlDataReader^ dr = cmd->ExecuteReader();

				//id,trainname,class3seats,class2seats,class1seats,created
				dr->Read();
				trainName = dr->GetString(1);

				if (combClassSelect->SelectedIndex < 0) {
					combClassSelect->SelectedIndex = Utils::SEAT_CLASS_3RD;
				}

				TotalSelectedClassSeat = Int32::Parse(dr->GetString(2 + combClassSelect->SelectedIndex));



				String^ fromToStr = "";
				fromToStr += datagvTimeTable->Rows[this->selectedTimeTableIndex]->Cells[2]->Value->ToString();
				fromToStr += " TO ";
				fromToStr += datagvTimeTable->Rows[this->selectedTimeTableIndex]->Cells[3]->Value->ToString();

				this->lblSelectedTrainText->Text = fromToStr->ToUpper();

				String^ tTimeNameStr = "";
				tTimeNameStr += datagvTimeTable->Rows[this->selectedTimeTableIndex]->Cells[4]->Value->ToString();
				tTimeNameStr += " => ";
				tTimeNameStr += datagvTimeTable->Rows[this->selectedTimeTableIndex]->Cells[5]->Value->ToString();
				tTimeNameStr += " ( ";
				tTimeNameStr += trainName;
				tTimeNameStr += " )";
				this->lblTrainTimeName->Text = tTimeNameStr->ToUpper();

				con->Close();
			}
		
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}

	}

	private: System::Void classTicketCountChanged() {
		try {
			bool validated = true;

			if (this->selectedTimeTableIndex < 0) {
				validated = false;
				MessageBox::Show("No Train Time Selected.");
			}
			ticketCount=0;
			seatClass = 0;
			String^ ticketCountstr = txtTicketCount->Text->Trim();
			if (ticketCountstr->Length < 1) {
				validated = false;
				MessageBox::Show("Ticket count not valid.");
			}
				
			if (validated) {

				
				
				ticketCount = Int32::Parse(ticketCountstr);

				if (combClassSelect->SelectedIndex < 0) {
					combClassSelect->SelectedIndex = Utils::SEAT_CLASS_3RD;
				}

				seatClass = combClassSelect->SelectedIndex;
				
				strTrainTimeTableId = Int32::Parse(datagvTimeTable->Rows[this->selectedTimeTableIndex]->Cells[0]->Value->ToString());

				String^ sql = "SELECT SUM(ticket.count) as TotalReceived , 12 as Idx from ticket where ticket.traintimeid = " + strTrainTimeTableId + " AND ticket.seatClass = " + seatClass;
				MySqlConnection^ con = gcnew MySqlConnection(DatabaseCon::getConString());
				con->Open();
				MySqlCommand^ cmd = gcnew MySqlCommand(sql, con);
				MySqlDataReader^ dr = cmd->ExecuteReader();
				
				dr->Read();
				//TotalReceived
				//Console::WriteLine(!dr->IsDBNull(0));
				if (!dr->IsDBNull(0)) {
					TotalReceived = Int32::Parse(dr->GetString(0));
				}
				else {
					TotalReceived = 0;
				}

				con->Close();

				String^ avlbSeats = "Available " + (TotalSelectedClassSeat - TotalReceived) + " From " + TotalSelectedClassSeat;
				lblTicketsAvl->Text = ("Tickets : " + avlbSeats)->ToUpper();

				double ticketUnitPrice =Int32::Parse(datagvTimeTable->Rows[this->selectedTimeTableIndex]->Cells[6+ seatClass]->Value->ToString());
				String^ strTotalPayment = "TOTAL: LKR "+(ticketUnitPrice*ticketCount) + "( ";
				if (seatClass == Utils::SEAT_CLASS_3RD) {
					strTotalPayment += "3RD Class)";
				}
				else if (seatClass == Utils::SEAT_CLASS_2ND) {
					strTotalPayment += "2ND Class)";
				}
				else if (seatClass == Utils::SEAT_CLASS_1ST) {
					strTotalPayment += "1ST Class)";
				}

				lblTotalPayment->Text = strTotalPayment;
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}

	}
	private: System::Void getTickets() {
		try {
			String^ vUserName = txtName->Text->Trim();
			String^ vNIC = txtNIC->Text->Trim();


			bool  validated = true;

			if (validated && (vUserName->Length < 4 || vNIC->Length < 8)) {
				MessageBox::Show("User Name Or NIC Not Valid.");
				validated = false;
			}
			if (validated && strTrainTimeTableId < 0) {
				MessageBox::Show("train Time not selected.");
				validated = false;
			}
			if (validated && (ticketCount + TotalReceived) > TotalSelectedClassSeat) {
				MessageBox::Show("Not enough Seats.");
				validated = false;
			}

			if (validated) {

				System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure to get Tickets  ?", "Get Tickets", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

				if (System::Windows::Forms::DialogResult::Yes == result) {
					try {

						MySqlConnection^ con = gcnew MySqlConnection(DatabaseCon::getConString());
						con->Open();

						String^ createdDate = Utils::getDate();
						String^ sqlStr = "INSERT INTO ticket(name,nic,traintimeid,seatClass,count,created)";
						sqlStr += " values(";
						sqlStr += "'"+vUserName + "',";
						sqlStr += " '" + vNIC + "',";
						sqlStr += " " + strTrainTimeTableId + ",";
						sqlStr += " " + seatClass + ",";
						sqlStr += " " + ticketCount + ",";
						sqlStr += " '" + createdDate + "' )";

						MySqlCommand^ cmd = gcnew MySqlCommand(sqlStr, con);
						MySqlDataReader^ dr = cmd->ExecuteReader();

						MessageBox::Show("Tickets Got.");

						con->Close();

					}
					catch (Exception^ err) {
						MessageBox::Show(err->Message);
					}
				}
			}

		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

	}
private: System::Void datagvTimeTable_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
};
}
