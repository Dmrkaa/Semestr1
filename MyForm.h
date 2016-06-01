#pragma once
#include < vcclr.h >
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
using namespace std;
namespace Проект1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	int i, NumberOfFile;
	
	
	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		
	public:
		MyForm(void)
		{
			InitializeComponent();
			button3->Enabled = false;
			Next->Enabled = false;

	/*		F = FindFirstFile(L"C:\\Users\\Qwert\\Desktop\\Wallp1\\*.jpg", &File);
			if (F != INVALID_HANDLE_VALUE)
			{
				do {


					wcstombs(KK, File.cFileName, 20);
					strcpy(Store[NumberOfFile], KK);
					NumberOfFile++;

				} while (FindNextFile(F, &File) != 0);
				FindClose(F);
			}*/
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
	private: System::Windows::Forms::PictureBox^  WallpNext;
	private: System::Windows::Forms::PictureBox^  WallpPrev;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;


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
			this->Next = (gcnew System::Windows::Forms::Button());
			this->Wallpaper1 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->WallpNext = (gcnew System::Windows::Forms::PictureBox());
			this->WallpPrev = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Wallpaper1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->WallpNext))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->WallpPrev))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(404, 390);
			this->button1->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(140, 78);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Next
			// 
			this->Next->BackColor = System::Drawing::Color::White;
			this->Next->FlatAppearance->BorderSize = 0;
			this->Next->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Next->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Next.Image")));
			this->Next->Location = System::Drawing::Point(856, 232);
			this->Next->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->Next->Name = L"Next";
			this->Next->Size = System::Drawing::Size(64, 63);
			this->Next->TabIndex = 1;
			this->Next->UseVisualStyleBackColor = false;
			this->Next->Click += gcnew System::EventHandler(this, &MyForm::Next_Click);
			// 
			// Wallpaper1
			// 
			this->Wallpaper1->Location = System::Drawing::Point(324, 176);
			this->Wallpaper1->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->Wallpaper1->Name = L"Wallpaper1";
			this->Wallpaper1->Size = System::Drawing::Size(294, 173);
			this->Wallpaper1->TabIndex = 2;
			this->Wallpaper1->TabStop = false;
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(12, 232);
			this->button3->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(64, 65);
			this->button3->TabIndex = 3;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// WallpNext
			// 
			this->WallpNext->Location = System::Drawing::Point(670, 215);
			this->WallpNext->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->WallpNext->Name = L"WallpNext";
			this->WallpNext->Size = System::Drawing::Size(164, 98);
			this->WallpNext->TabIndex = 4;
			this->WallpNext->TabStop = false;
			// 
			// WallpPrev
			// 
			this->WallpPrev->Location = System::Drawing::Point(104, 215);
			this->WallpPrev->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->WallpPrev->Name = L"WallpPrev";
			this->WallpPrev->Size = System::Drawing::Size(164, 98);
			this->WallpPrev->TabIndex = 5;
			this->WallpPrev->TabStop = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(856, 13);
			this->button2->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(64, 63);
			this->button2->TabIndex = 6;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(780, 463);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(76, 19);
			this->button4->TabIndex = 7;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(948, 533);
			this->ControlBox = false;
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->WallpPrev);
			this->Controls->Add(this->WallpNext);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->Wallpaper1);
			this->Controls->Add(this->Next);
			this->Controls->Add(this->button1);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->MaximumSize = System::Drawing::Size(948, 533);
			this->MinimumSize = System::Drawing::Size(948, 533);
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->Text = L"1";
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Wallpaper1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->WallpNext))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->WallpPrev))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		Point *mouseOffset;
		bool isMouseDown = false;
		String ^Path1;
		String ^PathNext, ^PathPrev;
		String^ roots;
		


	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			/*	 extern*/ int i;
				 extern char Store[10][50];
				// HKEY hKey;
				 DWORD dwDisposition;
				// LPTSTR lpSubKey = L"Control Panel\\Desktop";
				// DWORD	 TT = strlen(Store[i]);
				 LPWSTR Path3;


				 pin_ptr<const wchar_t> wch = PtrToStringChars(Path1);

				 size_t convertedChars = 0;
				 size_t  sizeInBytes = ((Path1->Length + 1) * 2);
				 errno_t err = 0;
				 char    *ch = (char *)malloc(sizeInBytes);

				 err = wcstombs_s(&convertedChars,
					 ch, sizeInBytes,
					 wch, sizeInBytes);
				 if (err != 0)
					 printf_s("wcstombs_s  failed!\n");

				 printf_s("%s\n", ch);

				 DWORD res_len = MultiByteToWideChar(1251, 0, ch, -1, NULL, 0);
				 Path3 = (LPWSTR)GlobalAlloc(GPTR, (res_len + 1) * sizeof(WCHAR));
				 MultiByteToWideChar(1251, 0, ch, -1, Path3, res_len);

				 if (SystemParametersInfo(SPI_SETDESKWALLPAPER, 0,
					 Path3, SPIF_UPDATEINIFILE | SPIF_SENDCHANGE) == TRUE)
				 {
					 cout << "Ok change" << endl;
				 }




	}
	private: System::Void Next_Click(System::Object^  sender, System::EventArgs^  e) {

				 int  j = 0, k = 0, next, prev;
			/*	 extern*/ //int i, NumberOfFile;
				 extern char Store[10][50];
			//	 String ^PathNext, ^PathPrev;// , ^Root;
				 j = 0;
				 k = 0;
				 Path1 = folderBrowserDialog1->SelectedPath;
				 Path1 = Path1 + "/";
				 PathNext = Path1 + "/";
				 PathPrev = Path1 + "/";
				
				 if (i >= NumberOfFile - 1)
					 i = 0;
				 else
					 i++;
				 if (i == NumberOfFile - 1)
				 {
					 next = 0;
					 prev = i - 1;
				 }
				 else
				 {
					 next = i + 1;
				 }
				 if (i == 0)
				 {
					 next = i + 1;
					 prev = NumberOfFile - 1;
				 }
				 else
				 {
					 prev = i - 1;
				 }
				 k = strlen(Store[i]);
				 do
				 {
					 Path1 = Path1 + Convert::ToChar(Store[i][j]);
					 j++;
					 k--;
				 } while (k != 0);

				 k = strlen(Store[next]);
				 j = 0;
				 do
				 {
					 PathNext = PathNext + Convert::ToChar(Store[next][j]);
					 j++;
					 k--;
				 } while (k != 0);
				 k = strlen(Store[prev]);
				 j = 0;
				 do
				 {
					 PathPrev = PathPrev + Convert::ToChar(Store[prev][j]);
					 j++;
					 k--;
				 } while (k != 0);
				 WallpNext->SizeMode = PictureBoxSizeMode::StretchImage;
				 Wallpaper1->SizeMode = PictureBoxSizeMode::StretchImage;
				 WallpPrev->SizeMode = PictureBoxSizeMode::StretchImage;
				 this->WallpNext->Load(PathNext);
				 this->Wallpaper1->Load(Path1);
				 this->WallpPrev->Load(PathPrev);
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

				 int  j = 0, k = 0, next, prev;
				// /*extern*/ int i, NumberOfFile;
				 extern char Store[10][50];
				

				 j = 0, k = 0;
				 Path1 = folderBrowserDialog1->SelectedPath;
				 Path1 = Path1 + "/";
				 PathNext = Path1 + "/";
				 PathPrev = Path1 + "/";

				 if (i != 0)
					 i--;
				 else
					 i = NumberOfFile - 1;
				 if (i == NumberOfFile - 1)
				 {
					 next = 0;
					 prev = i - 1;
				 }
				 else
				 {
					 next = i + 1;

				 }
				 if (i == 0)
				 {
					 next = i + 1;
					 prev = NumberOfFile - 1;
				 }
				 else
				 {
					 prev = i - 1;
				 }
				 k = strlen(Store[i]);
				 do
				 {
					 Path1 = Path1 + Convert::ToChar(Store[i][j]);
					 j++;
					 k--;
				 } while (k != 0);

				 k = strlen(Store[next]);
				 j = 0;
				 do
				 {
					 PathNext = PathNext + Convert::ToChar(Store[next][j]);
					 j++;
					 k--;
				 } while (k != 0);
				 k = strlen(Store[prev]);
				 j = 0;
				 do
				 {
					 PathPrev = PathPrev + Convert::ToChar(Store[prev][j]);
					 j++;
					 k--;
				 } while (k != 0);


				 WallpNext->SizeMode = PictureBoxSizeMode::StretchImage;
				 Wallpaper1->SizeMode = PictureBoxSizeMode::StretchImage;
				 WallpPrev->SizeMode = PictureBoxSizeMode::StretchImage;


				 this->WallpNext->Load(PathNext);
				 this->Wallpaper1->Load(Path1);
				 this->WallpPrev->Load(PathPrev);

	}
