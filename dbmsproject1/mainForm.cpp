#include "mainForm.h"



using namespace System;
using namespace System::Windows::Forms;



[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	dbmsproject1::mainForm form;
	Application::Run(%form);
}
