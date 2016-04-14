#include "MyForm.h"
#include "windows.h"
#include <string.h>  
#include <wininet.h> 
#include <shlobj.h> 
#include <AtlBase.h> 
#include <AtlConv.h> 

using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
void main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	
	semestr1::MyForm form;
	Application::Run(%form);
}