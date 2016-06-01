#include "MyForm.h"
#include "windows.h"
#include <string.h>  
#include <wininet.h> 
#include <shlobj.h> 
#include <AtlBase.h> 
#include <AtlConv.h> 
#include <string>

using namespace System;
using namespace System::Windows::Forms;

void Name();
char Store[10][50];
//int i, NumberOfFile;
[STAThreadAttribute]
 void Main(array<String^>^ arg) {

	/*WIN32_FIND_DATA File;
	HANDLE F;
	char KK[50];
	int k;


	/*F = FindFirstFile(L"C:\\Users\\Qwert\\Desktop\\Wallp1\\*.jpg", &File);
	if (F != INVALID_HANDLE_VALUE)
	{
		do {


			wcstombs(KK, File.cFileName, 20);
			strcpy(Store[NumberOfFile], KK);
			NumberOfFile++;

		} while (FindNextFile(F, &File) != 0);
		FindClose(F);
	}*/




	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);


	Проект1::MyForm form;
	Application::Run(%form);
}

