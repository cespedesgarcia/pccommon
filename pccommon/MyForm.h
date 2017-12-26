#pragma once

#include <atltime.h>

#include <Wbemidl.h>
#include <comdef.h>
#pragma comment(lib, "wbemuuid.lib")

#define _WIN32_DCOM
#define _WIN32_WINNT  0x0501

#define NVAPI_MAX_PHYSICAL_GPUS   64
#define NVAPI_MAX_USAGES_PER_GPU  34
namespace pccommon {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//TODO
		}
	protected:

		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::ProgressBar^  progressBar2;
	private: System::Windows::Forms::ProgressBar^  progressBar3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::ToolStripMenuItem^  hideshowToolStripMenuItem;
	private: System::Windows::Forms::NotifyIcon^  notifyIcon4;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::NotifyIcon^  notifyIcon5;
	private: System::Windows::Forms::NotifyIcon^  notifyIcon3;
	private: System::Windows::Forms::NotifyIcon^  notifyIcon2;
	private: System::Windows::Forms::NotifyIcon^  notifyIcon1;
	private: System::Windows::Forms::Timer^  timer3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::Windows::Forms::ToolTip^  toolTip2;
	private: System::Windows::Forms::ToolTip^  toolTip3;
	private: System::Windows::Forms::ToolTip^  toolTip4;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^  ontopToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ToolTip^  toolTip5;
	private: System::Windows::Forms::ToolTip^  toolTip6;
	private: System::Windows::Forms::ProgressBar^  progressBar4;
	private: System::ComponentModel::IContainer^  components;
	protected:
	private:

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar2 = (gcnew System::Windows::Forms::ProgressBar());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->hideshowToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->ontopToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->progressBar3 = (gcnew System::Windows::Forms::ProgressBar());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->progressBar4 = (gcnew System::Windows::Forms::ProgressBar());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->notifyIcon4 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->notifyIcon5 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			this->notifyIcon3 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			this->notifyIcon2 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			this->notifyIcon1 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip2 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip3 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip4 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->toolTip5 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip6 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->contextMenuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->SuspendLayout();
			//
			// label1
			//
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label1->Location = System::Drawing::Point(75, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 14);
			this->label1->TabIndex = 2;
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			//
			// label2
			//
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(75, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 14);
			this->label2->TabIndex = 3;
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			//
			// timer1
			//
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			//
			// progressBar1
			//
			this->progressBar1->Location = System::Drawing::Point(11, 28);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(150, 13);
			this->progressBar1->TabIndex = 7;
			//
			// progressBar2
			//
			this->progressBar2->Location = System::Drawing::Point(11, 28);
			this->progressBar2->Name = L"progressBar2";
			this->progressBar2->Size = System::Drawing::Size(150, 13);
			this->progressBar2->TabIndex = 8;
			//
			// contextMenuStrip1
			//
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->hideshowToolStripMenuItem,
					this->toolStripSeparator2, this->ontopToolStripMenuItem, this->toolStripSeparator1, this->exitToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(134, 82);
			//
			// hideshowToolStripMenuItem
			//
			this->hideshowToolStripMenuItem->Name = L"hideshowToolStripMenuItem";
			this->hideshowToolStripMenuItem->Size = System::Drawing::Size(133, 22);
			this->hideshowToolStripMenuItem->Text = L"Hide/Show";
			this->hideshowToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::hideShowToolStripMenuItem_Click);
			//
			// toolStripSeparator2
			//
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(130, 6);
			//
			// ontopToolStripMenuItem
			//
			this->ontopToolStripMenuItem->Checked = true;
			this->ontopToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Checked;
			this->ontopToolStripMenuItem->Name = L"ontopToolStripMenuItem";
			this->ontopToolStripMenuItem->Size = System::Drawing::Size(133, 22);
			this->ontopToolStripMenuItem->Text = L"On Top";
			this->ontopToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::onTopToolStripMenuItem_Click);
			//
			// toolStripSeparator1
			//
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(130, 6);
			//
			// exitToolStripMenuItem
			//
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(133, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			//
			// progressBar3
			//
			this->progressBar3->BackColor = System::Drawing::SystemColors::Control;
			this->progressBar3->Location = System::Drawing::Point(11, 28);
			this->progressBar3->Name = L"progressBar3";
			this->progressBar3->Size = System::Drawing::Size(150, 13);
			this->progressBar3->TabIndex = 11;
			//
			// label3
			//
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(75, 12);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 14);
			this->label3->TabIndex = 10;
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			//
			// progressBar4
			//
			this->progressBar4->Location = System::Drawing::Point(11, 28);
			this->progressBar4->Name = L"progressBar4";
			this->progressBar4->Size = System::Drawing::Size(150, 13);
			this->progressBar4->TabIndex = 20;
			//
			// label4
			//
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(75, 12);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 14);
			this->label4->TabIndex = 19;
			this->label4->Tag = L"";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			//
			// timer2
			//
			this->timer2->Enabled = true;
			this->timer2->Interval = 1000;
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm::timer2_Tick);
			//
			// notifyIcon4
			//
			this->notifyIcon4->ContextMenuStrip = this->contextMenuStrip1;
			this->notifyIcon4->Text = L"Nvidia GPU Load";
			this->notifyIcon4->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::notifyIcon4_MouseDoubleClick);
			//
			// checkBox4
			//
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(133, 23);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(15, 14);
			this->checkBox4->TabIndex = 26;
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox4_CheckedChanged);
			//
			// checkBox2
			//
			this->checkBox2->AutoSize = true;
			this->checkBox2->CausesValidation = false;
			this->checkBox2->Location = System::Drawing::Point(51, 23);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(15, 14);
			this->checkBox2->TabIndex = 24;
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			//
			// checkBox1
			//
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(10, 23);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(15, 14);
			this->checkBox1->TabIndex = 23;
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			//
			// checkBox3
			//
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(92, 23);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(15, 14);
			this->checkBox3->TabIndex = 25;
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox3_CheckedChanged);
			//
			// groupBox1
			//
			this->groupBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->groupBox1->Controls->Add(this->pictureBox4);
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Controls->Add(this->pictureBox3);
			this->groupBox1->Controls->Add(this->checkBox4);
			this->groupBox1->Controls->Add(this->pictureBox2);
			this->groupBox1->Controls->Add(this->checkBox2);
			this->groupBox1->Controls->Add(this->checkBox3);
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->groupBox1->Location = System::Drawing::Point(16, 244);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(172, 52);
			this->groupBox1->TabIndex = 30;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Tray";
			//
			// pictureBox4
			//
			this->pictureBox4->Location = System::Drawing::Point(148, 23);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(15, 13);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 38;
			this->pictureBox4->TabStop = false;
			//
			// pictureBox3
			//
			this->pictureBox3->Location = System::Drawing::Point(107, 23);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(15, 13);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 37;
			this->pictureBox3->TabStop = false;
			//
			// pictureBox2
			//
			this->pictureBox2->Location = System::Drawing::Point(66, 23);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(15, 13);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 36;
			this->pictureBox2->TabStop = false;
			//
			// pictureBox1
			//
			this->pictureBox1->Location = System::Drawing::Point(25, 23);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(15, 13);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 35;
			this->pictureBox1->TabStop = false;
			//
			// groupBox2
			//
			this->groupBox2->Controls->Add(this->progressBar1);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->groupBox2->Location = System::Drawing::Point(16, 16);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(172, 52);
			this->groupBox2->TabIndex = 31;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"CPU";
			//
			// groupBox3
			//
			this->groupBox3->Controls->Add(this->progressBar2);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->groupBox3->Location = System::Drawing::Point(16, 73);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(172, 52);
			this->groupBox3->TabIndex = 32;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"RAM";
			//
			// groupBox4
			//
			this->groupBox4->Controls->Add(this->progressBar3);
			this->groupBox4->Controls->Add(this->label3);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->groupBox4->Location = System::Drawing::Point(16, 130);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(172, 52);
			this->groupBox4->TabIndex = 33;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"HDD";
			//
			// groupBox5
			//
			this->groupBox5->Controls->Add(this->progressBar4);
			this->groupBox5->Controls->Add(this->label4);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->groupBox5->Location = System::Drawing::Point(16, 187);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(172, 52);
			this->groupBox5->TabIndex = 34;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"GPU";
			//
			// notifyIcon5
			//
			this->notifyIcon5->ContextMenuStrip = this->contextMenuStrip1;
			this->notifyIcon5->Text = L"PC Components Monitor";
			this->notifyIcon5->Visible = true;
			this->notifyIcon5->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::notifyIcon5_MouseDoubleClick);
			//
			// notifyIcon3
			//
			this->notifyIcon3->ContextMenuStrip = this->contextMenuStrip1;
			this->notifyIcon3->Text = L"HDD Load";
			this->notifyIcon3->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::notifyIcon3_MouseDoubleClick);
			//
			// notifyIcon2
			//
			this->notifyIcon2->ContextMenuStrip = this->contextMenuStrip1;
			this->notifyIcon2->Text = L"RAM Load";
			this->notifyIcon2->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::notifyIcon2_MouseDoubleClick);
			//
			// notifyIcon1
			//
			this->notifyIcon1->ContextMenuStrip = this->contextMenuStrip1;
			this->notifyIcon1->Text = L"CPU Load";
			this->notifyIcon1->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::notifyIcon1_MouseDoubleClick);
			//
			// timer3
			//
			this->timer3->Enabled = true;
			this->timer3->Tick += gcnew System::EventHandler(this, &MyForm::timer3_Tick);
			//
			// toolTip1
			//
			this->toolTip1->AutoPopDelay = 5000;
			this->toolTip1->InitialDelay = 750;
			this->toolTip1->ReshowDelay = 100;
			this->toolTip1->Tag = L"";
			//
			// toolTip2
			//
			this->toolTip2->AutoPopDelay = 5000;
			this->toolTip2->InitialDelay = 750;
			this->toolTip2->ReshowDelay = 100;
			this->toolTip2->Tag = L"";
			//
			// toolTip3
			//
			this->toolTip3->AutoPopDelay = 5000;
			this->toolTip3->InitialDelay = 750;
			this->toolTip3->ReshowDelay = 100;
			this->toolTip3->Tag = L"";
			//
			// toolTip4
			//
			this->toolTip4->AutoPopDelay = 5000;
			this->toolTip4->InitialDelay = 750;
			this->toolTip4->ReshowDelay = 100;
			this->toolTip4->Tag = L"";
			//
			// button1
			//
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button1->Location = System::Drawing::Point(193, 0);
			this->button1->Name = L"button1";
			this->button1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button1->Size = System::Drawing::Size(13, 13);
			this->button1->TabIndex = 1;
			this->button1->Text = L"x";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			//
			// button2
			//
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button2->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button2->Font = (gcnew System::Drawing::Font(L"Calibri", 8.25F));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button2->Location = System::Drawing::Point(193, 303);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(13, 13);
			this->button2->TabIndex = 36;
			this->button2->Text = L"-";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			//
			// toolTip5
			//
			this->toolTip5->AutoPopDelay = 5000;
			this->toolTip5->InitialDelay = 499;
			this->toolTip5->ReshowDelay = 100;
			//
			// toolTip6
			//
			this->toolTip6->AutoPopDelay = 5000;
			this->toolTip6->InitialDelay = 499;
			this->toolTip6->ReshowDelay = 100;
			//
			// MyForm
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(206, 316);
			this->ControlBox = false;
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->Text = L"PC Components Monitor";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->contextMenuStrip1->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->ResumeLayout(false);
		}
