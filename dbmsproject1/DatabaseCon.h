#pragma once
using namespace System;
using namespace System::Windows::Forms;
using namespace MySql::Data::MySqlClient;


public  class DatabaseCon
{
	
public:
	DatabaseCon();
	static String^ getConString();

};

