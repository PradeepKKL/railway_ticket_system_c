#include "DatabaseCon.h"



DatabaseCon::DatabaseCon()
{

}

String ^ DatabaseCon::getConString()
{
	return  "Server=127.0.0.1;Uid=root;Pwd=;Database=railwayticketbokapp1";
}
/*
MySqlConnection ^ DatabaseCon::getConn()
{
	try {
		MySqlConnection^ con = gcnew MySqlConnection(DatabaseCon::getConString());
		return con;
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
		return nullptr;
	}

}

MySqlDataReader ^ DatabaseCon::SelectQuery(System::String ^ sqlq)
{
	try {
		MySqlConnection^ con = gcnew MySqlConnection(DatabaseCon::getConString());
		con->Open();
		MySqlCommand^ cmd = gcnew MySqlCommand(sqlq, con);
		MySqlDataReader^ dr = cmd->ExecuteReader();
		con->Close();
		return dr;
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
		return nullptr;
	}
	// TODO: insert return statement here
}
*/