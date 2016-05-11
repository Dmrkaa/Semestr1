#pragma once

#include <string>
#include <string.h> 
#include <windows.h> 
#include <wininet.h> 
#include <shlobj.h> 
#include <AtlBase.h> 
#include <AtlConv.h> 
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <stdlib.h >
#include <cstring>

namespace Проект1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  Next;

	private: System::Windows::Forms::PictureBox^  Wallpaper1;

	private: System::Windows::Forms::Button^  button3;
	protected:

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Next = (gcnew System::Windows::Forms::Button());
			this->Wallpaper1 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Wallpaper1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(85, 274);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(365, 45);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Next
			// 
			this->Next->Location = System::Drawing::Point(456, 41);
			this->Next->Name = L"Next";
			this->Next->Size = System::Drawing::Size(75, 278);
			this->Next->TabIndex = 1;
			this->Next->Text = L"Следующая";
			this->Next->UseVisualStyleBackColor = true;
			this->Next->Click += gcnew System::EventHandler(this, &MyForm::Next_Click);
			// 
			// Wallpaper1
			// 
			this->Wallpaper1->Location = System::Drawing::Point(94, 41);
			this->Wallpaper1->Name = L"Wallpaper1";
			this->Wallpaper1->Size = System::Drawing::Size(356, 227);
			this->Wallpaper1->TabIndex = 2;
			this->Wallpaper1->TabStop = false;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(4, 41);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 278);
			this->button3->TabIndex = 3;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(529, 331);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->Wallpaper1);
			this->Controls->Add(this->Next);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Wallpaper1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

				 extern int i;
				 extern char Store[10][50];
				 HKEY hKey;
				 DWORD dwDisposition;
				 LPTSTR lpSubKey = L"Control Panel\\Desktop";
				 DWORD	 TT = strlen(Store[i]);
				 LPTSTR	Path1 = L"C:\\Users\\Qwert\\Desktop\\Wallp1\\zzz.jpg";

				 

				 unsigned char szStr[2];
				 szStr[0] = '1'; szStr[1] = '\0';

				 RegOpenKeyEx(HKEY_CURRENT_USER, TEXT("Control Panel\\Desktop\\"), 0, KEY_ALL_ACCESS, &hKey);
				 if (RegOpenKeyEx(HKEY_CURRENT_USER, TEXT("Control Panel\\Desktop\\"), 0, KEY_SET_VALUE, &hKey) != ERROR_SUCCESS)
				 {
					 printf("Key not found.\n");

				 }

				 RegSetValueEx(hKey, TEXT("Wallaper"), NULL, REG_SZ, szStr, sizeof(szStr));
				 RegDeleteValue(hKey, TEXT("Wallpaper"));
				 RegCloseKey(hKey);
					 if (RegSetValueEx(hKey, TEXT("Wallaper"), NULL, REG_SZ, (LPBYTE)(Path1), (DWORD)(lstrlen(Path1))*sizeof(TCHAR)) != ERROR_SUCCESS)
					 {
						 printf("Function fails.\n");

					 }
	}
	private: System::Void Next_Click(System::Object^  sender, System::EventArgs^  e) {

				 int  j, k;
				 extern int i;
				 extern char Store[10][50];
				 String ^Path1;
				 Path1 = "C:\\Users\\Qwert\\Desktop\\Wallp1\\";
				 k = strlen(Store[i]);
				 do
				 {
					 Path1 = Path1 + Convert::ToChar(Store[i][j]);
					 j++;
					 k--;
				 } while (k != 0);
				 

				 this->Wallpaper1->Load(Path1);
				 i++;
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

			
				 int  j, k;
				 extern int i;
				 extern char Store[10][50];
				 String ^Path1;
				 Path1 = "C:\\Users\\Qwert\\Desktop\\Wallp1\\";
				 k = strlen(Store[i]);
				 do
				 {
					 Path1 = Path1 + Convert::ToChar(Store[i][j]);
					 j++;
					 k--;
				 } while (k != 0);

				 this->Wallpaper1->Load(Path1);
				 i--;
	}
};
}
