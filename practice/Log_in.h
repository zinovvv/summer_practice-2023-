#pragma once

namespace practice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Log_in
	/// </summary>
	public ref class Log_in : public System::Windows::Forms::Form
	{
	public:
		Log_in(void)
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
		~Log_in()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ login_label;
	private: System::Windows::Forms::TextBox^ login_text;
	protected:
	protected:
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ exit_toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ back_toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ exit_toolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ about_ToolStripMenuItem;
	private: System::Windows::Forms::Label^ password_label;
	private: System::Windows::Forms::TextBox^ password_textBox1;
	private: System::Windows::Forms::Button^ log_in_btn;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::CheckBox^ checkBox1;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Log_in::typeid));
			this->login_label = (gcnew System::Windows::Forms::Label());
			this->login_text = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->exit_toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->back_toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exit_toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->about_ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->password_label = (gcnew System::Windows::Forms::Label());
			this->password_textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->log_in_btn = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// login_label
			// 
			this->login_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->login_label->BackColor = System::Drawing::Color::Transparent;
			this->login_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->login_label->ForeColor = System::Drawing::Color::White;
			this->login_label->Location = System::Drawing::Point(289, 193);
			this->login_label->Name = L"login_label";
			this->login_label->Size = System::Drawing::Size(99, 29);
			this->login_label->TabIndex = 0;
			this->login_label->Text = L"Логин";
			this->login_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// login_text
			// 
			this->login_text->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->login_text->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->login_text->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->login_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->login_text->Location = System::Drawing::Point(235, 235);
			this->login_text->Name = L"login_text";
			this->login_text->Size = System::Drawing::Size(214, 33);
			this->login_text->TabIndex = 1;
			// 
			// menuStrip1
			// 
			this->menuStrip1->AutoSize = false;
			this->menuStrip1->BackColor = System::Drawing::Color::Transparent;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->exit_toolStripMenuItem1,
					this->about_ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(675, 47);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// exit_toolStripMenuItem1
			// 
			this->exit_toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->back_toolStripMenuItem2,
					this->exit_toolStripMenuItem3
			});
			this->exit_toolStripMenuItem1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->exit_toolStripMenuItem1->ForeColor = System::Drawing::Color::White;
			this->exit_toolStripMenuItem1->Name = L"exit_toolStripMenuItem1";
			this->exit_toolStripMenuItem1->Size = System::Drawing::Size(67, 43);
			this->exit_toolStripMenuItem1->Text = L"Выход";
			// 
			// back_toolStripMenuItem2
			// 
			this->back_toolStripMenuItem2->Name = L"back_toolStripMenuItem2";
			this->back_toolStripMenuItem2->Size = System::Drawing::Size(239, 26);
			this->back_toolStripMenuItem2->Text = L"Вернуться назад";
			this->back_toolStripMenuItem2->Click += gcnew System::EventHandler(this, &Log_in::back_toolStripMenuItem2_Click);
			// 
			// exit_toolStripMenuItem3
			// 
			this->exit_toolStripMenuItem3->Name = L"exit_toolStripMenuItem3";
			this->exit_toolStripMenuItem3->Size = System::Drawing::Size(239, 26);
			this->exit_toolStripMenuItem3->Text = L"Выйти из приложения";
			this->exit_toolStripMenuItem3->Click += gcnew System::EventHandler(this, &Log_in::exit_toolStripMenuItem3_Click);
			// 
			// about_ToolStripMenuItem
			// 
			this->about_ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->about_ToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->about_ToolStripMenuItem->Name = L"about_ToolStripMenuItem";
			this->about_ToolStripMenuItem->Size = System::Drawing::Size(81, 43);
			this->about_ToolStripMenuItem->Text = L"Об окне";
			this->about_ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Log_in::about_ToolStripMenuItem_Click);
			// 
			// password_label
			// 
			this->password_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->password_label->BackColor = System::Drawing::Color::Transparent;
			this->password_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->password_label->ForeColor = System::Drawing::Color::White;
			this->password_label->Location = System::Drawing::Point(289, 308);
			this->password_label->Name = L"password_label";
			this->password_label->Size = System::Drawing::Size(99, 29);
			this->password_label->TabIndex = 0;
			this->password_label->Text = L"Пароль";
			this->password_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// password_textBox1
			// 
			this->password_textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->password_textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->password_textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->password_textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->password_textBox1->Location = System::Drawing::Point(233, 352);
			this->password_textBox1->Name = L"password_textBox1";
			this->password_textBox1->PasswordChar = '*';
			this->password_textBox1->Size = System::Drawing::Size(214, 40);
			this->password_textBox1->TabIndex = 1;
			// 
			// log_in_btn
			// 
			this->log_in_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->log_in_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->log_in_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->log_in_btn->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->log_in_btn->FlatAppearance->BorderSize = 2;
			this->log_in_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->log_in_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->log_in_btn->Location = System::Drawing::Point(266, 449);
			this->log_in_btn->Name = L"log_in_btn";
			this->log_in_btn->Size = System::Drawing::Size(145, 70);
			this->log_in_btn->TabIndex = 3;
			this->log_in_btn->Text = L"Войти";
			this->log_in_btn->UseVisualStyleBackColor = false;
			this->log_in_btn->Click += gcnew System::EventHandler(this, &Log_in::log_in_btn_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->FlatAppearance->BorderSize = 2;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(642, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(33, 24);
			this->button1->TabIndex = 5;
			this->button1->Text = L"X";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Log_in::button1_Click);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(121, 90);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(447, 52);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Введите логин и пароль для входа";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox1->ForeColor = System::Drawing::Color::White;
			this->checkBox1->Location = System::Drawing::Point(233, 411);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(139, 20);
			this->checkBox1->TabIndex = 8;
			this->checkBox1->Text = L"Показать пароль";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Log_in::checkBox1_CheckedChanged);
			// 
			// Log_in
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(675, 645);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->log_in_btn);
			this->Controls->Add(this->password_textBox1);
			this->Controls->Add(this->login_text);
			this->Controls->Add(this->password_label);
			this->Controls->Add(this->login_label);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"Log_in";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Вход";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//функция проверки логина и пароля
		bool login_password(String^ login, String^ password) {
			if (login == "admin" && password == "PI-22") {
				return true;
			}
			else {
				MessageBox::Show(this, "Вы ввели неверный логин или пароль!", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return false;
			}
		}
private: System::Void log_in_btn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void back_toolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void exit_toolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void about_ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
};
}
