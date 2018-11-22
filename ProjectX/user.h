#pragma once
#include "header.h"
#include <msclr\marshal.h>



namespace ProjectX {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for user
	/// </summary>
	public ref class user : public System::Windows::Forms::Form
	{
		static int second;
		static int minute;
		static int questions = 0;
		static int setquestions;
		static int balu = 0;
		String^ sec;
		String^ min;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Panel^  panel1;





	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label5;
			 


	public:
		user(void)
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
		~user()
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
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::ComponentModel::IContainer^  components;

	protected:






















	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(user::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft NeoGothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabControl1->Location = System::Drawing::Point(1, -1);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(679, 414);
			this->tabControl1->TabIndex = 0;
			this->tabControl1->Click += gcnew System::EventHandler(this, &user::tabControl1_Click);
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->pictureBox2);
			this->tabPage1->ForeColor = System::Drawing::Color::Black;
			this->tabPage1->Location = System::Drawing::Point(4, 31);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(671, 379);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Тестування";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->radioButton5);
			this->panel1->Controls->Add(this->radioButton4);
			this->panel1->Controls->Add(this->radioButton3);
			this->panel1->Controls->Add(this->radioButton2);
			this->panel1->Controls->Add(this->radioButton1);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel1->ForeColor = System::Drawing::Color::Black;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(671, 383);
			this->panel1->TabIndex = 4;
			this->panel1->Visible = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button4->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(532, 330);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(130, 35);
			this->button4->TabIndex = 10;
			this->button4->Text = L"->";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &user::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button3->Enabled = false;
			this->button3->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold Condensed", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(267, 330);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(130, 35);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Відповісти";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &user::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(7, 330);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(130, 35);
			this->button2->TabIndex = 8;
			this->button2->Text = L"<-";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &user::button2_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Goudy Stout", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(558, 19);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(89, 32);
			this->label5->TabIndex = 7;
			this->label5->Text = L"0 : 0";
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(60, 227);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(147, 24);
			this->radioButton5->TabIndex = 6;
			this->radioButton5->Text = L"radioButton5";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &user::radioButton5_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(60, 197);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(147, 24);
			this->radioButton4->TabIndex = 5;
			this->radioButton4->Text = L"radioButton4";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &user::radioButton4_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(60, 167);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(147, 24);
			this->radioButton3->TabIndex = 4;
			this->radioButton3->Text = L"radioButton3";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &user::radioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(60, 134);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(147, 24);
			this->radioButton2->TabIndex = 3;
			this->radioButton2->Text = L"radioButton2";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &user::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(60, 104);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(147, 24);
			this->radioButton1->TabIndex = 2;
			this->radioButton1->Text = L"radioButton1";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &user::radioButton1_CheckedChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold Condensed", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(7, 3);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(211, 25);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Питань залишилось: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(47, 64);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 20);
			this->label3->TabIndex = 0;
			this->label3->Text = L"label3";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(671, 383);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(204, 151);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(261, 42);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Розпочати тестування";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &user::button1_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(47, 103);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(142, 22);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Кількість питань:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(47, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(133, 22);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Час тестування:";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(3, 3);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(665, 373);
			this->pictureBox2->TabIndex = 11;
			this->pictureBox2->TabStop = false;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->richTextBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 31);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(671, 379);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Довідка";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft NeoGothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox1->Location = System::Drawing::Point(0, 0);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(675, 385);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->richTextBox2);
			this->tabPage3->Location = System::Drawing::Point(4, 31);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(671, 379);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Результати";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// richTextBox2
			// 
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft NeoGothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox2->Location = System::Drawing::Point(0, 0);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->ReadOnly = true;
			this->richTextBox2->Size = System::Drawing::Size(671, 385);
			this->richTextBox2->TabIndex = 0;
			this->richTextBox2->Text = L"";
			// 
			// tabPage4
			// 
			this->tabPage4->Location = System::Drawing::Point(4, 31);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(671, 379);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Вийти";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &user::timer1_Tick);
			// 
			// user
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->ClientSize = System::Drawing::Size(679, 410);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"user";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"user";
			this->Load += gcnew System::EventHandler(this, &user::user_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		char* to_char(String ^s)
		{
			using namespace Runtime::InteropServices;
			const char* ptr = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			return (char*)ptr;
		}

		list *head = NULL;
		list *cur = NULL;
		float mark1;
		list *tmphead = NULL;

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
					if (tmphead == NULL)
					{
						tmphead = tmp;
					}
					else
					{
						list* find = tmphead;
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
			else
			{
				MessageBox::Show("Помилка!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				this->Close();
			}
			end->next = tmphead;
			tmphead->prev = end;
			return tmphead;
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

		//creating tests
		list* create()
		{
			list *end = NULL;
			list *el;
			list *nexttemp;
			list *prevtemp;
			struct randomizer random1[7];

			for (int i = 0; i < setquestions + 1; i++)
			{
				el = (list*)malloc(sizeof(list));
				strcpy(el->a.answer1, tmphead->a.answer1);
				strcpy(el->a.answer2, tmphead->a.answer2);
				strcpy(el->a.answer3, tmphead->a.answer3);
				strcpy(el->a.answer4, tmphead->a.answer4);
				strcpy(el->a.rightanswer, tmphead->a.rightanswer);
				strcpy(el->a.question, tmphead->a.question);

				el->next = NULL;
				el->prev = NULL;

				if (head == NULL)
				{
					head = el;
					end = el;
				}
				else
				{
					el->next = NULL;
					el->prev = end;
					end->next = el;
					end = el;
				}

				nexttemp = tmphead->next; //vudalennia poto4nogo tmphead
				prevtemp = tmphead->prev;
				prevtemp->next = nexttemp;
				nexttemp->prev = prevtemp;
				free(tmphead);
				tmphead = nexttemp;

				_NUMBERMIXER(random1, 7);
				for (int j = 0; j < random1[0].num; j++)
				{
					tmphead = tmphead->next;
				}
			}
			return head;
		}

		// number mixer
		void _NUMBERMIXER(struct randomizer *str, int n)
		{
			srand(time(NULL));
			for (int i = 0; i < n; i++)                             //filling
			{
				str[i].num = (i + 1);
				str[i].rndm_num = rand() % 100;
			}

			int tmp1;
			int tmp2;
			for (int j = 0; j < n; j++)
				for (int i = 0; i < n - 1; i++)                          //sorting(bubble)
					if (str[i].rndm_num < str[i + 1].rndm_num)
					{
						tmp1 = str[i].rndm_num;
						str[i].rndm_num = str[i + 1].rndm_num;
						str[i + 1].rndm_num = tmp1;

						tmp2 = str[i].num;
						str[i].num = str[i + 1].num;
						str[i + 1].num = tmp2;
					}
		}

		//show all
		void vuvedennia(list* head)
		{
			label3->Text = marshal_as<String^>(head->a.question);
			radioButton1->Text = marshal_as<String^>(head->a.answer1);
			radioButton2->Text = marshal_as<String^>(head->a.answer2);
			radioButton3->Text = marshal_as<String^>(head->a.answer3);
			radioButton4->Text = marshal_as<String^>(head->a.answer4);
			radioButton5->Text = marshal_as<String^>(head->a.rightanswer);
		}
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
				vuvedennia(cur);
			}
			else if (cur->next != NULL)
			{
				cur = cur->next;
				vuvedennia(cur);
			}
			else
			{
				MessageBox::Show("Це останній тест!");
				cur = cur->prev;
				vuvedennia(cur);
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
				vuvedennia(cur);
			}
			else
				MessageBox::Show("Це перший тест!");
			return cur;
		}

		//delete element
		list* delete_element(list *cur)
		{
			if (cur->next->next == NULL && cur->prev == NULL)
			{
				free(cur);
				endOfTesting();
				MessageBox::Show("Тестування закінчено!\nоцінка:" + mark1);
				mark1 = 0;
				head = NULL;
			}
			else if (cur->prev == NULL)
			{
				cur = cur->next;
				head = cur;
				head->prev = NULL;
				free(cur->prev);
				vuvedennia(cur);
				return head;
			}
			else if (cur->next == NULL)
			{
				cur = goprev(cur, head);
				free(cur->next);
				cur->next = NULL;
				vuvedennia(cur);
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
				vuvedennia(cur);
			}
			return cur;
		}


		//options
		void setoptions(optns o1)
		{
			FILE *fp;
			fp = fopen("options.txt", "r");
			if (fp != NULL)
			{
				while (!feof(fp))
				{
					fread(&o1, sizeof(o1), 1, fp);
				}
				second = o1.sec;
				second = second + 1;
				minute = o1.min;
				setquestions = o1.qvstns;
				fclose(fp);
			}
		}
		//mix radiobutton
		void mixbuttons()
		{
			struct randomizer random[5];
			_NUMBERMIXER(random, 5);
			this->radioButton1->Location = System::Drawing::Point(60, 55 + 30 * random[0].num);
			this->radioButton2->Location = System::Drawing::Point(60, 55 + 30 * random[1].num);
			this->radioButton3->Location = System::Drawing::Point(60, 55 + 30 * random[2].num);
			this->radioButton4->Location = System::Drawing::Point(60, 55 + 30 * random[3].num);
			this->radioButton5->Location = System::Drawing::Point(60, 55 + 30 * random[4].num);
		}

		//end of testing
		void endOfTesting()
		{
			label5->Text = "0:0";
			timer1->Enabled = false;
			label3->Text = "";

			button2->Enabled = false;
			button3->Enabled = false;
			button4->Enabled = false;
			this->ControlBox = true;
			radioButton1->Visible = false;
			radioButton2->Visible = false;
			radioButton3->Visible = false;
			radioButton4->Visible = false;
			radioButton5->Visible = false;

			mark1 = (Convert::ToDouble(balu) * 5 / (Convert::ToDouble(setquestions)));
			
			FILE *fptr;
			fptr = fopen("fullstory.txt", "a");
			if (fptr != NULL)
			{
				fprintf(fptr, "оцінка: %0.2f, молодець:)\n", mark1);
				fclose(fptr);
			}

			FILE *fp;
			fp = fopen("story.txt", "a");
			if (fp != NULL)
			{
				fprintf(fp, "%s - %0.2f\n", Header::username, mark1);
				fclose(fp);
			}
		}


	private: System::Void user_Load(System::Object^  sender, System::EventArgs^  e) {
		optns o1;
		setoptions(o1);
		label2->Text = "Час тестування: " + minute + ":" + (second - 1);
		label1->Text = "Кількість питань: " + setquestions;
	}


private: System::Void tabControl1_Click(System::Object^  sender, System::EventArgs^  e) {
	//testing
	if (tabControl1->SelectedIndex == 0)
	{
	}
	//dovidka
	if (tabControl1->SelectedIndex == 1)
	{
		richTextBox1->LoadFile("dovidka.txt", RichTextBoxStreamType::PlainText);
	}
	//results
	if (tabControl1->SelectedIndex == 2)
	{
		richTextBox2->LoadFile("story.txt", RichTextBoxStreamType::PlainText);
	}
	//exit
	if (tabControl1->SelectedIndex == 3)
	{
		balu = 0;
		mark1 = 0;
		setquestions = 0;
		this->Close();
	}

	//check timer
	if (timer1->Enabled == true)
	{
		if (tabControl1->SelectedIndex == 1)
		{
			tabControl1->SelectedIndex = 0;
		}
		if (tabControl1->SelectedIndex == 2)
		{
			tabControl1->SelectedIndex = 0;
		}
		if (tabControl1->SelectedIndex == 3)
		{
			mark1 = 0;
			endOfTesting();
			MessageBox::Show("Тестування припинено!");
		}
	}
}
		 //rozpochatu testuvannia
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	questions = 0;
	
	FILE *fp;
	fp = fopen("fullstory.txt", "a");
	if (fp != NULL)
	{
		fprintf(fp, "-----------------------------------------------------------------------\nname: %s\n\n", Header::username);
		fclose(fp);
	}
	tmphead = reading();
	head = create();
	if (cur == NULL)
		cur = head;

	list *verytmp = head;
	while (verytmp->next != NULL)
	{
		verytmp = verytmp->next;
		questions++;
	}
	if (questions < 1)
	{
		MessageBox::Show("Питання відсутні");
		tmphead = NULL;
		head = NULL;
		verytmp = NULL;
		cur = NULL;
		questions = 0;
	}
	else
	{
		panel1->Visible = true;
		button1->Enabled = false;
		this->ControlBox = false;
		mixbuttons();
		timer1->Enabled = true;
		vuvedennia(head);
		label4->Text = "Питань залишилось: " + questions;
	}
}
		 //answer
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	FILE *fp;
	fp = fopen("fullstory.txt", "a");
	if (fp != NULL)
	{
		fprintf(fp, "%s ", label3->Text);
		if (radioButton1->Checked)
		{
			fprintf(fp, " -  %s\n", radioButton1->Text);
		}
		else if (radioButton2->Checked)
		{
			fprintf(fp, " -  %s\n", radioButton2->Text);
		}
		else if (radioButton3->Checked)
		{
			fprintf(fp, " -  %s\n", radioButton3->Text);
		}
		else if (radioButton4->Checked)
		{
			fprintf(fp, " -  %s\n", radioButton4->Text);
		}
		else if (radioButton5->Checked)
		{
			fprintf(fp, " -  %s\n", radioButton5->Text);
		}
		fclose(fp);
	}
	if (radioButton5->Checked)
		balu++;
	mixbuttons();
	cur = delete_element(cur);
	questions--;
	label4->Text = "Питань залишилось:" + questions;

