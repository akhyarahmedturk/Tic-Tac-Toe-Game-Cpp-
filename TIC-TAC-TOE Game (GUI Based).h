#pragma once
#include <ctime>
#include <windows.h>
#include <string>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			panel1->Hide();
			button14->Hide();
			button15->Hide();
			button16->Hide();
			textBox13->Hide();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;



	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;





	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip2;
	private: System::Windows::Forms::TextBox^ textBox15;































	private: System::ComponentModel::IContainer^ components;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->contextMenuStrip2 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->label2->Location = System::Drawing::Point(280, 27);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 46);
			this->label2->TabIndex = 1;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button3->Enabled = false;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(889, 166);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(117, 102);
			this->button3->TabIndex = 5;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_1);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button4->Enabled = false;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(639, 274);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(117, 102);
			this->button4->TabIndex = 6;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click_1);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button5->Enabled = false;
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(762, 274);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(121, 102);
			this->button5->TabIndex = 7;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click_1);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(889, 274);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(117, 102);
			this->button6->TabIndex = 8;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button7->Enabled = false;
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(639, 382);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(117, 106);
			this->button7->TabIndex = 9;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button8->Enabled = false;
			this->button8->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(762, 382);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(121, 106);
			this->button8->TabIndex = 10;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button9->Enabled = false;
			this->button9->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(889, 382);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(117, 106);
			this->button9->TabIndex = 11;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->Enabled = false;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(639, 166);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(117, 102);
			this->button1->TabIndex = 4;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_2);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button2->Enabled = false;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(762, 166);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(121, 102);
			this->button2->TabIndex = 12;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_3);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::InfoText;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Enabled = false;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 45, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(670, 180);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(51, 64);
			this->textBox1->TabIndex = 13;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::InfoText;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Enabled = false;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 45, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(795, 180);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(51, 64);
			this->textBox2->TabIndex = 14;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::InfoText;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Enabled = false;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 45, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(921, 180);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(51, 64);
			this->textBox3->TabIndex = 15;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::InfoText;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Enabled = false;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 45, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(670, 291);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(51, 64);
			this->textBox4->TabIndex = 16;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::InfoText;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Enabled = false;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 45, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(795, 291);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(51, 64);
			this->textBox5->TabIndex = 17;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::SystemColors::InfoText;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Enabled = false;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 45, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(921, 291);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(51, 64);
			this->textBox6->TabIndex = 18;
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::SystemColors::InfoText;
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Enabled = false;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 45, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(670, 395);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(51, 64);
			this->textBox7->TabIndex = 19;
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::SystemColors::InfoText;
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Enabled = false;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 45, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(795, 395);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(51, 64);
			this->textBox8->TabIndex = 20;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox8_TextChanged);
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::SystemColors::InfoText;
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox9->Enabled = false;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 45, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(921, 395);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(51, 64);
			this->textBox9->TabIndex = 21;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(110)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->panel1->Controls->Add(this->button13);
			this->panel1->Controls->Add(this->button12);
			this->panel1->Controls->Add(this->textBox10);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(558, 434);
			this->panel1->TabIndex = 27;
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(110)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 24.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::SystemColors::Control;
			this->button13->Location = System::Drawing::Point(266, 254);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(107, 48);
			this->button13->TabIndex = 2;
			this->button13->Text = L"Exit";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(110)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 24.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::SystemColors::Control;
			this->button12->Location = System::Drawing::Point(34, 254);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(226, 48);
			this->button12->TabIndex = 1;
			this->button12->Text = L"Play Again!";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(110)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox10->Enabled = false;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 35.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->ForeColor = System::Drawing::SystemColors::Info;
			this->textBox10->Location = System::Drawing::Point(3, 97);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(376, 119);
			this->textBox10->TabIndex = 0;
			// 
			// textBox13
			// 
			this->textBox13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(177)), static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->textBox13->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 39.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox13->ForeColor = System::Drawing::SystemColors::Info;
			this->textBox13->Location = System::Drawing::Point(29, 141);
			this->textBox13->Multiline = true;
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(418, 205);
			this->textBox13->TabIndex = 6;
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(110)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox11->ForeColor = System::Drawing::SystemColors::Info;
			this->textBox11->Location = System::Drawing::Point(624, 494);
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(399, 35);
			this->textBox11->TabIndex = 28;
			this->textBox11->Text = L"\r\n";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(177)), static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->panel2->Controls->Add(this->button16);
			this->panel2->Controls->Add(this->button15);
			this->panel2->Controls->Add(this->button14);
			this->panel2->Controls->Add(this->textBox12);
			this->panel2->Controls->Add(this->button11);
			this->panel2->Controls->Add(this->button10);
			this->panel2->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel2->Location = System::Drawing::Point(29, 36);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(482, 384);
			this->panel2->TabIndex = 29;
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(177)), static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button16->Enabled = false;
			this->button16->FlatAppearance->BorderSize = 0;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 20.75F));
			this->button16->Location = System::Drawing::Point(86, 318);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(143, 62);
			this->button16->TabIndex = 5;
			this->button16->Text = L"hard";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(177)), static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button15->Enabled = false;
			this->button15->FlatAppearance->BorderSize = 0;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 20.75F));
			this->button15->Location = System::Drawing::Point(98, 238);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(143, 62);
			this->button15->TabIndex = 4;
			this->button15->Text = L"Medium";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(177)), static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button14->Enabled = false;
			this->button14->FlatAppearance->BorderSize = 0;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 20.75F));
			this->button14->Location = System::Drawing::Point(86, 170);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(143, 62);
			this->button14->TabIndex = 3;
			this->button14->Text = L"Easy";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(177)), static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->textBox12->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox12->ForeColor = System::Drawing::SystemColors::Info;
			this->textBox12->Location = System::Drawing::Point(145, 22);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(151, 50);
			this->textBox12->TabIndex = 2;
			this->textBox12->Text = L"Modes";
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(177)), static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 24.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(66, 95);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(137, 62);
			this->button11->TabIndex = 1;
			this->button11->Text = L"Single";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click_1);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(177)), static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 24.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(238, 95);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(236, 62);
			this->button10->TabIndex = 0;
			this->button10->Text = L"Mutiplayer";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click_1);
			// 
			// textBox14
			// 
			this->textBox14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(177)), static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->textBox14->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 15.75F));
			this->textBox14->Location = System::Drawing::Point(731, 129);
			this->textBox14->Multiline = true;
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(197, 34);
			this->textBox14->TabIndex = 30;
			// 
			// contextMenuStrip2
			// 
			this->contextMenuStrip2->Name = L"contextMenuStrip2";
			this->contextMenuStrip2->Size = System::Drawing::Size(61, 4);
			// 
			// textBox15
			// 
			this->textBox15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(177)), static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->textBox15->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Cambria", 13.25F, System::Drawing::FontStyle::Bold));
			this->textBox15->ForeColor = System::Drawing::SystemColors::ControlText;
			this->textBox15->Location = System::Drawing::Point(2, 460);
			this->textBox15->Multiline = true;
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(240, 80);
			this->textBox15->TabIndex = 31;
			this->textBox15->Text = L"Design & Developed\r\n                  by\r\nAkhyar Ahmed Turk";
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1221, 541);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseUp);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool flag = true,middle=false;
		int choice = -1;
		private:
			void comp_pick()
			{
				if (choice == 3 )
				{
					if (middle == false)
					{
						middle = true;
						if (textBox5->Text == "")
						{
							textBox5->Enabled = true;
							textBox5->Text = "O";
							button5->Enabled = false;
						}
						else {
							textBox1->Enabled = true;
							textBox1->Text = "O";
							button1->Enabled = false;
						}
						return;
					}
					if ((((textBox1->Text != "" && textBox9->Text != "") && !(textBox3->Text != "" && textBox7->Text != "")) ||
						(!(textBox1->Text != "" && textBox9->Text != "") && (textBox3->Text != "" && textBox7->Text != ""))) &&
						textBox5->Text != "" && textBox8->Text == "" && textBox6->Text == "" && textBox4->Text == "" && textBox2->Text == "")
					{
						if (textBox5->Text == "O") {
							textBox6->Enabled = true;
							textBox6->Text = "O";
							button6->Enabled = false;
							return;
						}
						else if (textBox3->Text == "O" || textBox7->Text == "O") {
							textBox9->Enabled = true;
							textBox9->Text = "O";
							button9->Enabled = false;
							return;
						}
						else if (textBox1->Text == "O" || textBox9->Text == "O") {
							textBox3->Enabled = true;
							textBox3->Text = "O";
							button3->Enabled = false;
							return;
						}
					}
					else if (textBox1->Text == "O" && textBox1->Text == textBox2->Text && textBox3->Text == "")
					{
						textBox3->Enabled = true;
						textBox3->Text = "O";
						button3->Enabled = false;
						return;
					}
					else if (textBox1->Text == "O" && textBox1->Text == textBox3->Text && textBox2->Text == "")
					{
						textBox2->Enabled = true;
						    textBox2->Text = "O";
							button2->Enabled = false;
							return;
					}
					else if (textBox2->Text == "O" && textBox2->Text == textBox3->Text && textBox1->Text == "")
					{
						textBox1->Enabled = true;
						textBox1->Text = "O";
						button1->Enabled = false;
						return;
					}
					else if (textBox4->Text == "O" && textBox4->Text == textBox5->Text && textBox6->Text == "")
					{
						textBox6->Enabled = true;
						textBox6->Text = "O";
						button6->Enabled = false;
						return;
					}
					else if (textBox4->Text == "O" && textBox4->Text == textBox6->Text && textBox5->Text == "")
					{
						textBox5->Enabled = true;
						textBox5->Text = "O";
						button5->Enabled = false;
						return;
					}
					else if (textBox5->Text == "O" && textBox5->Text == textBox6->Text && textBox4->Text == "")
					{
						textBox4->Enabled = true;
						textBox4->Text = "O";
						button4->Enabled = false;
						return;
					}
					else if (textBox1->Text == "O" && textBox1->Text == textBox4->Text && textBox7->Text == "")
					{
						textBox7->Enabled = true;
						textBox7->Text = "O";
						button7->Enabled = false;
						return;
					}
					else if (textBox1->Text == "O" && textBox1->Text == textBox7->Text && textBox4->Text == "")
					{
						textBox4->Enabled = true;
						textBox4->Text = "O";
						button4->Enabled = false;
						return;
					}
					else if (textBox4->Text == "O" && textBox4->Text == textBox7->Text && textBox1->Text == "")
					{
						textBox1->Enabled = true;
						textBox1->Text = "O";
						button1->Enabled = false;
						return;
					}
					else if (textBox2->Text == "O" && textBox2->Text == textBox5->Text && textBox8->Text == "")
					{
						textBox8->Enabled = true;
						textBox8->Text = "O";
						button8->Enabled = false;
						return;
					}
					else if (textBox2->Text == "O" && textBox2->Text == textBox8->Text && textBox5->Text == "")
					{
						textBox5->Enabled = true;
						textBox5->Text = "O";
						button5->Enabled = false;
						return;
					}
					else if (textBox5->Text == "O" && textBox5->Text == textBox8->Text && textBox2->Text == "")
					{
						textBox2->Enabled = true;
						textBox2->Text = "O";
						button2->Enabled = false;
						return;
					}
					else if (textBox3->Text == "O" && textBox3->Text == textBox6->Text && textBox9->Text == "")
					{
						textBox9->Enabled = true;
						textBox9->Text = "O";
						button9->Enabled = false;
						return;
					}
					else if (textBox3->Text == "O" && textBox3->Text == textBox9->Text && textBox6->Text == "")
					{
						textBox6->Enabled = true;
						textBox6->Text = "O";
						button6->Enabled = false;
						return;
					}
					else if (textBox6->Text == "O" && textBox6->Text == textBox9->Text && textBox3->Text == "")
					{
						textBox3->Enabled = true;
						textBox3->Text = "O";
						button3->Enabled = false;
						return;
					}
					else if (textBox1->Text == "O" && textBox1->Text == textBox5->Text && textBox9->Text == "")
					{
						textBox9->Enabled = true;
						textBox9->Text = "O";
						button9->Enabled = false;
						return;
					}
					else if (textBox1->Text == "O" && textBox1->Text == textBox9->Text && textBox5->Text == "")
					{
						textBox5->Enabled = true;
						textBox5->Text = "O";
						button5->Enabled = false;
						return;
					}
					else if (textBox9->Text == "O" && textBox9->Text == textBox5->Text && textBox1->Text == "")
					{
						textBox1->Enabled = true;
						textBox1->Text = "O";
						button1->Enabled = false;
						return;
					}
					else if (textBox3->Text == "O" && textBox3->Text == textBox5->Text && textBox7->Text == "")
					{
						textBox7->Enabled = true;
						textBox7->Text = "O";
						button7->Enabled = false;
						return;
					}
					else if (textBox3->Text == "O" && textBox3->Text == textBox7->Text && textBox5->Text == "")
					{
						textBox5->Enabled = true;
						textBox5->Text = "O";
						button5->Enabled = false;
						return;
					}
					else if (textBox5->Text == "O" && textBox5->Text == textBox7->Text && textBox3->Text == "")
					{
						textBox3->Enabled = true;
						textBox3->Text = "O";
						button3->Enabled = false;
						return;
					}
				}
			if (choice == 2 || choice == 3) {
				if (textBox1->Text == "X" && textBox1->Text == textBox2->Text && textBox3->Text == "")
				{
					textBox3->Enabled = true;
					textBox3->Text = "O";
					button3->Enabled = false;
					return;
				}
				else if (textBox1->Text == "X" && textBox1->Text == textBox3->Text && textBox2->Text == "")
				{
					textBox2->Enabled = true;
					textBox2->Text = "O";
					button2->Enabled = false;
					return;
				}
				else if (textBox2->Text == "X" && textBox2->Text == textBox3->Text && textBox1->Text == "")
				{
					textBox1->Enabled = true;
					textBox1->Text = "O";
					button1->Enabled = false;
					return;
				}
				else if (textBox4->Text == "X" && textBox4->Text == textBox5->Text && textBox6->Text == "")
				{
					textBox6->Enabled = true;
					textBox6->Text = "O";
					button6->Enabled = false;
					return;
				}
				else if (textBox4->Text == "X" && textBox4->Text == textBox6->Text && textBox5->Text == "")
				{
					textBox5->Enabled = true;
					textBox5->Text = "O";
					button5->Enabled = false;
					return;
				}
				else if (textBox5->Text == "X" && textBox5->Text == textBox6->Text && textBox4->Text == "")
				{
					textBox4->Enabled = true;
					textBox4->Text = "O";
					button4->Enabled = false;
					return;
				}
				else if (textBox7->Text == "X" && textBox7->Text == textBox8->Text && textBox9->Text == "")
				{
					textBox9->Enabled = true;
					textBox9->Text = "O";
					button9->Enabled = false;
					return;
				}
				else if (textBox7->Text == "X" && textBox7->Text == textBox9->Text && textBox8->Text == "")
				{
					textBox8->Enabled = true;
					textBox8->Text = "O";
					button8->Enabled = false;
					return;
				}
				else if (textBox8->Text == "X" && textBox8->Text == textBox9->Text && textBox7->Text == "")
				{
					textBox7->Enabled = true;
					textBox7->Text = "O";
					button7->Enabled = false;
					return;
				}
				else if (textBox1->Text == "X" && textBox1->Text == textBox4->Text && textBox7->Text == "")
				{
					textBox7->Enabled = true;
					textBox7->Text = "O";
					button7->Enabled = false;
					return;
				}
				else if (textBox1->Text == "X" && textBox1->Text == textBox7->Text && textBox4->Text == "")
				{
					textBox4->Enabled = true;
					textBox4->Text = "O";
					button4->Enabled = false;
					return;
				}
				else if (textBox4->Text == "X" && textBox4->Text == textBox7->Text && textBox1->Text == "")
				{
					textBox1->Enabled = true;
					textBox1->Text = "O";
					button1->Enabled = false;
					return;
				}
				else if (textBox2->Text == "X" && textBox2->Text == textBox5->Text && textBox8->Text == "")
				{
					textBox8->Enabled = true;
					textBox8->Text = "O";
					button8->Enabled = false;
					return;
				}
				else if (textBox2->Text == "X" && textBox2->Text == textBox8->Text && textBox5->Text == "")
				{
					textBox5->Enabled = true;
					textBox5->Text = "O";
					button5->Enabled = false;
					return;
				}
				else if (textBox5->Text == "X" && textBox5->Text == textBox8->Text && textBox2->Text == "")
				{
					textBox2->Enabled = true;
					textBox2->Text = "O";
					button2->Enabled = false;
					return;
				}
				else if (textBox3->Text == "X" && textBox3->Text == textBox6->Text && textBox9->Text == "")
				{
					textBox9->Enabled = true;
					textBox9->Text = "O";
					button9->Enabled = false;
					return;
				}
				else if (textBox3->Text == "X" && textBox3->Text == textBox9->Text && textBox6->Text == "")
				{
					textBox6->Enabled = true;
					textBox6->Text = "O";
					button6->Enabled = false;
					return;
				}
				else if (textBox6->Text == "X" && textBox6->Text == textBox9->Text && textBox3->Text == "")
				{
					textBox3->Enabled = true;
					textBox3->Text = "O";
					button3->Enabled = false;
					return;
				}
				else if (textBox1->Text == "X" && textBox1->Text == textBox5->Text && textBox9->Text == "")
				{
					textBox9->Enabled = true;
					textBox9->Text = "O";
					button9->Enabled = false;
					return;
				}
				else if (textBox1->Text == "X" && textBox1->Text == textBox9->Text && textBox5->Text == "")
				{
					textBox5->Enabled = true;
					textBox5->Text = "O";
					button5->Enabled = false;
					return;
				}
				else if (textBox9->Text == "X" && textBox9->Text == textBox5->Text && textBox1->Text == "")
				{
					textBox1->Enabled = true;
					textBox1->Text = "O";
					button1->Enabled = false;
					return;
				}
				else if (textBox3->Text == "X" && textBox3->Text == textBox5->Text && textBox7->Text == "")
				{
					textBox7->Enabled = true;
					textBox7->Text = "O";
					button7->Enabled = false;
					return;
				}
				else if (textBox3->Text == "X" && textBox3->Text == textBox7->Text && textBox5->Text == "")
				{
					textBox5->Enabled = true;
					textBox5->Text = "O";
					button5->Enabled = false;
					return;
				}
				else if (textBox5->Text == "X" && textBox5->Text == textBox7->Text && textBox3->Text == "")
				{
					textBox3->Enabled = true;
					textBox3->Text = "O";
					button3->Enabled = false;
					return;
				}
			}
			if (textBox5->Text == "") {
				textBox5->Enabled = true;
				textBox5->Text = "O";
				button5->Enabled = false;
				return;
			}
			else if (textBox1->Text == "") {
				textBox1->Enabled = true;
				textBox1->Text = "O";
				button1->Enabled = false;
				return;
			}
			else if (textBox3->Text == "") {
				textBox3->Enabled = true;
				textBox3->Text = "O";
				button3->Enabled = false;
				return;
			}
			else if (textBox7->Text == "") {
				textBox7->Enabled = true;
				textBox7->Text = "O";
				button7->Enabled = false;
				return;
			}
			else if (textBox9->Text == "") {
				textBox9->Enabled = true;
				textBox9->Text = "O";
				button9->Enabled = false;
				return;
			}
			else if (textBox2->Text == "") {
				textBox2->Enabled = true;
				textBox2->Text = "O";
				button2->Enabled = false;
				return;
			}
			else if (textBox4->Text == "") {
				textBox4->Enabled = true;
				textBox4->Text = "O";
				button4->Enabled = false;
				return;
			}
			else if (textBox6->Text == "") {
				textBox6->Enabled = true;
				textBox6->Text = "O";
				button6->Enabled = false;
				return;
			}
			else if (textBox8->Text == "") {
				textBox8->Enabled = true;
				textBox8->Text = "O";
				button8->Enabled = false;
				return;
			}
		}
		private:
			void Measures(int check,int choice) {
				textBox13->Hide();
				if (check == 1) {
					panel1->Show();
					textBox10->Enabled = true;
					if(choice>=0)
						textBox10->Text = "You Won!";
					else
						textBox10->Text = "Player 1 Won!";
				}
				else if (check == 2) {
					panel1->Show();
					textBox10->Enabled = true;
					if(choice>=0)
					textBox10->Text = "Computer Won!";
					else
						textBox10->Text = "Player 2 Won!";
				}
				else if (check == 3) {
					panel1->Show();
					textBox10->Enabled = true;
					textBox10->Text = "It's a Draw!";
				}
				middle = false;
				textBox14->Text = "";
				textBox13->Text = "";
				button1->Enabled = false;
				button2->Enabled = false;
				button3->Enabled = false;
				button4->Enabled = false;
				button5->Enabled = false;
				button6->Enabled = false;
				button7->Enabled = false;
				button8->Enabled = false;
				button9->Enabled = false;
				button10->Enabled = false;
				button14->Hide();
				button14->Enabled = false;
				button15->Hide();
				button15->Enabled = false;
				button16->Hide();
				button16->Enabled = false;
				choice = -1;
				flag = true;
			}
		private:
			int Checking() {
				if (textBox1->Text == textBox2->Text && textBox1->Text == textBox3->Text && textBox1->Text != "") {
					if (textBox1->Text == "X") {
						return 1;
					}
					else if (textBox1->Text == "O") {
						return 2;
					}
				}
				else if (textBox4->Text == textBox5->Text && textBox4->Text == textBox6->Text && textBox4->Text!="") {
						if (textBox4->Text == "X") {
							return 1;
						}
						else if (textBox4->Text == "O") {
							return 2;
						}
				}
				else if (textBox7->Text == textBox8->Text && textBox8->Text == textBox9->Text && textBox7->Text != "") {
					if (textBox7->Text == "X") {
						return 1;
					}
					else if (textBox7->Text == "O") {
						return 2;
					}
				}
				else if (textBox1->Text == textBox4->Text && textBox4->Text == textBox7->Text && textBox1->Text != "") {
					if (textBox1->Text == "X") {
						return 1;
					}
					else if (textBox1->Text == "O") {
						return 2;
					}
				}
				else if (textBox2->Text == textBox5->Text && textBox2->Text == textBox8->Text && textBox2->Text != "") {
					if (textBox2->Text == "X") {
						return 1;
					}
					else if (textBox2->Text == "O") {
						return 2;
					}
				}
				else if (textBox3->Text == textBox9->Text && textBox3->Text == textBox6->Text && textBox3->Text != "") {
					if (textBox3->Text == "X") {
						return 1;
					}
					else if (textBox3->Text == "O") {
						return 2;
					}
				}
				else if (textBox1->Text == textBox5->Text && textBox5->Text == textBox9->Text && textBox1->Text != "") {
					if (textBox1->Text == "X") {
						return 1;
					}
					else if (textBox1->Text == "O") {
						return 2;
					}
				}
				else if (textBox5->Text == textBox3->Text && textBox7->Text == textBox5->Text && textBox5->Text != "") {
					if (textBox3->Text == "X") {
						return 1;
					}
					else if (textBox3->Text == "O") {
						return 2;
					}
				}
				else if (textBox1->Text!="" && textBox2->Text != "" && textBox3->Text != "" && textBox4->Text != "" &&
					 textBox5->Text != "" && textBox6->Text != ""&& textBox7->Text != "" && textBox8->Text != "" && textBox9->Text != "") {
						return 3;
				}
				return 0;
			}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
}
private: System::Void MyForm_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
}
private: System::Void MyForm_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
}
private: System::Void button5_Click_1(System::Object^ sender, System::EventArgs^ e) {
	textBox5->Enabled = true;
	if (flag) {
		textBox5->Text = "X";
		int check = Checking();
		if (check != 0) {
			Measures(check, choice);
		}
		if (choice != -1) {
			textBox14->Text = "Computer Pick";
			Sleep(1000);
			comp_pick();
			textBox14->Text = "Your Pick";
		}
		else {
			flag = false;
			textBox14->Text = "Player 2 Pick";
		}
	}
	else{
		textBox14->Text = "Player 1 Pick";
		textBox5->Text = "O";
		flag = true;
	}
	button5->Enabled = false;
	int check = Checking();
	if (check != 0) {
		Measures(check, choice);
	}
}
private: System::Void button1_Click_2(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Enabled = true;
	if (flag) {
		textBox1->Text = "X";
		int check = Checking();
		if (check != 0) {
			Measures(check, choice);
		}
		if (choice != -1) {
			textBox14->Text = "Computer Pick";
			Sleep(1000);
			comp_pick();
			textBox14->Text = "Your Pick";
		}
		else {
			flag = false;
			textBox14->Text = "Player 2 Pick";
		}

	}
	else {
		textBox14->Text = "Player 1 Pick";
		textBox1->Text = "O";
		flag = true;
	}
	button1->Enabled = false;
	int check = Checking();
	if (check != 0) {
		Measures(check, choice);
	}
}
private: System::Void button2_Click_3(System::Object^ sender, System::EventArgs^ e) {
	textBox2->Enabled = true;
	if (flag) {
		textBox2->Text = "X";
		int check = Checking();
		if (check != 0) {
			Measures(check, choice);
		}
		if (choice != -1) {
			textBox14->Text = "Computer Pick";
			Sleep(1000);
			comp_pick();
			textBox14->Text = "Your Pick";
		}
		else {
			flag = false;
			textBox14->Text = "Player 2 Pick";
		}

	}
	else {
		textBox14->Text = "Player 1 Pick";
		textBox2->Text = "O";
		flag = true;
	}
	button2->Enabled = false;
	int check = Checking();
	if (check != 0) {
		Measures(check, choice);
	}
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
	textBox3->Enabled = true;
	if (flag) {
		textBox3->Text = "X";
		int check = Checking();
		if (check != 0) {
			Measures(check, choice);
		}
		if (choice != -1) {
			textBox14->Text = "Computer Pick";
			Sleep(1000);
			comp_pick();
			textBox14->Text = "Your Pick";
		}
		else {
			flag = false;
			textBox14->Text = "Player 2 Pick";
		}

	}
	else {
		textBox14->Text = "Player 1 Pick";
		textBox3->Text = "O";
		flag = true;
	}
	button3->Enabled = false;
	int check = Checking();
	if (check != 0) {
		Measures(check, choice);
	}
}
private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
	textBox4->Enabled = true;
	if (flag) {
		textBox4->Text = "X";
		int check = Checking();
		if (check != 0) {
			Measures(check, choice);
		}
		if (choice != -1) {
			textBox14->Text = "Computer Pick";
			Sleep(1000);
			comp_pick();
			textBox14->Text = "Your Pick";
		}
		else {
			flag = false;
			textBox14->Text = "Player 2 Pick";
		}

	}
	else {
		textBox14->Text = "Player 1 Pick";
		textBox4->Text = "O";
		flag = true;
	}
	button4->Enabled = false;
	int check = Checking();
	if (check != 0) {
		Measures(check, choice);
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox6->Enabled = true;
	if (flag) {
		textBox6->Text = "X";
		int check = Checking();
		if (check != 0) {
			Measures(check, choice);
		}
		if (choice != -1) {
			textBox14->Text = "Computer Pick";
			Sleep(1000);
			comp_pick();
			textBox14->Text = "Your Pick";
		}
		else {
			flag = false;
			textBox14->Text = "Player 2 Pick";
		}

	}
	else {
		textBox14->Text = "Player 1 Pick";
		textBox6->Text = "O";
		flag = true;
	}
	button6->Enabled = false;
	int check = Checking();
	if (check != 0) {
		Measures(check, choice);
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox7->Enabled = true;
	if (flag) {
		textBox7->Text = "X";
		int check = Checking();
		if (check != 0) {
			Measures(check, choice);
		}
		if (choice != -1) {
			textBox14->Text = "Computer Pick";
			Sleep(1000);
			comp_pick();
			textBox14->Text = "Your Pick";
		}
		else {
			flag = false;
			textBox14->Text = "Player 2 Pick";
		}
	}
	else {
		textBox14->Text = "Player 1 Pick";
		textBox7->Text = "O";
		flag = true;
	}
	button7->Enabled = false;
	int check = Checking();
	if (check != 0) {
		Measures(check, choice);
	}
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox9->Enabled = true;
	if (flag) {
		textBox9->Text = "X";
		if (choice != -1) {
			textBox14->Text = "Computer Pick";
			Sleep(1000);
			comp_pick();
			textBox14->Text = "Your Pick";
		}
		else {
			flag = false;
			textBox14->Text = "Player 2 Pick";
		}
	}
	else {
		textBox14->Text = "Player 1 Pick";
		textBox9->Text = "O";
		flag = true;
	}
	button9->Enabled = false;
	int check = Checking();
	if (check != 0) {
		Measures(check, choice);
	}
}
private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox8->Enabled = true;
	if (flag) {
		textBox8->Text = "X";
		int check = Checking();
		if (check != 0) {
			Measures(check, choice);
		}
		if (choice != -1) {
			textBox14->Text = "Computer Pick";
			Sleep(1000);
			comp_pick();
			textBox14->Text = "Your Pick";
		}
		else {
			flag = false;
			textBox14->Text = "Player 2 Pick";
		}

	}
	else {
		textBox14->Text = "Player 1 Pick";
		textBox8->Text = "O";
		flag = true;
	}
	button8->Enabled = false;
	int check = Checking();
	if (check!=0){
		Measures(check,choice);
	}
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	textBox4->Text = "";
	textBox5->Text = "";
	textBox6->Text = "";
	textBox7->Text = "";
	textBox8->Text = "";
	textBox9->Text = "";
	textBox1->Enabled = false;
	textBox2->Enabled = false;
	textBox3->Enabled = false;
	textBox4->Enabled = false;
	textBox5->Enabled = false;
	textBox6->Enabled = false;
	textBox7->Enabled = false;
	textBox8->Enabled = false;
	textBox9->Enabled = false;
	panel2->Show();
	button10->Enabled = true;
	button11->Enabled = true;
	panel1->Hide();
}
private: System::Void button11_Click_1(System::Object^ sender, System::EventArgs^ e) {
	button10->Enabled = false;
	button11->Enabled = false;
	button14->Show();
	button14->Enabled = true;
	button15->Show();
	button15->Enabled = true;
	button16->Show();
	button16->Enabled = true;
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	choice = 3;
	panel2->Hide();
	textBox13->Show();
	textBox11->Text = "  Player->X       Computer->O";
	textBox13->Text = "Single (Hard)";
	button1->Enabled = true;
	button2->Enabled = true;
	button3->Enabled = true;
	button4->Enabled = true;
	button5->Enabled = true;
	button6->Enabled = true;
	button7->Enabled = true;
	button8->Enabled = true;
	button9->Enabled = true;
}
private: System::Void button10_Click_1(System::Object^ sender, System::EventArgs^ e) {
	choice = -1;
	panel2->Hide();
	textBox13->Show();
	textBox11->Text = "  Player 1->X       Player 2->O";
	textBox13->Text = "Multiplayer";
	textBox14->Text = "Player 1 Pick";
	button14->Hide();
	button14->Enabled = false;
	button15->Hide();
	button15->Enabled = false;
	button16->Hide();
	button16->Enabled = false;
	button1->Enabled = true;
	button2->Enabled = true;
	button3->Enabled = true;
	button4->Enabled = true;
	button5->Enabled = true;
	button6->Enabled = true;
	button7->Enabled = true;
	button8->Enabled = true;
	button9->Enabled = true;
	button10->Enabled = false;
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	choice = 1;
	panel2->Hide();
	textBox13->Show();
	textBox11->Text = "  Player->X       Computer->O";
	textBox13->Text = "Single (Easy)";
	button1->Enabled = true;
	button2->Enabled = true;
	button3->Enabled = true;
	button4->Enabled = true;
	button5->Enabled = true;
	button6->Enabled = true;
	button7->Enabled = true;
	button8->Enabled = true;
	button9->Enabled = true;
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	choice = 2;
	panel2->Hide();
	textBox13->Show();
	textBox11->Text = "  Player->X       Computer->O";
	textBox13->Text = "Single (Medium)";
	button1->Enabled = true;
	button2->Enabled = true;
	button3->Enabled = true;
	button4->Enabled = true;
	button5->Enabled = true;
	button6->Enabled = true;
	button7->Enabled = true;
	button8->Enabled = true;
	button9->Enabled = true;
}
};
}
