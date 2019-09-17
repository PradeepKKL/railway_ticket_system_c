#pragma once
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace MySql::Data::MySqlClient;
public class Utils
{
public:
	Utils();
	static String^ getDate();
	static int SEAT_CLASS_3RD;
	static int SEAT_CLASS_2ND;
	static int SEAT_CLASS_1ST;
};