	radioButton1->Checked = false;
	radioButton2->Checked = false;
	radioButton3->Checked = false;
	radioButton4->Checked = false;
	radioButton5->Checked = false;
	button3->Enabled = false;
}
		 //  ->
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	mixbuttons();
	cur = gonext(cur, head);
	radioButton1->Checked = false;
	radioButton2->Checked = false;
	radioButton3->Checked = false;
	radioButton4->Checked = false;
	radioButton5->Checked = false;
	button3->Enabled = false;
}
		 //  <-
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	mixbuttons();
	cur = goprev(cur, head);
	radioButton1->Checked = false;
	radioButton2->Checked = false;
	radioButton3->Checked = false;
	radioButton4->Checked = false;
	radioButton5->Checked = false;
	button3->Enabled = false;
}
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (radioButton1->Checked || radioButton2->Checked || radioButton3->Checked || radioButton4->Checked || radioButton5->Checked)
	{
		button3->Enabled = true;
	}
}
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (radioButton1->Checked || radioButton2->Checked || radioButton3->Checked || radioButton4->Checked || radioButton5->Checked)
	{
		button3->Enabled = true;
	}
}
private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (radioButton1->Checked || radioButton2->Checked || radioButton3->Checked || radioButton4->Checked || radioButton5->Checked)
	{
		button3->Enabled = true;
	}
}
private: System::Void radioButton4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (radioButton1->Checked || radioButton2->Checked || radioButton3->Checked || radioButton4->Checked || radioButton5->Checked)
	{
		button3->Enabled = true;
	}
}
private: System::Void radioButton5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (radioButton1->Checked || radioButton2->Checked || radioButton3->Checked || radioButton4->Checked || radioButton5->Checked)
	{
		button3->Enabled = true;
	}
}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	
	
	second--;
	if (second < 0)
	{
		second = 60;
		minute--;
	}

	sec = Convert::ToString(second);
	min = Convert::ToString(minute);
	label5->Text = min + ":" + sec;
	if (minute < 0)
	{
		endOfTesting();
		MessageBox::Show("Час вийшов!\nоцінка:" + mark1);
		mark1 = 0;
	}
}
};
}