#pragma endregion
		Thread^ thisThread;
	private: void DoWork(int hres) {
		progressBar1->Value = Convert::ToInt32(hres);
		label1->Text = System::Convert::ToString(hres) + "%";
		notifyIcon1->Text = "CPU Load: " + System::Convert::ToString(hres) + "%";
		if (hres <= 1) {
			notifyIcon1->Icon = gcnew System::Drawing::Icon(L"icon/cpu0.icon");
			pictureBox1->Image = Image::FromFile(L"icon/cpu0.icon");
		}
		else if (hres <= 10) {
			notifyIcon1->Icon = gcnew System::Drawing::Icon(L"icon/cpu10.icon");
			pictureBox1->Image = Image::FromFile(L"icon/cpu10.icon");
		}
		else if (hres <= 20) {
			notifyIcon1->Icon = gcnew System::Drawing::Icon(L"icon/cpu20.icon");
			pictureBox1->Image = Image::FromFile(L"icon/cpu20.icon");
		}
		else if (hres <= 30) {
			notifyIcon1->Icon = gcnew System::Drawing::Icon(L"icon/cpu30.icon");
			pictureBox1->Image = Image::FromFile(L"icon/cpu30.icon");
		}
		else if (hres <= 40) {
			notifyIcon1->Icon = gcnew System::Drawing::Icon(L"icon/cpu40.icon");
			pictureBox1->Image = Image::FromFile(L"icon/cpu40.icon");
		}
		else if (hres <= 50) {
			notifyIcon1->Icon = gcnew System::Drawing::Icon(L"icon/cpu50.icon");
			pictureBox1->Image = Image::FromFile(L"icon/cpu50.icon");
		}
		else if (hres <= 60) {
			notifyIcon1->Icon = gcnew System::Drawing::Icon(L"icon/cpu60.icon");
			pictureBox1->Image = Image::FromFile(L"icon/cpu60.icon");
		}
		else if (hres <= 70) {
			notifyIcon1->Icon = gcnew System::Drawing::Icon(L"icon/cpu70.icon");
			pictureBox1->Image = Image::FromFile(L"icon/cpu70.icon");
		}
		else if (hres <= 80) {
			notifyIcon1->Icon = gcnew System::Drawing::Icon(L"icon/cpu80.icon");
			pictureBox1->Image = Image::FromFile(L"icon/cpu80.icon");
		}
		else if (hres <= 90) {
			notifyIcon1->Icon = gcnew System::Drawing::Icon(L"icon/cpu90.icon");
			pictureBox1->Image = Image::FromFile(L"icon/cpu90.icon");
		}
		else if (hres <= 100) {
			notifyIcon1->Icon = gcnew System::Drawing::Icon(L"icon/cpu100.icon");
			pictureBox1->Image = Image::FromFile(L"icon/cpu100.icon");
		}
	}
	private: System::Void Thread_Start() {
		for (int i = 1; i >= 1; i++)
		{
			Thread::Sleep(1000);
			int main(int argc, char **argv); {
				HRESULT hres;
				hres = CoInitializeEx(0, COINIT_MULTITHREADED);
				hres = CoInitializeSecurity(
					NULL,
					-1,                          // COM authentication
					NULL,                        // Authentication services
					NULL,                        // Reserved
					RPC_C_AUTHN_LEVEL_DEFAULT,   // Default authentication
					RPC_C_IMP_LEVEL_IMPERSONATE, // Default Impersonation  
					NULL,                        // Authentication info
					EOAC_NONE,                   // Additional capabilities
					NULL                         // Reserved
				);
				IWbemLocator *pLoc = NULL;
				hres = CoCreateInstance(
					CLSID_WbemLocator,
					0,
					CLSCTX_INPROC_SERVER,
					IID_IWbemLocator, (LPVOID *)&pLoc);
				IWbemServices *pSvc = NULL;
				hres = pLoc->ConnectServer(
					_bstr_t(L"ROOT\\CIMV2"), // Object path of WMI namespace
					NULL,                    // User name. NULL = current user
					NULL,                    // User password. NULL = current
					0,                       // Locale. NULL indicates current
					NULL,                    // Security flags.
					0,                       // Authority (for example, Kerberos)
					0,                       // Context object
					&pSvc                    // pointer to IWbemServices proxy
				);
				IEnumWbemClassObject* pEnumerator = NULL;
				hres = pSvc->ExecQuery(
					bstr_t("WQL"),
					bstr_t("SELECT * FROM Win32_Processor"),
					WBEM_FLAG_FORWARD_ONLY | WBEM_FLAG_RETURN_IMMEDIATELY,
					NULL,
					&pEnumerator);
				IWbemClassObject *pclsObj;
				ULONG uReturn = 0;
				while (pEnumerator)
				{
					HRESULT hr = pEnumerator->Next(WBEM_INFINITE, 1,
						&pclsObj, &uReturn);
					if (0 == uReturn)
					{
						break;
					}
					VARIANT vtProp;
					// Get the value of the LoadPercentage property
					hres = pclsObj->Get(L"LoadPercentage", 0, &vtProp, 0, 0);
					Invoke(gcnew Action<int>(this, &MyForm::DoWork), vtProp.intVal);
					VariantClear(&vtProp);
					pclsObj->Release();
				}
				pSvc->Release();
				pLoc->Release();
				pEnumerator->Release();
				CoUninitialize();
			}
		}
	}
			 Thread^ thisThread1;
	private: void DoWork1(int hres1) {
		progressBar3->Value = Convert::ToInt32(hres1);
		label3->Text = System::Convert::ToString(hres1) + "%";
		notifyIcon3->Text = "HDD Load: " + System::Convert::ToString(hres1) + "%";
		if (hres1 <= 1) {
			notifyIcon3->Icon = gcnew System::Drawing::Icon(L"icon/hdd0.icon");
			pictureBox3->Image = Image::FromFile(L"icon/hdd0.icon");
		}
		else if (hres1 <= 10) {
			notifyIcon3->Icon = gcnew System::Drawing::Icon(L"icon/hdd10.icon");
			pictureBox3->Image = Image::FromFile(L"icon/hdd10.icon");
		}
		else if (hres1 <= 20) {
			notifyIcon3->Icon = gcnew System::Drawing::Icon(L"icon/hdd20.icon");
			pictureBox3->Image = Image::FromFile(L"icon/hdd20.icon");
		}
		else if (hres1 <= 30) {
			notifyIcon3->Icon = gcnew System::Drawing::Icon(L"icon/hdd30.icon");
			pictureBox3->Image = Image::FromFile(L"icon/hdd30.icon");
		}
		else if (hres1 <= 40) {
			notifyIcon3->Icon = gcnew System::Drawing::Icon(L"icon/hdd40.icon");
			pictureBox3->Image = Image::FromFile(L"icon/hdd40.icon");
		}
		else if (hres1 <= 50) {
			notifyIcon3->Icon = gcnew System::Drawing::Icon(L"icon/hdd50.icon");
			pictureBox3->Image = Image::FromFile(L"icon/hdd50.icon");
		}
		else if (hres1 <= 60) {
			notifyIcon3->Icon = gcnew System::Drawing::Icon(L"icon/hdd60.icon");
			pictureBox3->Image = Image::FromFile(L"icon/hdd60.icon");
		}
		else if (hres1 <= 70) {
			notifyIcon3->Icon = gcnew System::Drawing::Icon(L"icon/hdd70.icon");
			pictureBox3->Image = Image::FromFile(L"icon/hdd70.icon");
		}
		else if (hres1 <= 80) {
			notifyIcon3->Icon = gcnew System::Drawing::Icon(L"icon/hdd80.icon");
			pictureBox3->Image = Image::FromFile(L"icon/hdd80.icon");
		}
		else if (hres1 <= 90) {
			notifyIcon3->Icon = gcnew System::Drawing::Icon(L"icon/hdd90.icon");
			pictureBox3->Image = Image::FromFile(L"icon/hdd90.icon");
		}
		else if (hres1 <= 100) {
			notifyIcon3->Icon = gcnew System::Drawing::Icon(L"icon/hdd100.icon");
			pictureBox3->Image = Image::FromFile(L"icon/hdd100.icon");
		}
	}
	private: System::Void Thread_Start1() {
		for (int i = 1; i >= 1; i++)
		{
			int main(int argc, char **argv); {
				HRESULT hres1;
				hres1 = CoInitializeEx(0, COINIT_MULTITHREADED);
				hres1 = CoInitializeSecurity(
					NULL,
					-1,                          // COM authentication
					NULL,                        // Authentication services
					NULL,                        // Reserved
					RPC_C_AUTHN_LEVEL_DEFAULT,   // Default authentication
					RPC_C_IMP_LEVEL_IMPERSONATE, // Default Impersonation  
					NULL,                        // Authentication info
					EOAC_NONE,                   // Additional capabilities
					NULL                         // Reserved
				);
				IWbemLocator *pLoc = NULL;
				hres1 = CoCreateInstance(
					CLSID_WbemLocator,
					0,
					CLSCTX_INPROC_SERVER,
					IID_IWbemLocator, (LPVOID *)&pLoc);
				IWbemServices *pSvc = NULL;
				hres1 = pLoc->ConnectServer(
					_bstr_t(L"ROOT\\CIMV2"), // Object path of WMI namespace
					NULL,                    // User name. NULL = current user
					NULL,                    // User password. NULL = current
					0,                       // Locale. NULL indicates current
					NULL,                    // Security flags.
					0,                       // Authority (for example, Kerberos)
					0,                       // Context object
					&pSvc                    // pointer to IWbemServices proxy
				);
				IEnumWbemClassObject* pEnumerator = NULL;
				hres1 = pSvc->ExecQuery(
					bstr_t("WQL"),
					bstr_t("SELECT * FROM Win32_PerfFormattedData_PerfDisk_LogicalDisk"),
					WBEM_FLAG_FORWARD_ONLY | WBEM_FLAG_RETURN_IMMEDIATELY,
					NULL,
					&pEnumerator);
				IWbemClassObject *pclsObj;
				ULONG uReturn = 0;
				while (pEnumerator)
				{
					HRESULT hr = pEnumerator->Next(WBEM_INFINITE, 1,
						&pclsObj, &uReturn);
					if (0 == uReturn)
					{
						break;
					}
					// Get the value of the PercentFreeSpace property
					VARIANT vtProp;
					hres1 = pclsObj->Get(L"PercentFreeSpace", 0, &vtProp, 0, 0);
					Invoke(gcnew Action<int>(this, &MyForm::DoWork1), 100 - vtProp.intVal);
					VariantClear(&vtProp);
					pclsObj->Release();
				}
				pSvc->Release();
				pLoc->Release();
				pEnumerator->Release();
				CoUninitialize();
			}
			Thread::Sleep(10000);
		}
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		toolTip1->SetToolTip(this->checkBox1, "CPU to Tray");
		toolTip2->SetToolTip(this->checkBox2, "RAM to Tray");
		toolTip3->SetToolTip(this->checkBox3, "HDD to Tray");
		toolTip4->SetToolTip(this->checkBox4, "GPU to Tray");
		toolTip5->SetToolTip(this->button1, "Exit");
		toolTip6->SetToolTip(this->button2, "Minimize to Tray");
		thisThread = gcnew Thread(gcnew ThreadStart(this, &MyForm::Thread_Start));
		thisThread->Start();
		thisThread1 = gcnew Thread(gcnew ThreadStart(this, &MyForm::Thread_Start1));
		thisThread1->Start();
		thisThread2 = gcnew Thread(gcnew ThreadStart(this, &MyForm::Thread_Start2));
		thisThread2->Start();
	}
	private: Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		MEMORYSTATUSEX statex;
		statex.dwLength = sizeof(statex);
		GlobalMemoryStatusEx(&statex);
		int a = (int)statex.dwMemoryLoad;
		label2->Text = System::Convert::ToString(a) + "%";
		progressBar2->Value = a;
		notifyIcon2->Text = "RAM Load: " + System::Convert::ToString(a) + "%";
		if (a <= 1) {
			notifyIcon2->Icon = gcnew System::Drawing::Icon(L"icon/ram0.icon");
			pictureBox2->Image = Image::FromFile(L"icon/ram0.icon");
		}
		else if (a <= 10) {
			notifyIcon2->Icon = gcnew System::Drawing::Icon(L"icon/ram10.icon");
			pictureBox2->Image = Image::FromFile(L"icon/ram10.icon");
		}
		else if (a <= 20) {
			notifyIcon2->Icon = gcnew System::Drawing::Icon(L"icon/ram20.icon");
			pictureBox2->Image = Image::FromFile(L"icon/ram20.icon");
		}
		else if (a <= 30) {
			notifyIcon2->Icon = gcnew System::Drawing::Icon(L"icon/ram30.icon");
			pictureBox2->Image = Image::FromFile(L"icon/ram30.icon");
		}
		else if (a <= 40) {
			notifyIcon2->Icon = gcnew System::Drawing::Icon(L"icon/ram40.icon");
			pictureBox2->Image = Image::FromFile(L"icon/ram40.icon");
		}
		else if (a <= 50) {
			notifyIcon2->Icon = gcnew System::Drawing::Icon(L"icon/ram50.icon");
			pictureBox2->Image = Image::FromFile(L"icon/ram50.icon");
		}
		else if (a <= 60) {
			notifyIcon2->Icon = gcnew System::Drawing::Icon(L"icon/ram60.icon");
			pictureBox2->Image = Image::FromFile(L"icon/ram60.icon");
		}
		else if (a <= 70) {
			notifyIcon2->Icon = gcnew System::Drawing::Icon(L"icon/ram70.icon");
			pictureBox2->Image = Image::FromFile(L"icon/ram70.icon");
		}
		else if (a <= 80) {
			notifyIcon2->Icon = gcnew System::Drawing::Icon(L"icon/ram80.icon");
			pictureBox2->Image = Image::FromFile(L"icon/ram80.icon");
		}
		else if (a <= 90) {
			notifyIcon2->Icon = gcnew System::Drawing::Icon(L"icon/ram90.icon");
			pictureBox2->Image = Image::FromFile(L"icon/ram90.icon");
		}
		else if (a <= 100) {
			notifyIcon2->Icon = gcnew System::Drawing::Icon(L"icon/ram100.icon");
			pictureBox2->Image = Image::FromFile(L"icon/ram100.icon");
		}
	}
	private: System::Void notifyIcon1_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (this->Visible == true)
		{
			this->Visible = false;
		}
		else if (this->Visible == false) { this->Visible = true; }
		if (this->TopMost == true)
		{
			this->TopMost = true;
		}
		else if (this->TopMost == false) { this->TopMost = true; this->TopMost = false; }
	}
	private: System::Void notifyIcon2_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (this->Visible == true)
		{
			this->Visible = false;
		}
		else if (this->Visible == false) { this->Visible = true; }
		if (this->TopMost == true)
		{
			this->TopMost = true;
		}
		else if (this->TopMost == false) { this->TopMost = true; this->TopMost = false; }
	}
	private: System::Void notifyIcon3_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (this->Visible == true)
		{
			this->Visible = false;
		}
		else if (this->Visible == false) { this->Visible = true; }
		if (this->TopMost == true)
		{
			this->TopMost = true;
		}
		else if (this->TopMost == false) { this->TopMost = true; this->TopMost = false; }
	}
	private: System::Void notifyIcon4_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (this->Visible == true)
		{
			this->Visible = false;
		}
		else if (this->Visible == false) { this->Visible = true; }
		if (this->TopMost == true)
		{
			this->TopMost = true;
		}
		else if (this->TopMost == false) { this->TopMost = true; this->TopMost = false; }
	}
	private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		thisThread->Abort();
		thisThread1->Abort();
		thisThread2->Abort();
		Application::Exit();
	}
	private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
		typedef int(*NvAPI_QueryInterface_t)(unsigned int offset);
		typedef int(*NvAPI_Initialize_t)();
		typedef int(*NvAPI_EnumPhysicalGPUs_t)(int **handles, int *count);
		typedef int(*NvAPI_GPU_GetUsages_t)(int *handle, unsigned int *usages);
		HMODULE hmod = LoadLibraryA("nvapi.dll");
		//Couldn't find nvapi.dll
		if (hmod == NULL)
		{
			progressBar4->Value = 0;
			label4->Text = "     Not Supported";
			notifyIcon4->Text = "Not Supported";
			notifyIcon4->Icon = gcnew System::Drawing::Icon(L"icon/gpu0.icon");
			pictureBox4->Image = Image::FromFile(L"icon/gpu0.icon");
		}
		// nvapi.dll internal function pointers
		NvAPI_QueryInterface_t      NvAPI_QueryInterface = NULL;
		NvAPI_Initialize_t          NvAPI_Initialize = NULL;
		NvAPI_EnumPhysicalGPUs_t    NvAPI_EnumPhysicalGPUs = NULL;
		NvAPI_GPU_GetUsages_t       NvAPI_GPU_GetUsages = NULL;
		// nvapi_QueryInterface is a function used to retrieve other internal functions in nvapi.dll
		NvAPI_QueryInterface = (NvAPI_QueryInterface_t)GetProcAddress(hmod, "nvapi_QueryInterface");
		// some useful internal functions that aren't exported by nvapi.dll
		NvAPI_Initialize = (NvAPI_Initialize_t)(*NvAPI_QueryInterface)(0x0150E828);
		NvAPI_EnumPhysicalGPUs = (NvAPI_EnumPhysicalGPUs_t)(*NvAPI_QueryInterface)(0xE5AC921F);
		NvAPI_GPU_GetUsages = (NvAPI_GPU_GetUsages_t)(*NvAPI_QueryInterface)(0x189A1FDF);
		//Couldn't get functions in nvapi.dll
		if (NvAPI_Initialize == NULL || NvAPI_EnumPhysicalGPUs == NULL ||
			NvAPI_EnumPhysicalGPUs == NULL || NvAPI_GPU_GetUsages == NULL)
		{
			progressBar4->Value = 0;
			label4->Text = "     Not Supported";
			notifyIcon4->Text = "Not Supported";
			notifyIcon4->Icon = gcnew System::Drawing::Icon(L"icon/gpu0.icon");
			pictureBox4->Image = Image::FromFile(L"icon/gpu0.icon");
		}
		// initialize NvAPI library, call it once before calling any other NvAPI functions
		(*NvAPI_Initialize)();
		int          gpuCount = 0;
		int         *gpuHandles[NVAPI_MAX_PHYSICAL_GPUS] = { NULL };
		unsigned int gpuUsages[NVAPI_MAX_USAGES_PER_GPU] = { 0 };
		// gpuUsages[0] must be this value, otherwise NvAPI_GPU_GetUsages won't work
		gpuUsages[0] = (NVAPI_MAX_USAGES_PER_GPU * 4) | 0x10000;
		(*NvAPI_EnumPhysicalGPUs)(gpuHandles, &gpuCount);
		// print GPU usage every second
		(*NvAPI_GPU_GetUsages)(gpuHandles[0], gpuUsages);
		int usage = gpuUsages[3];
		progressBar4->Value = Convert::ToInt32(usage);
		label4->Text = System::Convert::ToString(usage) + "%";
		notifyIcon4->Text = "NVIDIA GPU Load: " + System::Convert::ToString(usage) + "%";
		if (usage <= 1) {
			notifyIcon4->Icon = gcnew System::Drawing::Icon(L"icon/gpu0.icon");
			pictureBox4->Image = Image::FromFile(L"icon/gpu0.icon");
		}
		else if (usage <= 10) {
			notifyIcon4->Icon = gcnew System::Drawing::Icon(L"icon/gpu10.icon");
			pictureBox4->Image = Image::FromFile(L"icon/gpu10.icon");
		}
		else if (usage <= 20) {
			notifyIcon4->Icon = gcnew System::Drawing::Icon(L"icon/gpu20.icon");
			pictureBox4->Image = Image::FromFile(L"icon/gpu20.icon");
		}
		else if (usage <= 30) {
			notifyIcon4->Icon = gcnew System::Drawing::Icon(L"icon/gpu30.icon");
			pictureBox4->Image = Image::FromFile(L"icon/gpu30.icon");
		}
		else if (usage <= 40) {
			notifyIcon4->Icon = gcnew System::Drawing::Icon(L"icon/gpu40.icon");
			pictureBox4->Image = Image::FromFile(L"icon/gpu40.icon");
		}
		else if (usage <= 50) {
			notifyIcon4->Icon = gcnew System::Drawing::Icon(L"icon/gpu50.icon");
			pictureBox4->Image = Image::FromFile(L"icon/gpu50.icon");
		}
		else if (usage <= 60) {
			notifyIcon4->Icon = gcnew System::Drawing::Icon(L"icon/gpu60.icon");
			pictureBox4->Image = Image::FromFile(L"icon/gpu60.icon");
		}
		else if (usage <= 70) {
			notifyIcon4->Icon = gcnew System::Drawing::Icon(L"icon/gpu70.icon");
			pictureBox4->Image = Image::FromFile(L"icon/gpu70.icon");
		}
		else if (usage <= 80) {
			notifyIcon4->Icon = gcnew System::Drawing::Icon(L"icon/gpu80.icon");
			pictureBox4->Image = Image::FromFile(L"icon/gpu80.icon");
		}
		else if (usage <= 90) {
			notifyIcon4->Icon = gcnew System::Drawing::Icon(L"icon/gpu90.icon");
			pictureBox4->Image = Image::FromFile(L"icon/gpu90.icon");
		}
		else if (usage <= 100) {
			notifyIcon4->Icon = gcnew System::Drawing::Icon(L"icon/gpu100.icon");
			pictureBox4->Image = Image::FromFile(L"icon/gpu100.icon");
		}
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (notifyIcon1->Visible == false)
		{
			notifyIcon1->Visible = true;
			notifyIcon5->Visible = false;
		}
		else if (notifyIcon1->Visible == true) { notifyIcon1->Visible = false; }
	}
	private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (notifyIcon2->Visible == false)
		{
			notifyIcon2->Visible = true;
			notifyIcon5->Visible = false;
		}
		else if (notifyIcon2->Visible == true) { notifyIcon2->Visible = false; }
	}
	private: System::Void checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (notifyIcon3->Visible == false)
		{
			notifyIcon3->Visible = true;
			notifyIcon5->Visible = false;
		}
		else if (notifyIcon3->Visible == true) { notifyIcon3->Visible = false; }
	}
	private: System::Void checkBox4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (notifyIcon4->Visible == false)
		{
			notifyIcon4->Visible = true;
			notifyIcon5->Visible = false;
		}
		else if (notifyIcon4->Visible == true) { notifyIcon4->Visible = false; }
	}
	private: System::Void notifyIcon5_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (this->Visible == true)
		{
			this->Visible = false;
		}
		else if (this->Visible == false) { this->Visible = true; }
		if (this->TopMost == true)
		{
			this->TopMost = true;
		}
		else if (this->TopMost == false) { this->TopMost = true; this->TopMost = false; }
	}
			 Thread^ thisThread2;
	private: System::Void Thread_Start2() {
		for (int i = 1; i >= 1; i++)
		{
			notifyIcon5->Icon = gcnew System::Drawing::Icon(L"icon/1.icon");
			Thread::Sleep(250);
			notifyIcon5->Icon = gcnew System::Drawing::Icon(L"icon/2.icon");
			Thread::Sleep(250);
			notifyIcon5->Icon = gcnew System::Drawing::Icon(L"icon/3.icon");
			Thread::Sleep(250);
			notifyIcon5->Icon = gcnew System::Drawing::Icon(L"icon/4.icon");
			Thread::Sleep(250);
		}
	}
	private: System::Void timer3_Tick(System::Object^  sender, System::EventArgs^  e) {
		if (notifyIcon1->Visible == false) {
			if (notifyIcon2->Visible == false) {
				if (notifyIcon3->Visible == false) {
					if (notifyIcon4->Visible == false) {
						notifyIcon5->Visible = true;
					}
				}
			}
		}
	}
	private: System::Void hideShowToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		if (this->Visible == true)
		{
			this->Visible = false;
		}
		else if (this->Visible == false) { this->Visible = true; }
		if (this->TopMost == true)
		{
			this->TopMost = true;
		}
		else if (this->TopMost == false) { this->TopMost = true; this->TopMost = false; }
	}
	private: System::Void onTopToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		if (this->ontopToolStripMenuItem->Checked == true) {
			this->TopMost = false;
			this->ontopToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Unchecked;
		}
		else if (this->ontopToolStripMenuItem->Checked == false) {
			this->TopMost = true;
			this->ontopToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Checked;
		}
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		thisThread->Abort();
		thisThread1->Abort();
		thisThread2->Abort();
		Application::Exit();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		System::Windows::Forms::Control::Visible = false;
	}
	};
}