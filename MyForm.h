#pragma once
#include <string.h> 
#include <windows.h> 
#include <wininet.h> 
#include <shlobj.h> 
#include <AtlBase.h> 
#include <AtlConv.h> 



namespace semestr1 {
	using namespace std;
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
	private: System::Windows::Forms::PictureBox^  Wallpaper1;
	private: System::Windows::Forms::TextBox^  textBox1;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Wallpaper1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Highlight;
			this->button1->Location = System::Drawing::Point(63, 46);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(164, 53);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Сделать обоями";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Wallpaper1
			// 
			this->Wallpaper1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Wallpaper1.Image")));
			this->Wallpaper1->Location = System::Drawing::Point(36, 105);
			this->Wallpaper1->Name = L"Wallpaper1";
			this->Wallpaper1->Size = System::Drawing::Size(599, 337);
			this->Wallpaper1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->Wallpaper1->TabIndex = 1;
			this->Wallpaper1->TabStop = false;
			this->Wallpaper1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(411, 46);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(149, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"выормавыа";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(675, 462);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->Wallpaper1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Wallpaper1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

				 RegOpen
				 SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, (PVOID)"zzz.jpg", SPIF_SENDWININICHANGE | SPIF_UPDATEINIFILE);
				// SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, "bitmap1.bmp", SPIF_UPDATEINIFILE);
				 SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, NULL, SPIF_SENDWININICHANGE);
				 if (SystemParametersInfo(SPI_SETDESKWALLPAPER, 0,
					 "zzz.jpg", SPIF_SENDWININICHANGE) == TRUE)
				 {
					 textBox1->Text = "OK!";

				 }
				 else
					 textBox1->Text = "Error!";

			//	 Wallpaper1->Image = Image::FromFile("bitmap1.bmp");

	}
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
				
	
				 
				 Wallpaper1->Image = Image::FromFile("zzz.jpg");
				
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
 