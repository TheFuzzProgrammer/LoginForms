#pragma once
#include  <iostream>

namespace SpaceLogin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
		{
			InitializeComponent();
			cursorPosition = false;
			CX = 0, CY = 0;
			pointer = Point();
			WindowState = FormWindowState::Minimized;
			_sleep(1000);
			this->WakeUp();
		}

	protected:

		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ CloseLabel;
	private: System::Windows::Forms::Label^ MinimizeLabel;
	private: bool cursorPosition;
	private: System::Drawing::Point pointer;
	private: int CX, CY;
	private: System::Windows::Forms::Button^ OkButton;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Panel^ panel8;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->OkButton = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->MinimizeLabel = (gcnew System::Windows::Forms::Label());
			this->CloseLabel = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel7->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(640, 480);
			this->panel1->TabIndex = 0;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Transparent;
			this->panel6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel6.BackgroundImage")));
			this->panel6->Controls->Add(this->panel10);
			this->panel6->Controls->Add(this->panel8);
			this->panel6->Controls->Add(this->OkButton);
			this->panel6->Controls->Add(this->label2);
			this->panel6->Controls->Add(this->label1);
			this->panel6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel6->Location = System::Drawing::Point(166, 52);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(308, 376);
			this->panel6->TabIndex = 6;
			this->panel6->Visible = false;
			// 
			// panel10
			// 
			this->panel10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel10.BackgroundImage")));
			this->panel10->Controls->Add(this->textBox2);
			this->panel10->Location = System::Drawing::Point(60, 221);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(191, 26);
			this->panel10->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::HighlightText;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox2->Location = System::Drawing::Point(15, 3);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(159, 23);
			this->textBox2->TabIndex = 1;
			this->textBox2->UseSystemPasswordChar = true;
			// 
			// panel8
			// 
			this->panel8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel8.BackgroundImage")));
			this->panel8->Controls->Add(this->textBox1);
			this->panel8->Location = System::Drawing::Point(60, 156);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(191, 26);
			this->panel8->TabIndex = 4;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::HighlightText;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox1->Location = System::Drawing::Point(16, 3);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(159, 23);
			this->textBox1->TabIndex = 0;
			// 
			// OkButton
			// 
			this->OkButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->OkButton->FlatAppearance->BorderSize = 0;
			this->OkButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->OkButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->OkButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->OkButton->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OkButton->ForeColor = System::Drawing::Color::Purple;
			this->OkButton->Location = System::Drawing::Point(100, 285);
			this->OkButton->Name = L"OkButton";
			this->OkButton->Size = System::Drawing::Size(118, 36);
			this->OkButton->TabIndex = 3;
			this->OkButton->Text = L"Let me in";
			this->OkButton->UseVisualStyleBackColor = true;
			this->OkButton->Click += gcnew System::EventHandler(this, &Login::OkButton_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Purple;
			this->label2->Location = System::Drawing::Point(63, 190);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 23);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Password";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Purple;
			this->label1->Location = System::Drawing::Point(66, 127);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 23);
			this->label1->TabIndex = 1;
			this->label1->Text = L"User";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Transparent;
			this->panel5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel5->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel5->Location = System::Drawing::Point(474, 52);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(166, 376);
			this->panel5->TabIndex = 5;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Transparent;
			this->panel4->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel4->Location = System::Drawing::Point(0, 52);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(166, 376);
			this->panel4->TabIndex = 4;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel3->Location = System::Drawing::Point(0, 428);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(640, 52);
			this->panel3->TabIndex = 3;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->Controls->Add(this->panel7);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(640, 52);
			this->panel2->TabIndex = 1;
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->MinimizeLabel);
			this->panel7->Controls->Add(this->CloseLabel);
			this->panel7->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel7->Location = System::Drawing::Point(0, 0);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(640, 25);
			this->panel7->TabIndex = 1;
			this->panel7->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Login::StartSetFormPosition);
			this->panel7->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Login::SetFormPosition);
			this->panel7->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Login::CancelFormPositionSet);
			// 
			// MinimizeLabel
			// 
			this->MinimizeLabel->AutoSize = true;
			this->MinimizeLabel->BackColor = System::Drawing::Color::Transparent;
			this->MinimizeLabel->Dock = System::Windows::Forms::DockStyle::Right;
			this->MinimizeLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MinimizeLabel->ForeColor = System::Drawing::Color::Purple;
			this->MinimizeLabel->Location = System::Drawing::Point(601, 0);
			this->MinimizeLabel->Name = L"MinimizeLabel";
			this->MinimizeLabel->Size = System::Drawing::Size(17, 24);
			this->MinimizeLabel->TabIndex = 2;
			this->MinimizeLabel->Text = L"-";
			this->MinimizeLabel->Click += gcnew System::EventHandler(this, &Login::MinimizeWindow);
			this->MinimizeLabel->MouseEnter += gcnew System::EventHandler(this, &Login::MinimizeLabel_MouseEnter);
			this->MinimizeLabel->MouseLeave += gcnew System::EventHandler(this, &Login::MinimzeLabel_MouseLeave);
			// 
			// CloseLabel
			// 
			this->CloseLabel->AutoSize = true;
			this->CloseLabel->BackColor = System::Drawing::Color::Transparent;
			this->CloseLabel->Dock = System::Windows::Forms::DockStyle::Right;
			this->CloseLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CloseLabel->ForeColor = System::Drawing::Color::Purple;
			this->CloseLabel->Location = System::Drawing::Point(618, 0);
			this->CloseLabel->Name = L"CloseLabel";
			this->CloseLabel->Size = System::Drawing::Size(22, 22);
			this->CloseLabel->TabIndex = 1;
			this->CloseLabel->Text = L"X";
			this->CloseLabel->Click += gcnew System::EventHandler(this, &Login::CloseLabel_Click);
			this->CloseLabel->MouseEnter += gcnew System::EventHandler(this, &Login::CloseLabel_MouseEnter);
			this->CloseLabel->MouseLeave += gcnew System::EventHandler(this, &Login::CloseLabel_MouseLeave);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(640, 480);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximumSize = System::Drawing::Size(640, 480);
			this->MinimizeBox = false;
			this->Name = L"Login";
			this->Opacity = 0;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Shown);
			this->Shown += gcnew System::EventHandler(this, &Login::Login_Shown);
			this->Resize += gcnew System::EventHandler(this, &Login::Login_Shown);
			this->panel1->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void CloseLabel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void CloseLabel_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
			this->CloseLabel->ForeColor = Color::Purple;	
	}
	private: System::Void CloseLabel_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->CloseLabel->ForeColor = Color::LightPink;
	}
	private: System::Void MinimzeLabel_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->MinimizeLabel->ForeColor = Color::Purple;
	}
	private: System::Void MinimizeLabel_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->MinimizeLabel->ForeColor = Color::LightPink;
	}
	private: System::Void MinimizeWindow(System::Object^ sender, System::EventArgs^ e) {
		this->WakeUp();
		this->OkButton->Margin.All = 0;
	}
	private:void WakeUp(){
		for (int adder = 90; adder >= 0; adder--) {
			_sleep(2);
			this->Opacity = adder / static_cast<double>(100);
		}
		if (WindowState == FormWindowState::Normal) {
			WindowState = FormWindowState::Minimized;
		}
		else {
			WindowState = FormWindowState::Normal;
		}
	}
	private: System::Void StartSetFormPosition(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		cursorPosition = true;
		CX = this->Location.X - Cursor->Position.X;
		CY = this->Location.Y - Cursor->Position.Y;
		
	}
	private: System::Void CancelFormPositionSet(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		cursorPosition = false;
	}
	private: System::Void SetFormPosition(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (cursorPosition) {
			pointer.X = (this->Cursor->Position.X + CX);
			pointer.Y = (this->Cursor->Position.Y + CY);
			this->Location = pointer;
		}

	}
	private: System::Void Login_Shown(System::Object^ sender, System::EventArgs^ e) {
		this->panel6->Visible = false;
		for (int adder = 0; adder <= 90; adder++) {
			_sleep(2);
			this->Opacity = adder / static_cast<double>(100);
		}
		this->panel6->Visible = true;
	}
	private: System::Void OkButton_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int adder = 0; adder <= 90; adder++){
			_sleep(2);
			this->Opacity = adder / static_cast<double>(100);
		}
		
	}
};
}