//	private: System::Void WallpNext_Click(System::Object^  sender, System::EventArgs^  e) {

	//}
	//private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
//	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

				 exit(0);
	}

			 



	private: System::Void MyForm_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 int xOffset;
				 int yOffset;

				 if (e->Button == System::Windows::Forms::MouseButtons::Left)
				 {
					 xOffset = -e->X - SystemInformation::FrameBorderSize.Width;
					 yOffset = -e->Y - SystemInformation::CaptionHeight -
						 SystemInformation::FrameBorderSize.Height;
					 mouseOffset = new Point(xOffset, yOffset);
					 isMouseDown = true;
				 }
	}
	private: System::Void MyForm_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 if (isMouseDown)
				 {
					 Point mousePos = Control::MousePosition;
					 mousePos.Offset(mouseOffset->X, mouseOffset->Y);
					 Location = mousePos;
				 }
	}


	private: System::Void MyForm_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

				 if (e->Button == System::Windows::Forms::MouseButtons::Left)
				 {
					 isMouseDown = false;
				 }


	};

	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				 // String^ path11;
				 extern char Store[10][50];

				 WIN32_FIND_DATA File;
				 HANDLE F;
				 char KK[50];
				 int k;
				 LPWSTR RootFolder1;

				 System::Windows::Forms::DialogResult result = folderBrowserDialog1->ShowDialog();
				 roots = folderBrowserDialog1->SelectedPath;
				 roots = roots + "/*.jpg";


				 pin_ptr<const wchar_t> wch = PtrToStringChars(roots);

				 size_t convertedChars = 0;
				 size_t  sizeInBytes = ((roots->Length + 1) * 2);
				 errno_t err = 0;
				 char    *ch = (char *)malloc(sizeInBytes);

				 err = wcstombs_s(&convertedChars,
					 ch, sizeInBytes,
					 wch, sizeInBytes);
				 if (err != 0)
					 printf_s("wcstombs_s  failed!\n");

				 printf_s("%s\n", ch);

				 DWORD res_len = MultiByteToWideChar(1251, 0, ch, -1, NULL, 0);
				 RootFolder1 = (LPWSTR)GlobalAlloc(GPTR, (res_len + 1) * sizeof(WCHAR));
				 MultiByteToWideChar(1251, 0, ch, -1, RootFolder1, res_len);



				 F = FindFirstFile(RootFolder1, &File);
				 if (F != INVALID_HANDLE_VALUE)
				 {
					 do {


						 wcstombs(KK, File.cFileName, 20);
						 strcpy(Store[NumberOfFile], KK);
						 NumberOfFile++;

					 } while (FindNextFile(F, &File) != 0);
					 FindClose(F);

				 }
				 button3->Enabled = true;
				 Next->Enabled = true;
	}
	
};
}