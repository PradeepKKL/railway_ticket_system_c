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
	/// Summary for viewTickets
	/// </summary>
	public ref class viewTickets : public System::Windows::Forms::Form
	{
	public:
		viewTickets(void)
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
		~viewTickets()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;





	private: System::Windows::Forms::DataGridView^  datagvTickets;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ticketId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  TrainTimeTableId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  NIC;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Class;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  TicketCount;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Date;
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
			this->datagvTickets = (gcnew System::Windows::Forms::DataGridView());
			this->ticketId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TrainTimeTableId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NIC = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Class = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TicketCount = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Date = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->datagvTickets))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->panel1->Controls->Add(this->datagvTickets);
			this->panel1->Location = System::Drawing::Point(-3, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(779, 396);
			this->panel1->TabIndex = 0;
			// 
			// datagvTickets
			// 
			this->datagvTickets->AllowUserToAddRows = false;
			this->datagvTickets->AllowUserToDeleteRows = false;
			this->datagvTickets->AllowUserToOrderColumns = true;
			this->datagvTickets->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->datagvTickets->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->ticketId,
					this->TrainTimeTableId, this->Name, this->NIC, this->Class, this->TicketCount, this->Date
			});
			this->datagvTickets->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->datagvTickets->Location = System::Drawing::Point(17, 28);
			this->datagvTickets->Margin = System::Windows::Forms::Padding(0);
			this->datagvTickets->Name = L"datagvTickets";
			this->datagvTickets->ReadOnly = true;
			this->datagvTickets->Size = System::Drawing::Size(745, 353);
			this->datagvTickets->TabIndex = 7;
			// 
			// ticketId
			// 
			this->ticketId->HeaderText = L"Ticket Id";
			this->ticketId->Name = L"ticketId";
			this->ticketId->ReadOnly = true;
			// 
			// TrainTimeTableId
			// 
			this->TrainTimeTableId->HeaderText = L"Train TimeTable Id";
			this->TrainTimeTableId->Name = L"TrainTimeTableId";
			this->TrainTimeTableId->ReadOnly = true;
			// 
			// Name
			// 
			this->Name->HeaderText = L"Name";
			this->Name->Name = L"Name";
			this->Name->ReadOnly = true;
			// 
			// NIC
			// 
			this->NIC->HeaderText = L"NIC";
			this->NIC->Name = L"NIC";
			this->NIC->ReadOnly = true;
			// 
			// Class
			// 
			this->Class->HeaderText = L"Class";
			this->Class->Name = L"Class";
			this->Class->ReadOnly = true;
			// 
			// TicketCount
			// 
			this->TicketCount->HeaderText = L"Ticket Count";
			this->TicketCount->Name = L"TicketCount";
			this->TicketCount->ReadOnly = true;
			// 
			// Date
			// 
			this->Date->HeaderText = L"Date";
			this->Date->Name = L"Date";
			this->Date->ReadOnly = true;
			// 
			// viewTickets
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(768, 390);
			this->Controls->Add(this->panel1);
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"viewTickets";
			this->Load += gcnew System::EventHandler(this, &viewTickets::viewTickets_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->datagvTickets))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	public: static int trainTimeId = 2;
	
	private: System::Void viewTicketsList() {
		try {
			bool validated = true;

				MySqlConnection^ con = gcnew MySqlConnection(DatabaseCon::getConString());
				con->Open();
				MySqlCommand^ cmd = gcnew MySqlCommand("select * from ticket where traintimeid=" + trainTimeId , con);
				MySqlDataReader^ dr = cmd->ExecuteReader();

				int count = 0;
				datagvTickets->Rows->Clear();
				while (dr->Read())
				{
					count++;
					String^ className = "";
					int seatClass = Int32::Parse(dr->GetString(4));
					if (seatClass == Utils::SEAT_CLASS_3RD) {
						className += "3RD Class";
					}
					else if (seatClass == Utils::SEAT_CLASS_2ND) {
						className += "2ND Class";
					}
					else if (seatClass == Utils::SEAT_CLASS_1ST) {
						className += "1ST Class";
					}

					cli::array<String^>^ row = {
						dr->GetString(0),//id
						dr->GetString(1),//trainId
						dr->GetString(2),
						dr->GetString(3),
						className,
						dr->GetString(5),
						dr->GetString(6)
					};
					datagvTickets->Rows->Add(row);
				}
				if (count == 0) {

					MessageBox::Show("No Tickets found.");
				}
				con->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void viewTickets_Load(System::Object^  sender, System::EventArgs^  e) {
		this->viewTicketsList();

	}
};
}
