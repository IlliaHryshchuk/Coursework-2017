#pragma once
#include "Header.h"
#include "admin.h"
#include "user.h"

namespace ProjectX {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Entry
	/// </summary>
	public ref class Entry : public System::Windows::Forms::Form
	{
	public:
		Entry(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Entry()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Entry::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(76, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Логін";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(76, 106);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Пароль";
			this->label2->Visible = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(79, 76);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(114, 22);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Entry::textBox1_TextChanged);
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(79, 126);
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(114, 22);
			this->maskedTextBox1->TabIndex = 3;
			this->maskedTextBox1->Visible = false;
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(100, 164);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(78, 31);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Увійти";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Entry::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(273, 257);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// Entry
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(273, 257);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Entry";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Entry";
			this->Load += gcnew System::EventHandler(this, &Entry::Entry_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String ^log;
		String ^pasw;
		char* to_char(String ^s)
		{
			using namespace Runtime::InteropServices;
			const char* ptr = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			return (char*)ptr;
		}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text != "" && ((strcmp(to_char(textBox1->Text), to_char(log)) > 0) || (strcmp(to_char(textBox1->Text), to_char(log)) < 0)))
		//if (textBox1->Text != "" && textBox1->Text != "admin")
		{
			Header::username = textBox1->Text;
			user ^ form = gcnew user();
			form->Text = "Меню Студента";
			form->ShowDialog();
		}
		else
		{
			if (strcmp(to_char(maskedTextBox1->Text), to_char(pasw)) == 0)
			//if (maskedTextBox1->Text == "admin")
			{
				Header::username = textBox1->Text;
				admin ^ form = gcnew admin(); 
				form->Text = "Меню Адміністратора";
				form->ShowDialog();
			}
			else MessageBox::Show("Неправильний пароль", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text != "")
	{
		button1->Enabled = true;
	}
	else
	{
		button1->Enabled = false;
	}
	if (strcmp(to_char(textBox1->Text), to_char(log)) == 0)
	//if (textBox1->Text == "admin")
	{
		maskedTextBox1->Visible = true;
		label2->Visible = true;
	}
	else
	{
		maskedTextBox1->Visible = false;
		label2->Visible = false;
	}
}
private: System::Void Entry_Load(System::Object^  sender, System::EventArgs^  e) {
	FILE *fp;
	optns op;
	fp = fopen("options.txt", "r");
	if (fp != NULL)
	{
		while (!feof(fp))
		{
			fread(&op, sizeof(op), 1, fp);
		}
		log = marshal_as<String^>(op.login);;
		pasw = marshal_as<String^>(op.password);
	}
}
};
}
