#pragma once

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

using namespace std;

namespace semestr1 {

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
	public: System::Windows::Forms::PictureBox^  Wallpaper1;
	private:




	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button2;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Wallpaper1 = (gcnew System::Windows::Forms::PictureBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Wallpaper1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Highlight;
			this->button1->Location = System::Drawing::Point(116, 389);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(823, 53);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Сделать обоями";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Wallpaper1
			// 
			this->Wallpaper1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Wallpaper1.Image")));
			this->Wallpaper1->Location = System::Drawing::Point(222, 46);
			this->Wallpaper1->Name = L"Wallpaper1";
			this->Wallpaper1->Size = System::Drawing::Size(604, 329);
			this->Wallpaper1->TabIndex = 1;
			this->Wallpaper1->TabStop = false;
			this->Wallpaper1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(116, 46);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(105, 337);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Предыдущая";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::Prev_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(882, 130);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(91, 153);
			this->button2->TabIndex = 6;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(996, 462);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->Wallpaper1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Wallpaper1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		}

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

				 RegOpenKeyEx(HKEY_CURRENT_USER, lpSubKey, 0, KEY_SET_VALUE, &hKey);
				 if (RegOpenKeyEx(HKEY_CURRENT_USER, lpSubKey, 0, KEY_SET_VALUE, &hKey) != ERROR_SUCCESS)
				 {
					 printf("Key not found.\n");

				 }

				 RegSetValueEx(hKey, L"Wallaper", NULL, REG_SZ, (LPBYTE)(Path1), (DWORD)(lstrlen(Path1))*sizeof(TCHAR));
				 {
					 if (RegSetValueEx(hKey, L"Wallaper", NULL, REG_SZ, (LPBYTE)(Path1), (DWORD)(lstrlen(Path1))*sizeof(TCHAR)) != ERROR_SUCCESS)
					 {
						 printf("Function fails.\n");

					 }



					 ofstream bat("wall.bat", ios_base::out);


					 bat << "REG ADD \"HKCU\\Control Panel\\Desktop\" /v Wallpaper /d \"C:\\Users\\Qwert\\Desktop\\Wallp1\\" << Store[i] << "\" /f" << endl;

					 bat.close();
					 system("wall.bat");
					 Sleep(400);
					 system("update.bat");



				 }
	}
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {



	}

	








private: System::Void Prev_Click(System::Object^  sender, System::EventArgs^  e) {
			 string RR;
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

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

			 string RR;
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

 