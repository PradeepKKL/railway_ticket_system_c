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
	/// Summary for addTimeTable
	/// </summary>
	public ref class addTimeTable : public System::Windows::Forms::Form
	{
	public:
		addTimeTable(void)
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
		~addTimeTable()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txtStartat;
	private: System::Windows::Forms::TextBox^  txtDestination;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::ComboBox^  comboxEtimemm;

	private: System::Windows::Forms::ComboBox^  comboxEtimehh;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ComboBox^  comboxStimemm;

	private: System::Windows::Forms::ComboBox^  comboxStimehh;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  txt1price;

	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  txt2price;

	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  txt3price;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::TextBox^  txtTrainName;
	private: System::Windows::Forms::TextBox^  txtTrainId;



	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;

	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::DataGridView^  trainFindView;






	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  lblSelectedTrainId;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  trainId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  tainName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  cls3seats;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  cl2seats;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  cl1seats;







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
			this->txtStartat = (gcnew System::Windows::Forms::TextBox());
			this->txtDestination = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lblSelectedTrainId = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txt1price = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txt2price = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txt3price = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboxEtimemm = (gcnew System::Windows::Forms::ComboBox());
			this->comboxEtimehh = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboxStimemm = (gcnew System::Windows::Forms::ComboBox());
			this->comboxStimehh = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->trainFindView = (gcnew System::Windows::Forms::DataGridView());
			this->trainId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tainName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cls3seats = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cl2seats = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cl1seats = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txtTrainName = (gcnew System::Windows::Forms::TextBox());
			this->txtTrainId = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trainFindView))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Starts at :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(20, 87);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Destination :";
			// 
			// txtStartat
			// 
			this->txtStartat->Location = System::Drawing::Point(94, 57);
			this->txtStartat->Name = L"txtStartat";
			this->txtStartat->Size = System::Drawing::Size(166, 20);
			this->txtStartat->TabIndex = 2;
			// 
			// txtDestination
			// 
			this->txtDestination->Location = System::Drawing::Point(94, 83);
			this->txtDestination->Name = L"txtDestination";
			this->txtDestination->Size = System::Drawing::Size(166, 20);
			this->txtDestination->TabIndex = 3;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->panel1->Controls->Add(this->lblSelectedTrainId);
			this->panel1->Controls->Add(this->label18);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->txt1price);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->txt2price);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->txt3price);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->comboxEtimemm);
			this->panel1->Controls->Add(this->comboxEtimehh);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->comboxStimemm);
			this->panel1->Controls->Add(this->comboxStimehh);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->txtStartat);
			this->panel1->Controls->Add(this->txtDestination);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(300, 343);
			this->panel1->TabIndex = 4;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &addTimeTable::panel1_Paint);
			// 
			// lblSelectedTrainId
			// 
			this->lblSelectedTrainId->AutoSize = true;
			this->lblSelectedTrainId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSelectedTrainId->Location = System::Drawing::Point(125, 27);
			this->lblSelectedTrainId->Name = L"lblSelectedTrainId";
			this->lblSelectedTrainId->Size = System::Drawing::Size(85, 15);
			this->lblSelectedTrainId->TabIndex = 23;
			this->lblSelectedTrainId->Text = L"No Selected";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(20, 27);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(94, 13);
			this->label18->TabIndex = 22;
			this->label18->Text = L"Selected Train Id :";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(103, 283);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(20, 13);
			this->label12->TabIndex = 21;
			this->label12->Text = L"Rs";
			// 
			// txt1price
			// 
			this->txt1price->Location = System::Drawing::Point(128, 279);
			this->txt1price->Name = L"txt1price";
			this->txt1price->Size = System::Drawing::Size(79, 20);
			this->txt1price->TabIndex = 20;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(20, 283);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(83, 13);
			this->label13->TabIndex = 19;
			this->label13->Text = L"1rd Class Price :";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(103, 257);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(20, 13);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Rs";
			// 
			// txt2price
			// 
			this->txt2price->Location = System::Drawing::Point(128, 253);
			this->txt2price->Name = L"txt2price";
			this->txt2price->Size = System::Drawing::Size(79, 20);
			this->txt2price->TabIndex = 17;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(20, 257);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(83, 13);
			this->label11->TabIndex = 16;
			this->label11->Text = L"2rd Class Price :";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(103, 231);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(20, 13);
			this->label9->TabIndex = 15;
			this->label9->Text = L"Rs";
			// 
			// txt3price
			// 
			this->txt3price->Location = System::Drawing::Point(128, 227);
			this->txt3price->Name = L"txt3price";
			this->txt3price->Size = System::Drawing::Size(79, 20);
			this->txt3price->TabIndex = 14;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(20, 231);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(83, 13);
			this->label8->TabIndex = 13;
			this->label8->Text = L"3rd Class Price :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(20, 205);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(60, 16);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Prices :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(146, 170);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(10, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L":";
			// 
			// comboxEtimemm
			// 
			this->comboxEtimemm->FormattingEnabled = true;
			this->comboxEtimemm->Items->AddRange(gcnew cli::array< System::Object^  >(60) {
				L"00", L"01", L"02", L"03", L"04", L"05", L"06",
					L"07", L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24",
					L"25", L"26", L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42",
					L"43", L"44", L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59"
			});
			this->comboxEtimemm->Location = System::Drawing::Point(162, 166);
			this->comboxEtimemm->Name = L"comboxEtimemm";
			this->comboxEtimemm->Size = System::Drawing::Size(45, 21);
			this->comboxEtimemm->TabIndex = 10;
			// 
			// comboxEtimehh
			// 
			this->comboxEtimehh->FormattingEnabled = true;
			this->comboxEtimehh->Items->AddRange(gcnew cli::array< System::Object^  >(24) {
				L"00", L"01", L"02", L"03", L"04", L"05", L"06",
					L"07", L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23"
			});
			this->comboxEtimehh->Location = System::Drawing::Point(94, 166);
			this->comboxEtimehh->Name = L"comboxEtimehh";
			this->comboxEtimehh->Size = System::Drawing::Size(45, 21);
			this->comboxEtimehh->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(146, 136);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(10, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L":";
			// 
			// comboxStimemm
			// 
			this->comboxStimemm->FormattingEnabled = true;
			this->comboxStimemm->Items->AddRange(gcnew cli::array< System::Object^  >(60) {
				L"00", L"01", L"02", L"03", L"04", L"05", L"06",
					L"07", L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24",
					L"25", L"26", L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42",
					L"43", L"44", L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59"
			});
			this->comboxStimemm->Location = System::Drawing::Point(162, 132);
			this->comboxStimemm->Name = L"comboxStimemm";
			this->comboxStimemm->Size = System::Drawing::Size(45, 21);
			this->comboxStimemm->TabIndex = 7;
			// 
			// comboxStimehh
			// 
			this->comboxStimehh->FormattingEnabled = true;
			this->comboxStimehh->Items->AddRange(gcnew cli::array< System::Object^  >(24) {
				L"00", L"01", L"02", L"03", L"04", L"05", L"06",
					L"07", L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23"
			});
			this->comboxStimehh->Location = System::Drawing::Point(94, 132);
			this->comboxStimehh->Name = L"comboxStimehh";
			this->comboxStimehh->Size = System::Drawing::Size(45, 21);
			this->comboxStimehh->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(20, 170);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"End Time :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(20, 136);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Start Time :";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Location = System::Drawing::Point(12, 361);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(883, 77);
			this->panel2->TabIndex = 5;
			// 
			// button4
			// 
			this->button4->ForeColor = System::Drawing::Color::Red;
			this->button4->Location = System::Drawing::Point(751, 25);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(116, 36);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Close";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->ForeColor = System::Drawing::Color::Red;
			this->button3->Location = System::Drawing::Point(629, 25);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(116, 36);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Clear All";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(23, 25);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(116, 36);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Insert";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &addTimeTable::button2_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->panel3->Controls->Add(this->label17);
			this->panel3->Controls->Add(this->button6);
			this->panel3->Controls->Add(this->trainFindView);
			this->panel3->Controls->Add(this->txtTrainName);
			this->panel3->Controls->Add(this->txtTrainId);
			this->panel3->Controls->Add(this->label16);
			this->panel3->Controls->Add(this->label15);
			this->panel3->Controls->Add(this->label14);
			this->panel3->Location = System::Drawing::Point(318, 12);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(577, 343);
			this->panel3->TabIndex = 6;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(185, 82);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(25, 13);
			this->label17->TabIndex = 29;
			this->label17->Text = L"OR";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(25, 132);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(254, 27);
			this->button6->TabIndex = 28;
			this->button6->Text = L"Find";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &addTimeTable::button6_Click);
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
			this->trainFindView->Location = System::Drawing::Point(25, 165);
			this->trainFindView->Name = L"trainFindView";
			this->trainFindView->ReadOnly = true;
			this->trainFindView->Size = System::Drawing::Size(549, 165);
			this->trainFindView->TabIndex = 27;
			this->trainFindView->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &addTimeTable::trainFindView_CellClick_1);
			this->trainFindView->SelectionChanged += gcnew System::EventHandler(this, &addTimeTable::trainFindView_SelectionChanged);
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
			// txtTrainName
			// 
			this->txtTrainName->Location = System::Drawing::Point(113, 98);
			this->txtTrainName->Name = L"txtTrainName";
			this->txtTrainName->Size = System::Drawing::Size(166, 20);
			this->txtTrainName->TabIndex = 26;
			this->txtTrainName->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &addTimeTable::txtTrainName_KeyDown);
			// 
			// txtTrainId
			// 
			this->txtTrainId->Location = System::Drawing::Point(113, 60);
			this->txtTrainId->Name = L"txtTrainId";
			this->txtTrainId->Size = System::Drawing::Size(166, 20);
			this->txtTrainId->TabIndex = 22;
			this->txtTrainId->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &addTimeTable::txttrainId_KeyDown);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(22, 102);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(78, 13);
			this->label16->TabIndex = 25;
			this->label16->Text = L"Find by Name :";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(22, 64);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(59, 13);
			this->label15->TabIndex = 24;
			this->label15->Text = L"Find by Id :";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(22, 27);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(100, 16);
			this->label14->TabIndex = 22;
			this->label14->Text = L"Select Train :";
			// 
			// addTimeTable
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(909, 450);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"addTimeTable";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"add Train Route";
			this->Load += gcnew System::EventHandler(this, &addTimeTable::addTimeTable_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trainFindView))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: int selectedTrainId = -1;
	private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {

	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {

		try {
			String^ searchName = txtTrainName->Text;
			searchName = searchName->Trim();

			String^ strsearchId = txtTrainId->Text;
			strsearchId = strsearchId->Trim();

			Boolean Qfound = false;
			if (strsearchId->Length > 0) {
				int searchId = Int32::Parse(strsearchId);
				if (searchId > -1) {
					Qfound = true;
					MySqlConnection^ con = gcnew MySqlConnection(DatabaseCon::getConString());
					con->Open();
					MySqlCommand^ cmd = gcnew MySqlCommand("select * from trains where id=" + searchId + " ", con);
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
					con->Close();
				}
			}


			if (Qfound != true) {

				MySqlConnection^ con = gcnew MySqlConnection(DatabaseCon::getConString());
				con->Open();
				MySqlCommand^ cmd = gcnew MySqlCommand("select * from trains where trainname like '%" + searchName + "%' limit 10", con);
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
				con->Close();

			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}

	private: System::Void txttrainId_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		txtTrainName->Text = "";
	}
	private: System::Void txtTrainName_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		txtTrainId->Text = "";
	}
	private: System::Void trainFindView_SelectionChanged(System::Object^  sender, System::EventArgs^  e) {

	}

	private: System::Void trainFindView_CellMouseClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^  e) {

	}
	private: System::Void trainFindView_CellClick_1(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		int rowIndex = e->RowIndex;
		if (rowIndex > -1) {
			System::Console::WriteLine("train Id:" + trainFindView->Rows[rowIndex]->Cells[0]->Value);
			this->selectedTrainId = Int32::Parse(trainFindView->Rows[rowIndex]->Cells[0]->Value->ToString());
			lblSelectedTrainId->Text = "" + this->selectedTrainId + " (" + trainFindView->Rows[rowIndex]->Cells[1]->Value->ToString() + ")";
		}
	}
	private: System::Void addTimeTable_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			String^ vStartat = txtStartat->Text->Trim();
			String^ vDestination = txtDestination->Text->Trim();


			String^ vStartTime = "";
			String^ vEndTime = "";

			double^ vPrice3 = 0.0;
			double^ vPrice2 = 0.0;
			double^ vPrice1 = 0.0;

			bool  validated = true;
			if (validated && (vStartat->Length < 1 || vDestination->Length < 1)) {
				MessageBox::Show("Start At or Destination Not Valid.");
				validated = false;
			}
			if (validated && (selectedTrainId < 0)) {
				MessageBox::Show("Train not Selected.");
				validated = false;
			}
			if (validated && (comboxStimehh->SelectedIndex < 0 ||
				comboxStimemm->SelectedIndex < 0 ||
				comboxEtimehh->SelectedIndex < 0 ||
				comboxEtimemm->SelectedIndex < 0)) {
				MessageBox::Show("Start Time or End Time Not Valid.");
				validated = false;
			}
			bool validator2 = false;
			if (validated) {

				vPrice3 = Convert::ToDouble(txt3price->Text->Trim());
				vPrice2 = Convert::ToDouble(txt2price->Text->Trim());
				vPrice1 = Convert::ToDouble(txt1price->Text->Trim());


				String^ vstHH = "" + comboxStimehh->Items[comboxStimehh->SelectedIndex];
				String^ vstMM = "" + comboxStimemm->Items[comboxStimemm->SelectedIndex];
				vStartTime = vstHH + ":" + vstMM;


				String^ vetHH = "" + comboxEtimehh->Items[comboxEtimehh->SelectedIndex];
				String^ vetMM = "" + comboxEtimemm->Items[comboxEtimemm->SelectedIndex];
				vEndTime = vetHH + ":" + vetMM;

				Console::WriteLine("vStartTime:" + vStartTime);
				Console::WriteLine("vEndTime:" + vEndTime);
				validator2 = true;
			}
			if (validator2) {
				System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure to Insert  ?", "Insert TimeTable Item", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

				if (System::Windows::Forms::DialogResult::Yes == result) {
					try {

						MySqlConnection^ con = gcnew MySqlConnection(DatabaseCon::getConString());
						con->Open();

						String^ createdDate = Utils::getDate();
						String^ sqlStr = "INSERT INTO timetable(trainid,startsat,destination,starttime,endtime,clsprice3,clsprice2,clsprice1,created)";
						sqlStr += " values(";
						sqlStr += selectedTrainId+",";
						sqlStr += " '" + vStartat + "',";
						sqlStr += " '" + vDestination + "',";
						sqlStr += " '" + vStartTime + "',";
						sqlStr += " '" + vEndTime + "',";
						sqlStr += " " + vPrice3 + ",";
						sqlStr += " " + vPrice2 + ",";
						sqlStr += " " + vPrice1 + ",";
						sqlStr += " '" + createdDate + "' )";

						MySqlCommand^ cmd = gcnew MySqlCommand(sqlStr, con);
						MySqlDataReader^ dr = cmd->ExecuteReader();

						MessageBox::Show("TimeTable Item Inserted.");

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
};
}
