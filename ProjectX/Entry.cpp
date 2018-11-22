#include "Entry.h"
#include "preview.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main(array<String^>^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ProjectX::preview form1;
	Application::Run(%form1);
	ProjectX::Entry form;
	Application::Run(%form);
}
