#pragma once
#include "Header.h"
#include <msclr\marshal.h>
#include "dllka2.h"


namespace ProjectX {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;
	using namespace dllka_1;
	using namespace dllka_3;

	/// <summary>
	/// Summary for admin
	/// </summary>
	public ref class admin : public System::Windows::Forms::Form
	{
	public:
		admin(void)
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
		~admin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::TabPage^  tabPage5;
	private: System::Windows::Forms::TabPage^  tabPage6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;


	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label20;


	protected:



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(admin::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->tabControl1->Location = System::Drawing::Point(1, -1);
			this->tabControl1->Multiline = true;
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->ShowToolTips = true;
			this->tabControl1->Size = System::Drawing::Size(692, 386);
			this->tabControl1->TabIndex = 1;
			this->tabControl1->Click += gcnew System::EventHandler(this, &admin::tabControl1_Click);
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->tabPage1->Controls->Add(this->button5);
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->label14);
			this->tabPage1->Controls->Add(this->label13);
			this->tabPage1->Controls->Add(this->label12);
			this->tabPage1->Controls->Add(this->label11);
			this->tabPage1->Controls->Add(this->label10);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->textBox12);
			this->tabPage1->Controls->Add(this->textBox11);
			this->tabPage1->Controls->Add(this->textBox10);
			this->tabPage1->Controls->Add(this->textBox9);
			this->tabPage1->Controls->Add(this->textBox8);
			this->tabPage1->Controls->Add(this->textBox7);
			this->tabPage1->Controls->Add(this->pictureBox1);
			this->tabPage1->ForeColor = System::Drawing::Color::Black;
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(684, 357);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Редагувати тести";
			this->tabPage1->Click += gcnew System::EventHandler(this, &admin::tabPage1_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button5->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(545, 310);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(136, 42);
			this->button5->TabIndex = 16;
			this->button5->Text = L"->";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &admin::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button4->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold Condensed", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(153, 309);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(186, 42);
			this->button4->TabIndex = 15;
			this->button4->Text = L"Змінити";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &admin::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button3->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold Condensed", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(353, 310);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(186, 42);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Видалити";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &admin::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(3, 310);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(136, 42);
			this->button2->TabIndex = 13;
			this->button2->Text = L"<-";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &admin::button2_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(3, 3);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(54, 17);
			this->label14->TabIndex = 12;
			this->label14->Text = L"label14";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(67, 46);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(80, 17);
			this->label13->TabIndex = 11;
			this->label13->Text = L"Запитання";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(4, 256);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(143, 17);
			this->label12->TabIndex = 10;
			this->label12->Text = L"Правильна відповідь";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(66, 218);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(77, 17);
			this->label11->TabIndex = 9;
			this->label11->Text = L"Відповідь4";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(66, 183);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(77, 17);
			this->label10->TabIndex = 8;
			this->label10->Text = L"Відповідь3";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(66, 147);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(77, 17);
			this->label9->TabIndex = 7;
			this->label9->Text = L"Відповідь2";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(66, 113);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(77, 17);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Відповідь1";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(153, 256);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(254, 22);
			this->textBox12->TabIndex = 5;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(153, 218);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(254, 22);
			this->textBox11->TabIndex = 4;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(153, 183);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(254, 22);
			this->textBox10->TabIndex = 3;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(153, 147);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(254, 22);
			this->textBox9->TabIndex = 2;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(153, 113);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(254, 22);
			this->textBox8->TabIndex = 1;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(69, 66);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(462, 22);
			this->textBox7->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(678, 351);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->textBox6);
			this->tabPage2->Controls->Add(this->textBox5);
			this->tabPage2->Controls->Add(this->textBox4);
			this->tabPage2->Controls->Add(this->textBox3);
			this->tabPage2->Controls->Add(this->textBox2);
			this->tabPage2->Controls->Add(this->textBox1);
			this->tabPage2->Controls->Add(this->pictureBox2);
			this->tabPage2->ForeColor = System::Drawing::Color::Black;
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(684, 357);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Додати тест";
			this->tabPage2->Click += gcnew System::EventHandler(this, &admin::tabPage2_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(3, 3);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(46, 17);
			this->label7->TabIndex = 13;
			this->label7->Text = L"label7";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(246, 304);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(186, 42);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Додати";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &admin::button1_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(4, 256);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(143, 17);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Правильна відповідь";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(66, 218);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(77, 17);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Відповідь4";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(66, 183);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(77, 17);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Відповідь3";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(66, 147);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(77, 17);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Відповідь2";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(66, 113);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 17);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Відповідь1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(67, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(80, 17);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Запитання";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(153, 256);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(254, 22);
			this->textBox6->TabIndex = 5;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(153, 218);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(254, 22);
			this->textBox5->TabIndex = 4;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(153, 183);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(254, 22);
			this->textBox4->TabIndex = 3;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(153, 147);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(254, 22);
			this->textBox3->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(153, 113);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(254, 22);
			this->textBox2->TabIndex = 1;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(69, 66);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(462, 22);
			this->textBox1->TabIndex = 0;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(3, 3);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(678, 351);
			this->pictureBox2->TabIndex = 14;
			this->pictureBox2->TabStop = false;
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->tabPage3->Controls->Add(this->button6);
			this->tabPage3->Controls->Add(this->richTextBox1);
			this->tabPage3->Controls->Add(this->pictureBox3);
			this->tabPage3->ForeColor = System::Drawing::Color::Black;
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(684, 357);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Редагувти довідку";
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button6->Enabled = false;
			this->button6->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(270, 316);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(139, 38);
			this->button6->TabIndex = 1;
			this->button6->Text = L"Редагувати";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &admin::button6_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(0, 0);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(684, 317);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &admin::richTextBox1_TextChanged);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(3, 3);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(678, 351);
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			// 
			// tabPage4
			// 
			this->tabPage4->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->tabPage4->Controls->Add(this->button10);
			this->tabPage4->Controls->Add(this->button8);
			this->tabPage4->Controls->Add(this->button7);
			this->tabPage4->Controls->Add(this->richTextBox2);
			this->tabPage4->Controls->Add(this->pictureBox4);
			this->tabPage4->ForeColor = System::Drawing::Color::Black;
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(684, 357);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Історія тестування";
			this->tabPage4->Click += gcnew System::EventHandler(this, &admin::tabPage4_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button10->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::Black;
			this->button10->Location = System::Drawing::Point(436, 316);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(214, 40);
			this->button10->TabIndex = 3;
			this->button10->Text = L"Очистити історію";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &admin::button10_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button8->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::Black;
			this->button8->Location = System::Drawing::Point(157, 316);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(133, 40);
			this->button8->TabIndex = 2;
			this->button8->Text = L"Розширена";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &admin::button8_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button7->Enabled = false;
			this->button7->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(18, 316);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(133, 40);
			this->button7->TabIndex = 1;
			this->button7->Text = L"Звичайна";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &admin::button7_Click);
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(0, 0);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(688, 316);
			this->richTextBox2->TabIndex = 0;
			this->richTextBox2->Text = L"";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(3, 3);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(678, 351);
			this->pictureBox4->TabIndex = 4;
			this->pictureBox4->TabStop = false;
			// 
			// tabPage5
			// 
			this->tabPage5->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->tabPage5->Controls->Add(this->label21);
			this->tabPage5->Controls->Add(this->label20);
			this->tabPage5->Controls->Add(this->textBox17);
			this->tabPage5->Controls->Add(this->textBox16);
			this->tabPage5->Controls->Add(this->label18);
			this->tabPage5->Controls->Add(this->button9);
			this->tabPage5->Controls->Add(this->label17);
			this->tabPage5->Controls->Add(this->label16);
			this->tabPage5->Controls->Add(this->label15);
			this->tabPage5->Controls->Add(this->textBox15);
			this->tabPage5->Controls->Add(this->textBox14);
			this->tabPage5->Controls->Add(this->textBox13);
			this->tabPage5->Controls->Add(this->pictureBox5);
			this->tabPage5->ForeColor = System::Drawing::Color::Black;
			this->tabPage5->Location = System::Drawing::Point(4, 25);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(684, 357);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Налаштування";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(368, 140);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(139, 25);
			this->label21->TabIndex = 15;
			this->label21->Text = L"Новий пароль";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(387, 94);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(120, 25);
			this->label20->TabIndex = 14;
			this->label20->Text = L"Новий логін";
			// 
			// textBox17
			// 
			this->textBox17->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox17->Location = System::Drawing::Point(530, 140);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(125, 29);
			this->textBox17->TabIndex = 10;
			this->textBox17->TextChanged += gcnew System::EventHandler(this, &admin::textBox17_TextChanged);
			// 
			// textBox16
			// 
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox16->Location = System::Drawing::Point(530, 94);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(125, 29);
			this->textBox16->TabIndex = 9;
			this->textBox16->TextChanged += gcnew System::EventHandler(this, &admin::textBox16_TextChanged);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(254, 141);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(18, 25);
			this->label18->TabIndex = 7;
			this->label18->Text = L":";
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button9->Enabled = false;
			this->button9->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::Black;
			this->button9->Location = System::Drawing::Point(289, 212);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(124, 36);
			this->button9->TabIndex = 6;
			this->button9->Text = L"Зберегти";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &admin::button9_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(3, 3);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(54, 17);
			this->label17->TabIndex = 5;
			this->label17->Text = L"label17";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(144, 140);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(52, 25);
			this->label16->TabIndex = 4;
			this->label16->Text = L"Час:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(22, 94);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(174, 25);
			this->label15->TabIndex = 3;
			this->label15->Text = L"Кількість питань:";
			// 
			// textBox15
			// 
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox15->Location = System::Drawing::Point(278, 140);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(48, 29);
			this->textBox15->TabIndex = 2;
			this->textBox15->TextChanged += gcnew System::EventHandler(this, &admin::textBox15_TextChanged);
			// 
			// textBox14
			// 
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox14->Location = System::Drawing::Point(202, 140);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(48, 29);
			this->textBox14->TabIndex = 1;
			this->textBox14->TextChanged += gcnew System::EventHandler(this, &admin::textBox14_TextChanged);
			// 
			// textBox13
			// 
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox13->Location = System::Drawing::Point(202, 94);
			this->textBox13->Name = L"textBox13";
			this->textBox13->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->textBox13->Size = System::Drawing::Size(124, 29);
			this->textBox13->TabIndex = 0;
			this->textBox13->TextChanged += gcnew System::EventHandler(this, &admin::textBox13_TextChanged);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(3, 3);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(678, 351);
			this->pictureBox5->TabIndex = 8;
			this->pictureBox5->TabStop = false;
			// 
			// tabPage6
			// 
			this->tabPage6->Location = System::Drawing::Point(4, 25);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Size = System::Drawing::Size(684, 357);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L"Вийти";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(693, 383);
			this->Controls->Add(this->tabControl1);
			this->ForeColor = System::Drawing::Color::Ivory;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"admin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"admin";
			this->Load += gcnew System::EventHandler(this, &admin::admin_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->tabPage4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		char* to_char(String ^s)
		{
			using namespace Runtime::InteropServices;
			const char* ptr = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			return (char*)ptr;
		}

		DLLKA_3 ^dll3 = gcnew DLLKA_3;
		DLLKA_1 ^dll1 = gcnew DLLKA_1;
		optns *options = NULL;
		list *head = NULL;
		list *cur = NULL;
		int vsogoputan = 0;

		//reading from file
		list* reading()
		{
			FILE *fp;
			component cmpnt;
			list *tmp;
			list *end;
			fp = fopen("test.txt", "rb");
			if (fp != NULL)
			{
				while (!feof(fp))
				{
					fread(&cmpnt, sizeof(cmpnt), 1, fp);
					tmp = StvorutuElement(cmpnt);
					if (head == NULL)
					{
						head = tmp;
					}
					else
					{
						list* find = head;
						while (find->next != NULL)
							find = find->next;
						end = find;
						end->next = tmp;
						tmp->prev = end;
						tmp->next = NULL;
						end = tmp;
					}
				}
				fclose(fp);
			}
			return head;
		}

		//stvorennia elementa
		list* StvorutuElement(component structura)
		{
			list *el = (list*)malloc(sizeof(list));
			strcpy(el->a.answer1, structura.answer1);
			strcpy(el->a.answer2, structura.answer2);
			strcpy(el->a.answer3, structura.answer3);
			strcpy(el->a.answer4, structura.answer4);
			strcpy(el->a.rightanswer, structura.rightanswer);
			strcpy(el->a.question, structura.question);

			el->next = NULL;
			el->prev = NULL;
			return el;
		}

		//pokazatu putannia
		//void vuvedennia(list *head)
		//{
		//	textBox7->Text = marshal_as<String^>(head->a.question);
		//	textBox8->Text = marshal_as<String^>(head->a.answer1);
		//	textBox9->Text = marshal_as<String^>(head->a.answer2);
		//	textBox10->Text = marshal_as<String^>(head->a.answer3);
		//	textBox11->Text = marshal_as<String^>(head->a.answer4);
		//	textBox12->Text = marshal_as<String^>(head->a.rightanswer);
		//}

		//vpered
		list* gonext(list* cur, list* head)
		{
			if (cur == NULL)
			{
				cur = head;
			}
			if (cur->next->next == NULL)
			{
				MessageBox::Show("Це останній тест!");
				dll3->vuvedennia(textBox7, textBox8, textBox9, textBox10, textBox11, textBox12, cur);
			}
			else if (cur->next != NULL)
			{
				cur = cur->next;
				dll3->vuvedennia(textBox7, textBox8, textBox9, textBox10, textBox11, textBox12, cur);
			}
			else
			{
				MessageBox::Show("Це останній тест!");
				cur = cur->prev;
				dll3->vuvedennia(textBox7, textBox8, textBox9, textBox10, textBox11, textBox12, cur);
			}
			return cur;
		}

		//nazad
		list* goprev(list* cur, list* head)
		{
			if (cur == NULL)
			{
				cur = head;
			}
			if (cur->prev != NULL)
			{
				cur = cur->prev;
				dll3->vuvedennia(textBox7, textBox8, textBox9, textBox10, textBox11, textBox12, cur);
			}
			else
				MessageBox::Show("Це перший тест!");
			return cur;
		}

		//save
		void save(list* head)
		{
			FILE *fp;
			component ptr;
			list* tmp = head;
			fp = fopen("test.txt", "wb");
			if (fp != NULL)
			{
				while (tmp->next != NULL)
				{
					fwrite(&tmp->a, sizeof(component), 1, fp);
					tmp = tmp->next;
				}
				fclose(fp);
			}
		}

		//delete element
		list* delete_element(list *cur)
		{
			if (cur->next == NULL && cur->prev == NULL)
			{
				free(cur);
				MessageBox::Show("це було останнє питання!");
				textBox7->Clear();
				textBox8->Clear();
				textBox9->Clear();
				textBox10->Clear();
				textBox11->Clear();
				textBox12->Clear();

				head = NULL;
			}
			else if (cur->prev == NULL)
			{
				cur = cur->next;
				head = cur;
				head->prev = NULL;
				free(cur->prev);
				dll3->vuvedennia(textBox7, textBox8, textBox9, textBox10, textBox11, textBox12, cur);
				return head;
			}
			else if (cur->next == NULL)
			{
				cur = goprev(cur, head);
				free(cur->next);
				cur->next = NULL;
				dll3->vuvedennia(textBox7, textBox8, textBox9, textBox10, textBox11, textBox12, cur);
			}
			else
			{
				list* prevtmp;
				list* nexttmp;
				prevtmp = cur->prev;
				nexttmp = cur->next;
				prevtmp->next = nexttmp;
				nexttmp->prev = prevtmp;
				free(cur);
				cur = prevtmp;
				dll3->vuvedennia(textBox7, textBox8, textBox9, textBox10, textBox11, textBox12, cur);
			}
			return cur;
		}

		//count questions
		//int counter(list* head)
		//{
		//	int questions;
		//	list *tmmp = head;
		//	while (tmmp->next != NULL)
		//	{
		//		tmmp = tmmp->next;
		//		questions++;
		//	}
		//	return questions;
		//}

		//save options
		void saveoptions()
		{
			FILE *fp;
			fp = fopen("options.txt", "w");
			if (fp != NULL)
			{
				optns o1;

				o1.qvstns = Convert::ToInt32(textBox13->Text);
				o1.min = Convert::ToInt32(textBox14->Text);
				o1.sec = Convert::ToInt32(textBox15->Text);
				strcpy(o1.login, to_char(textBox16->Text));
				strcpy(o1.password, to_char(textBox17->Text));


				fwrite(&o1, sizeof(o1), 1, fp);
				fclose(fp);
			}
		}

	private: System::Void admin_Load(System::Object^  sender, System::EventArgs^  e) {

		head = NULL;
		cur = head;
		head = reading();
		dll3->vuvedennia(textBox7, textBox8, textBox9, textBox10, textBox11, textBox12, head);

	//	vsogoputan = counter(head);
		vsogoputan = dll1->counter_DLL(head);
		label14->Text = "Всього питань:" + (vsogoputan);

		FILE *fp;
		optns o1;
		fp = fopen("options.txt", "r");
		if (fp != NULL)
		{
			while (!feof(fp))
			{
				fread(&o1, sizeof(o1), 1, fp);
			}
			textBox13->Text = Convert::ToString(o1.qvstns);
			textBox14->Text = Convert::ToString(o1.min);
			textBox15->Text = Convert::ToString(o1.sec);
			textBox16->Text = marshal_as<String^>(o1.login);
			textBox17->Text = marshal_as<String^>(o1.password);
			
			fclose(fp);
		}
	}
			 //add test button
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if ((textBox1->Text != "") && (textBox2->Text != "") && (textBox3->Text != "") && (textBox4->Text != "") && (textBox5->Text != "") && (textBox6->Text != ""))
	{
		dll1->add_tests(textBox1, textBox2, textBox3, textBox4, textBox5, textBox6);
		vsogoputan++;
		label7->Text = "Всього питань:" + (vsogoputan - 1);
	}
	else
		MessageBox::Show("Поля не заповнені!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

}
private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
}///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
private: System::Void tabPage2_Click(System::Object^  sender, System::EventArgs^  e) {
}///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		 //zminutu putannia.button
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (cur == NULL)
		cur = head;
	strcpy(cur->a.question, to_char(textBox7->Text));
	strcpy(cur->a.answer1, to_char(textBox8->Text));
	strcpy(cur->a.answer2, to_char(textBox9->Text));
	strcpy(cur->a.answer3, to_char(textBox10->Text));
	strcpy(cur->a.answer4, to_char(textBox11->Text));
	strcpy(cur->a.rightanswer, to_char(textBox12->Text));
	save(head);
	MessageBox::Show("Редаговано\nуспішно!");
}
	private: System::Void tabControl1_Click(System::Object^  sender, System::EventArgs^  e) {
		//redaguvatu
		if (tabControl1->SelectedIndex == 0)
		{
			vsogoputan = 0;
			head = NULL;
			cur = head;
			textBox7->Clear();
			textBox8->Clear();
			textBox9->Clear();
			textBox10->Clear();
			textBox11->Clear();
			textBox12->Clear();
			head = reading();
			dll3->vuvedennia(textBox7, textBox8, textBox9, textBox10, textBox11, textBox12, head);

			list *tmmp = head;
			while (tmmp->next != NULL)
			{
				tmmp = tmmp->next;
				vsogoputan++;
			}

			label14->Text = "Всього питань:" + (vsogoputan);
		}
		//dodavatu
		else if (tabControl1->SelectedIndex == 1)
		{
			vsogoputan = 0;
			list *tmmp = head;
			while (tmmp->next != NULL)
			{
				tmmp = tmmp->next;
				vsogoputan++;
			}
		label7->Text = "Всього питань:" + (vsogoputan);

		}
		//dovidka
		else if (tabControl1->SelectedIndex == 2)
		{
			richTextBox1->LoadFile("dovidka.txt", RichTextBoxStreamType::PlainText);
		}
		//story
		else if (tabControl1->SelectedIndex == 3)
		{
			richTextBox2->LoadFile("story.txt", RichTextBoxStreamType::PlainText);
		}
		//options
		else if (tabControl1->SelectedIndex == 4)
		{
			vsogoputan = 0;
			list *tmmp = head;
			while (tmmp->next != NULL)
			{
				tmmp = tmmp->next;
				vsogoputan++;
			}
			label17->Text = "Всього питань:" + (vsogoputan);
		}
		//exit
		else if (tabControl1->SelectedIndex == 5)
		{
			this->Close();
		}
}
			 //vpered
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	cur = gonext(cur, head);
}
		 //nazad
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	cur = goprev(cur, head);
}
		 //delete
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (Convert::ToInt32(textBox13->Text) >= vsogoputan - 1)
	{
		MessageBox::Show("Змініть кількістьтестів!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else
	{
		if (cur == NULL)
			cur = head;
		cur = delete_element(cur);
		save(head);
		MessageBox::Show("Питання\nвидалено!");
		vsogoputan--;
		label14->Text = "Всього питань:" + (vsogoputan - 1);
	}
}
		 //save options
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox16->Text != "" && textBox17->Text != "")
	{
		if ((Convert::ToInt32(textBox15->Text) < 0) || (Convert::ToInt32(textBox14->Text) < 0) || (Convert::ToInt32(textBox13->Text) < 0))
		{
			MessageBox::Show("Ці дані не можуть бути від'ємними!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (Convert::ToInt32(textBox13->Text) >= vsogoputan)
		{
			MessageBox::Show("Не достатньо питань\n      для тестування!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		{
			saveoptions();
			button9->Enabled = false;
		}
	}
	else
	{
		MessageBox::Show("Заповніть поля!");
	}
	}


private: System::Void textBox13_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if ((textBox13->Modified) && (textBox13->Text != ""))
		button9->Enabled = true;
	else
		button9->Enabled = false;
}
private: System::Void textBox14_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if ((textBox14->Modified) && (textBox14->Text != ""))
		button9->Enabled = true;
	else
		button9->Enabled = false;
}
private: System::Void textBox15_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if ((textBox15->Modified) && (textBox15->Text != ""))
		button9->Enabled = true;
	else
		button9->Enabled = false;
}
private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (richTextBox1->Modified)
		button6->Enabled = true;
	else
		button6->Enabled = false;
}
		 //save dovidka
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	char _DOV[10000];
	strcpy(_DOV,to_char(richTextBox1->Text));
	Redag_Dovidka(_DOV); //DLL

	button6->Enabled = false;
}
		 //zvu4aina story
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	richTextBox2->Clear();
	richTextBox2->LoadFile("story.txt", RichTextBoxStreamType::PlainText);
	button7->Enabled = false;
	button8->Enabled = true;
}
		 //rozshurena story
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	richTextBox2->Clear();
	richTextBox2->LoadFile("fullstory.txt", RichTextBoxStreamType::PlainText);
	button8->Enabled = false;
	button7->Enabled = true;
}
		 //delete story
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {

	
	dll3->deleteresults();

	MessageBox::Show("історію\nвидалено!");
	button10->Enabled = false;
	richTextBox2->Clear();
}
private: System::Void tabPage4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void textBox16_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if ((textBox16->Modified) && (textBox16->Text != ""))
		button9->Enabled = true;
	else
		button9->Enabled = false;
}
private: System::Void textBox17_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if ((textBox17->Modified) && (textBox17->Text != ""))
		button9->Enabled = true;
	else
		button9->Enabled = false;
}
};
}
