#pragma once
#include "DatabaseCon.h"
#include "Utils.h"
#include <iostream>


#include "viewTickets.h"
namespace dbmsproject1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Summary for viewTimeTable
	/// </summary>
	public ref class viewTimeTable : public System::Windows::Forms::Form
	{
	public:
		viewTimeTable(void)
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
		~viewTimeTable()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ComboBox^  combLocTo;
	private: System::Windows::Forms::ComboBox^  combLocFrom;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataGridView^  datagvTimeTable;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  TimeTableId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  trainId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  From;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  To;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  StartTime;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  EndTime;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Class3Price;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Class2Price;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Class1Price;

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
			this->combLocTo = (gcnew System::Windows::Forms::ComboBox());
			this->combLocFrom = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
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
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->datagvTimeTable))->BeginInit();
			this->SuspendLayout();
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
			this->panel1->Location = System::Drawing::Point(-4, -4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(885, 426);
			this->panel1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(601, 38);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(88, 33);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Find";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &viewTimeTable::button1_Click);
			// 
			// combLocTo
			// 
			this->combLocTo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->combLocTo->FormattingEnabled = true;
			this->combLocTo->Location = System::Drawing::Point(369, 40);
			this->combLocTo->Name = L"combLocTo";
			this->combLocTo->Size = System::Drawing::Size(225, 28);
			this->combLocTo->TabIndex = 12;
			this->combLocTo->SelectedIndexChanged += gcnew System::EventHandler(this, &viewTimeTable::combLocTo_SelectedIndexChanged);
			// 
			// combLocFrom
			// 
			this->combLocFrom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->combLocFrom->FormattingEnabled = true;
			this->combLocFrom->Location = System::Drawing::Point(63, 40);
			this->combLocFrom->Name = L"combLocFrom";
			this->combLocFrom->Size = System::Drawing::Size(225, 28);
			this->combLocFrom->TabIndex = 11;
			this->combLocFrom->SelectedIndexChanged += gcnew System::EventHandler(this, &viewTimeTable::combLocFrom_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(332, 47);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 15);
			this->label3->TabIndex = 10;
			this->label3->Text = L"To :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 47);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 15);
			this->label2->TabIndex = 9;
			this->label2->Text = L"From :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 16);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Find Train Time :";
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
			this->datagvTimeTable->Location = System::Drawing::Point(13, 92);
			this->datagvTimeTable->Margin = System::Windows::Forms::Padding(0);
			this->datagvTimeTable->Name = L"datagvTimeTable";
			this->datagvTimeTable->ReadOnly = true;
			this->datagvTimeTable->Size = System::Drawing::Size(847, 318);
			this->datagvTimeTable->TabIndex = 7;
			this->datagvTimeTable->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &viewTimeTable::datagvTimeTable_CellClick);
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
			// viewTimeTable
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(878, 415);
			this->Controls->Add(this->panel1);
			this->Name = L"viewTimeTable";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"viewTimeTable";
			this->Load += gcnew System::EventHandler(this, &viewTimeTable::viewTimeTable_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->datagvTimeTable))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void viewTimeTable_Load(System::Object^  sender, System::EventArgs^  e) {
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
private: System::Void combLocTo_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	this->findTrainTimeTable();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	this->findTrainTimeTable();
}
private: System::Void datagvTimeTable_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	int rowIndex = e->RowIndex;
	if (rowIndex > -1) {
		this->selectedTimeTableIndex = rowIndex;
		int trainTimeId = Int32::Parse(datagvTimeTable->Rows[this->selectedTimeTableIndex]->Cells[0]->Value->ToString());
		viewTickets::trainTimeId = trainTimeId;
		viewTickets^ viewTicketsIdalog = gcnew viewTickets();
		viewTicketsIdalog->Show();
	}

}
	int selectedTimeTableIndex = -1;

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
};
}
