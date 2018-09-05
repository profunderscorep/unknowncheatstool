#include "includes.h"
#include "Code.h"
#pragma once

#define MAXIMUM_REP 2147483647
#define MINIMUM_REP -2147483648

namespace unknowncheatsrepgenerator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for gaygui
	/// </summary>
	public ref class gaygui : public System::Windows::Forms::Form
	{
	public:
		gaygui(void)
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
		~gaygui()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::MonthCalendar^  monthCalendar1;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::Label^  label5;


	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::ComboBox^  comboBox3;

	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::ComboBox^  comboBox5;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label10;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(gaygui::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(15, 474);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(319, 43);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Generate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &gaygui::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox5);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->comboBox4);
			this->groupBox1->Controls->Add(this->comboBox3);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->monthCalendar1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(15, 38);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(319, 430);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Settings";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &gaygui::groupBox1_Enter);
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Neutral", L"Down", L"Up", L"Disabled" });
			this->comboBox5->Location = System::Drawing::Point(142, 397);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(171, 21);
			this->comboBox5->TabIndex = 17;
			this->comboBox5->Text = L"Rep color";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 328);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(51, 13);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Comment";
			this->label8->Click += gcnew System::EventHandler(this, &gaygui::label8_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point(9, 399);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(78, 17);
			this->checkBox1->TabIndex = 15;
			this->checkBox1->Text = L"Reportable";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(142, 325);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(171, 66);
			this->textBox4->TabIndex = 14;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 302);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(41, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Thread";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(142, 299);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(171, 20);
			this->textBox3->TabIndex = 12;
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"AM", L"PM" });
			this->comboBox4->Location = System::Drawing::Point(268, 272);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(45, 21);
			this->comboBox4->TabIndex = 11;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(61) {
				L"00", L"01", L"02", L"03", L"04", L"05", L"06",
					L"07", L"08", L"09", L"10", L"11 ", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24",
					L"25", L"26", L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42",
					L"43", L"44", L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59", L"60"
			});
			this->comboBox3->Location = System::Drawing::Point(205, 272);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(57, 21);
			this->comboBox3->TabIndex = 10;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"01", L"02", L"03", L"04", L"05", L"06", L"07",
					L"08", L"09", L"10", L"11", L"12"
			});
			this->comboBox2->Location = System::Drawing::Point(142, 272);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(57, 21);
			this->comboBox2->TabIndex = 9;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &gaygui::comboBox2_SelectedIndexChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 275);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(30, 13);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Time";
			this->label6->Click += gcnew System::EventHandler(this, &gaygui::label6_Click);
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(142, 98);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 7;
			this->monthCalendar1->DateChanged += gcnew System::Windows::Forms::DateRangeEventHandler(this, &gaygui::monthCalendar1_DateChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 95);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(30, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Date";
			this->label4->Click += gcnew System::EventHandler(this, &gaygui::label4_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(13) {
				L"Registered lvl 1", L"Registered lvl 2", L"Registered lvl 3",
					L"Donator", L"UC MOTM", L"Wiki Mod", L"Download Mod", L"Moderator", L"Lead Mod", L"Super Mod", L"Retired Admin", L"Forum Admin",
					L"Site Admin"
			});
			this->comboBox1->Location = System::Drawing::Point(142, 65);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(171, 21);
			this->comboBox1->TabIndex = 5;
			this->comboBox1->TabStop = false;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &gaygui::comboBox1_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 68);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Privilege";
			this->label3->Click += gcnew System::EventHandler(this, &gaygui::label3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(142, 39);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(171, 20);
			this->textBox2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->label2->Location = System::Drawing::Point(6, 42);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"From user";
			this->label2->Click += gcnew System::EventHandler(this, &gaygui::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(129, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Rep Ammount (max 2^31)";
			this->label1->Click += gcnew System::EventHandler(this, &gaygui::label1_Click_1);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(142, 13);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(171, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &gaygui::textBox1_TextChanged);
			// 
			// progressBar1
			// 
			this->progressBar1->Cursor = System::Windows::Forms::Cursors::Default;
			this->progressBar1->ForeColor = System::Drawing::Color::Orange;
			this->progressBar1->Location = System::Drawing::Point(15, 523);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(319, 23);
			this->progressBar1->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 549);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(51, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Progress: Ready";
			this->label5->Click += gcnew System::EventHandler(this, &gaygui::label5_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &gaygui::timer1_Tick);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(157, 12);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(171, 20);
			this->textBox5->TabIndex = 11;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(21, 15);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(55, 13);
			this->label10->TabIndex = 12;
			this->label10->Text = L"Username";
			this->label10->Click += gcnew System::EventHandler(this, &gaygui::label10_Click);
			// 
			// gaygui
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(350, 574);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"gaygui";
			this->Text = L"UnknownCheats rep generator";
			this->Load += gcnew System::EventHandler(this, &gaygui::gaygui_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

	msclr::interop::marshal_context context;

	String ^ rep_ammount = textBox1->Text;
	std::string rep_ammount_str = context.marshal_as<std::string>(rep_ammount);
	int i_rep = atoi(rep_ammount_str.c_str());
	String ^ username = textBox2->Text;
	std::string username_str = context.marshal_as<std::string>(username);
	String ^ threadname = textBox3->Text;
	std::string threadname_str = context.marshal_as<std::string>(threadname);
	String ^ targetname = textBox5->Text;
	std::string targetname_str = context.marshal_as<std::string>(targetname);

	bool valid = true;
	if (rep_ammount_str.length() != 0)
	{
		for (unsigned int i = 0; i < rep_ammount_str.length(); i++)
		{
			is_char_valid(valid_chars, rep_ammount_str.at(i)) ? valid : valid = false;
		}

		if ((long int)i_rep > MAXIMUM_REP /*|| (long int)i_rep < MINIMUM_REP*/)
		{
			valid = false;
		}
	}

	if (!valid)
		MessageBox::Show("Please enter a valid number", "Invalid input", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	else if (username_str.length() < 3 || username_str.length() > 16)
		MessageBox::Show("A username can't have that ammount of characters", "Invalid input", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);	
	else if (comboBox1->SelectedItem == 0)
		MessageBox::Show("Please choose a privilege", "Invalid input", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	else if (comboBox2->SelectedItem == 0 || comboBox3->SelectedItem == 0 || comboBox4->SelectedItem == 0)
		MessageBox::Show("Time has not been completely defined", "Invalid input", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	else if (threadname_str.length() == 0)
		MessageBox::Show("Please specify a thread name", "Invalid input", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	else if (targetname_str.length() < 3 || targetname_str.length() > 16)
		MessageBox::Show("Please enter a username", "Invalid input", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	else
	{
		// all inputs are valid, let's start the 1337 hax012 procedure
		if (!timer1->Enabled)
		{
			timer1->Enabled = true;
		}
	}
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label1_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void monthCalendar1_DateChanged(System::Object^  sender, System::Windows::Forms::DateRangeEventArgs^  e) {
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void gaygui_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	progressBar1->Value = 0;
	int i = 0;
	AllocConsole();
	SetConsoleTitle(L"Hacking Console");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xA);
	label5->Text = "Progress: Connecting to unknowncheats.me database";
	while (progressBar1->Value < 26)
	{
		Sleep(100);
		i++;
		progressBar1->Value += 1;
		String^ MyString = gcnew String(randomasmcode[i].c_str());
		Console::WriteLine(MyString);
	}
	label5->Text = "Progress: Bypassing UC anti hacking system";
	while (progressBar1->Value < 34)
	{
		Sleep(100);
		i++;
		progressBar1->Value += 1;
		String^ MyString = gcnew String(randomasmcode[i].c_str());
		Console::WriteLine(MyString);
	}
	label5->Text = "Progress: Writing on UC database";
	while (progressBar1->Value < 61)
	{
		Sleep(100);
		i++;
		progressBar1->Value += 1;
		String^ MyString = gcnew String(randomasmcode[i].c_str());
		Console::WriteLine(MyString);
	}
	label5->Text = "Progress: Bypassing UC anti rep abuse system";
	while (progressBar1->Value < 85)
	{
		Sleep(100);
		i++;
		progressBar1->Value += 1;
		String^ MyString = gcnew String(randomasmcode[i].c_str());
		Console::WriteLine(MyString);
	}
	label5->Text = "Progress: Deleting traces";
	while (progressBar1->Value < 99)
	{
		Sleep(100);
		i++;
		progressBar1->Value += 1;
		String^ MyString = gcnew String(randomasmcode[i].c_str());
		Console::WriteLine(MyString);
	}
	progressBar1->Value = 100;
	label5->Text = "Progress: Success";
	timer1->Enabled = false;
	MessageBox::Show("Rep has been added to your account", "Success", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
}

private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
