#pragma once

namespace practice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Processing_a_request
	/// </summary>
	public ref class Processing_a_request : public System::Windows::Forms::Form
	{
	public:
		Processing_a_request(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		Processing_a_request(System::Windows::Forms::Form^ parent)
		{
			InitializeComponent();
			if (parent == nullptr)
			{
				throw gcnew System::ArgumentNullException("parent");
			}
			parentForm = parent; // Сохраняем родительскую форму
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Processing_a_request()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ exit_item;
	private: System::Windows::Forms::ToolStripMenuItem^ back_to_menu_item;
	private: System::Windows::Forms::ToolStripMenuItem^ exit_item2;
	private: System::Windows::Forms::ToolStripMenuItem^ about_item;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::RadioButton^ radioButton_y1;
	private: System::Windows::Forms::RadioButton^ radioButton_y2;
	private: System::Windows::Forms::RadioButton^ radioButton_y3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::RadioButton^ radioButton_q1;
	private: System::Windows::Forms::RadioButton^ radioButton_q3;
	private: System::Windows::Forms::RadioButton^ radioButton_q2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::RadioButton^ radioButton_p1;
	private: System::Windows::Forms::RadioButton^ radioButton_p3;
	private: System::Windows::Forms::RadioButton^ radioButton_p2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Form^ parentForm;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ number;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Name_disk;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Type;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Year;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Quantity;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Price;
private: System::Windows::Forms::ToolStripMenuItem^ действияToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ вводДанныхToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ удалениеСтрокиToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ редактированиеСтрокиToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ очиститьБазуДанныхToolStripMenuItem;
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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Processing_a_request::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->действияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вводДанныхToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->удалениеСтрокиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->редактированиеСтрокиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->очиститьБазуДанныхToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exit_item = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->back_to_menu_item = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exit_item2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->about_item = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->radioButton_y1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_y2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_y3 = (gcnew System::Windows::Forms::RadioButton());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->radioButton_q1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_q3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_q2 = (gcnew System::Windows::Forms::RadioButton());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->radioButton_p1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_p3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_p2 = (gcnew System::Windows::Forms::RadioButton());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->number = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Name_disk = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Type = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Year = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Quantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->AutoSize = false;
			this->menuStrip1->BackColor = System::Drawing::Color::Transparent;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->действияToolStripMenuItem,
					this->exit_item, this->about_item
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(909, 46);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// действияToolStripMenuItem
			// 
			this->действияToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->вводДанныхToolStripMenuItem,
					this->удалениеСтрокиToolStripMenuItem, this->редактированиеСтрокиToolStripMenuItem, this->очиститьБазуДанныхToolStripMenuItem
			});
			this->действияToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->действияToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->действияToolStripMenuItem->Name = L"действияToolStripMenuItem";
			this->действияToolStripMenuItem->Size = System::Drawing::Size(89, 42);
			this->действияToolStripMenuItem->Text = L"Действия";
			// 
			// вводДанныхToolStripMenuItem
			// 
			this->вводДанныхToolStripMenuItem->Name = L"вводДанныхToolStripMenuItem";
			this->вводДанныхToolStripMenuItem->Size = System::Drawing::Size(251, 26);
			this->вводДанныхToolStripMenuItem->Text = L"Ввод данных";
			this->вводДанныхToolStripMenuItem->Click += gcnew System::EventHandler(this, &Processing_a_request::вводДанныхToolStripMenuItem_Click);
			// 
			// удалениеСтрокиToolStripMenuItem
			// 
			this->удалениеСтрокиToolStripMenuItem->Name = L"удалениеСтрокиToolStripMenuItem";
			this->удалениеСтрокиToolStripMenuItem->Size = System::Drawing::Size(251, 26);
			this->удалениеСтрокиToolStripMenuItem->Text = L"Удаление строки";
			this->удалениеСтрокиToolStripMenuItem->Click += gcnew System::EventHandler(this, &Processing_a_request::удалениеСтрокиToolStripMenuItem_Click);
			// 
			// редактированиеСтрокиToolStripMenuItem
			// 
			this->редактированиеСтрокиToolStripMenuItem->Name = L"редактированиеСтрокиToolStripMenuItem";
			this->редактированиеСтрокиToolStripMenuItem->Size = System::Drawing::Size(251, 26);
			this->редактированиеСтрокиToolStripMenuItem->Text = L"Редактирование строки";
			this->редактированиеСтрокиToolStripMenuItem->Click += gcnew System::EventHandler(this, &Processing_a_request::редактированиеСтрокиToolStripMenuItem_Click);
			// 
			// очиститьБазуДанныхToolStripMenuItem
			// 
			this->очиститьБазуДанныхToolStripMenuItem->Name = L"очиститьБазуДанныхToolStripMenuItem";
			this->очиститьБазуДанныхToolStripMenuItem->Size = System::Drawing::Size(251, 26);
			this->очиститьБазуДанныхToolStripMenuItem->Text = L"Очистить базу данных";
			this->очиститьБазуДанныхToolStripMenuItem->Click += gcnew System::EventHandler(this, &Processing_a_request::очиститьБазуДанныхToolStripMenuItem_Click);
			// 
			// exit_item
			// 
			this->exit_item->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->back_to_menu_item,
					this->exit_item2
			});
			this->exit_item->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->exit_item->ForeColor = System::Drawing::Color::White;
			this->exit_item->Name = L"exit_item";
			this->exit_item->Size = System::Drawing::Size(67, 42);
			this->exit_item->Text = L"Выход";
			// 
			// back_to_menu_item
			// 
			this->back_to_menu_item->Name = L"back_to_menu_item";
			this->back_to_menu_item->Size = System::Drawing::Size(258, 26);
			this->back_to_menu_item->Text = L"Вернуться к базе данных";
			this->back_to_menu_item->Click += gcnew System::EventHandler(this, &Processing_a_request::back_to_menu_item_Click);
			// 
			// exit_item2
			// 
			this->exit_item2->Name = L"exit_item2";
			this->exit_item2->Size = System::Drawing::Size(258, 26);
			this->exit_item2->Text = L"Выйти из приложения";
			this->exit_item2->Click += gcnew System::EventHandler(this, &Processing_a_request::exit_item2_Click);
			// 
			// about_item
			// 
			this->about_item->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->about_item->ForeColor = System::Drawing::Color::White;
			this->about_item->Name = L"about_item";
			this->about_item->Size = System::Drawing::Size(81, 42);
			this->about_item->Text = L"Об окне";
			this->about_item->Click += gcnew System::EventHandler(this, &Processing_a_request::about_item_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Enabled = false;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(424, 89);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(155, 31);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Enabled = false;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(424, 128);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(155, 31);
			this->textBox2->TabIndex = 3;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Enabled = false;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(424, 167);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(155, 31);
			this->textBox3->TabIndex = 3;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Enabled = false;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(424, 237);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(155, 31);
			this->textBox4->TabIndex = 3;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Enabled = false;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(424, 307);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(155, 31);
			this->textBox5->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button1->Enabled = false;
			this->button1->FlatAppearance->BorderSize = 2;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(415, 381);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(164, 37);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Выполнить запрос";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Processing_a_request::button1_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->FlatAppearance->BorderSize = 0;
			this->checkBox1->Location = System::Drawing::Point(403, 91);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(15, 24);
			this->checkBox1->TabIndex = 7;
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Processing_a_request::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->BackColor = System::Drawing::Color::Transparent;
			this->checkBox2->FlatAppearance->BorderSize = 0;
			this->checkBox2->Location = System::Drawing::Point(403, 138);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(15, 14);
			this->checkBox2->TabIndex = 7;
			this->checkBox2->UseVisualStyleBackColor = false;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Processing_a_request::checkBox2_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->BackColor = System::Drawing::Color::Transparent;
			this->checkBox3->FlatAppearance->BorderSize = 0;
			this->checkBox3->Location = System::Drawing::Point(403, 177);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(15, 14);
			this->checkBox3->TabIndex = 7;
			this->checkBox3->UseVisualStyleBackColor = false;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &Processing_a_request::checkBox3_CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->BackColor = System::Drawing::Color::Transparent;
			this->checkBox4->FlatAppearance->BorderSize = 0;
			this->checkBox4->Location = System::Drawing::Point(403, 247);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(15, 14);
			this->checkBox4->TabIndex = 7;
			this->checkBox4->UseVisualStyleBackColor = false;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &Processing_a_request::checkBox4_CheckedChanged);
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->BackColor = System::Drawing::Color::Transparent;
			this->checkBox5->FlatAppearance->BorderSize = 0;
			this->checkBox5->Location = System::Drawing::Point(403, 311);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(15, 14);
			this->checkBox5->TabIndex = 7;
			this->checkBox5->UseVisualStyleBackColor = false;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &Processing_a_request::checkBox5_CheckedChanged);
			// 
			// radioButton_y1
			// 
			this->radioButton_y1->AutoSize = true;
			this->radioButton_y1->Checked = true;
			this->radioButton_y1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton_y1->ForeColor = System::Drawing::Color::Black;
			this->radioButton_y1->Location = System::Drawing::Point(12, 3);
			this->radioButton_y1->Name = L"radioButton_y1";
			this->radioButton_y1->Size = System::Drawing::Size(70, 19);
			this->radioButton_y1->TabIndex = 9;
			this->radioButton_y1->TabStop = true;
			this->radioButton_y1->Text = L"Больше";
			this->radioButton_y1->UseVisualStyleBackColor = true;
			// 
			// radioButton_y2
			// 
			this->radioButton_y2->AutoSize = true;
			this->radioButton_y2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton_y2->ForeColor = System::Drawing::Color::Black;
			this->radioButton_y2->Location = System::Drawing::Point(82, 2);
			this->radioButton_y2->Name = L"radioButton_y2";
			this->radioButton_y2->Size = System::Drawing::Size(61, 19);
			this->radioButton_y2->TabIndex = 10;
			this->radioButton_y2->Text = L"Равно";
			this->radioButton_y2->UseVisualStyleBackColor = true;
			// 
			// radioButton_y3
			// 
			this->radioButton_y3->AutoSize = true;
			this->radioButton_y3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton_y3->ForeColor = System::Drawing::Color::Black;
			this->radioButton_y3->Location = System::Drawing::Point(144, 3);
			this->radioButton_y3->Name = L"radioButton_y3";
			this->radioButton_y3->Size = System::Drawing::Size(73, 19);
			this->radioButton_y3->TabIndex = 11;
			this->radioButton_y3->Text = L"Меньше";
			this->radioButton_y3->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panel1->Controls->Add(this->radioButton_y1);
			this->panel1->Controls->Add(this->radioButton_y3);
			this->panel1->Controls->Add(this->radioButton_y2);
			this->panel1->Enabled = false;
			this->panel1->Location = System::Drawing::Point(393, 206);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(213, 25);
			this->panel1->TabIndex = 12;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panel2->Controls->Add(this->radioButton_q1);
			this->panel2->Controls->Add(this->radioButton_q3);
			this->panel2->Controls->Add(this->radioButton_q2);
			this->panel2->Enabled = false;
			this->panel2->Location = System::Drawing::Point(393, 276);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(213, 25);
			this->panel2->TabIndex = 12;
			// 
			// radioButton_q1
			// 
			this->radioButton_q1->AutoSize = true;
			this->radioButton_q1->Checked = true;
			this->radioButton_q1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton_q1->ForeColor = System::Drawing::Color::Black;
			this->radioButton_q1->Location = System::Drawing::Point(12, 3);
			this->radioButton_q1->Name = L"radioButton_q1";
			this->radioButton_q1->Size = System::Drawing::Size(70, 19);
			this->radioButton_q1->TabIndex = 9;
			this->radioButton_q1->TabStop = true;
			this->radioButton_q1->Text = L"Больше";
			this->radioButton_q1->UseVisualStyleBackColor = true;
			// 
			// radioButton_q3
			// 
			this->radioButton_q3->AutoSize = true;
			this->radioButton_q3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton_q3->ForeColor = System::Drawing::Color::Black;
			this->radioButton_q3->Location = System::Drawing::Point(144, 3);
			this->radioButton_q3->Name = L"radioButton_q3";
			this->radioButton_q3->Size = System::Drawing::Size(73, 19);
			this->radioButton_q3->TabIndex = 11;
			this->radioButton_q3->Text = L"Меньше";
			this->radioButton_q3->UseVisualStyleBackColor = true;
			// 
			// radioButton_q2
			// 
			this->radioButton_q2->AutoSize = true;
			this->radioButton_q2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton_q2->ForeColor = System::Drawing::Color::Black;
			this->radioButton_q2->Location = System::Drawing::Point(82, 2);
			this->radioButton_q2->Name = L"radioButton_q2";
			this->radioButton_q2->Size = System::Drawing::Size(61, 19);
			this->radioButton_q2->TabIndex = 10;
			this->radioButton_q2->Text = L"Равно";
			this->radioButton_q2->UseVisualStyleBackColor = true;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panel3->Controls->Add(this->radioButton_p1);
			this->panel3->Controls->Add(this->radioButton_p3);
			this->panel3->Controls->Add(this->radioButton_p2);
			this->panel3->Enabled = false;
			this->panel3->Location = System::Drawing::Point(393, 346);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(213, 25);
			this->panel3->TabIndex = 12;
			// 
			// radioButton_p1
			// 
			this->radioButton_p1->AutoSize = true;
			this->radioButton_p1->Checked = true;
			this->radioButton_p1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton_p1->ForeColor = System::Drawing::Color::Black;
			this->radioButton_p1->Location = System::Drawing::Point(3, 4);
			this->radioButton_p1->Name = L"radioButton_p1";
			this->radioButton_p1->Size = System::Drawing::Size(70, 19);
			this->radioButton_p1->TabIndex = 9;
			this->radioButton_p1->TabStop = true;
			this->radioButton_p1->Text = L"Больше";
			this->radioButton_p1->UseVisualStyleBackColor = true;
			// 
			// radioButton_p3
			// 
			this->radioButton_p3->AutoSize = true;
			this->radioButton_p3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton_p3->ForeColor = System::Drawing::Color::Black;
			this->radioButton_p3->Location = System::Drawing::Point(135, 4);
			this->radioButton_p3->Name = L"radioButton_p3";
			this->radioButton_p3->Size = System::Drawing::Size(73, 19);
			this->radioButton_p3->TabIndex = 11;
			this->radioButton_p3->Text = L"Меньше";
			this->radioButton_p3->UseVisualStyleBackColor = true;
			// 
			// radioButton_p2
			// 
			this->radioButton_p2->AutoSize = true;
			this->radioButton_p2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton_p2->ForeColor = System::Drawing::Color::Black;
			this->radioButton_p2->Location = System::Drawing::Point(73, 3);
			this->radioButton_p2->Name = L"radioButton_p2";
			this->radioButton_p2->Size = System::Drawing::Size(61, 19);
			this->radioButton_p2->TabIndex = 10;
			this->radioButton_p2->Text = L"Равно";
			this->radioButton_p2->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button2->FlatAppearance->BorderSize = 2;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(12, 356);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(127, 62);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Вывести базу данных";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Processing_a_request::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::Black;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeight = 50;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->number,
					this->Name_disk, this->Type, this->Year, this->Quantity, this->Price
			});
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->EnableHeadersVisualStyles = false;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridView1->Location = System::Drawing::Point(12, 424);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 20;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::Black;
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView1->Size = System::Drawing::Size(885, 232);
			this->dataGridView1->TabIndex = 38;
			// 
			// number
			// 
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::Black;
			this->number->DefaultCellStyle = dataGridViewCellStyle2;
			this->number->FillWeight = 191.8782F;
			this->number->HeaderText = L"№";
			this->number->MinimumWidth = 10;
			this->number->Name = L"number";
			this->number->ReadOnly = true;
			this->number->Width = 40;
			// 
			// Name_disk
			// 
			this->Name_disk->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Name_disk->FillWeight = 87.62437F;
			this->Name_disk->HeaderText = L"Название диска";
			this->Name_disk->Name = L"Name_disk";
			this->Name_disk->ReadOnly = true;
			// 
			// Type
			// 
			this->Type->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Type->FillWeight = 87.62437F;
			this->Type->HeaderText = L"Тип носителя";
			this->Type->Name = L"Type";
			this->Type->ReadOnly = true;
			// 
			// Year
			// 
			this->Year->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Year->FillWeight = 87.62437F;
			this->Year->HeaderText = L"Год выпуска";
			this->Year->Name = L"Year";
			this->Year->ReadOnly = true;
			// 
			// Quantity
			// 
			this->Quantity->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Quantity->FillWeight = 87.62437F;
			this->Quantity->HeaderText = L"Количество экземпляров";
			this->Quantity->Name = L"Quantity";
			this->Quantity->ReadOnly = true;
			// 
			// Price
			// 
			this->Price->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Price->FillWeight = 87.62437F;
			this->Price->HeaderText = L"Цена";
			this->Price->Name = L"Price";
			this->Price->ReadOnly = true;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Red;
			this->button3->FlatAppearance->BorderSize = 2;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(876, 0);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(33, 26);
			this->button3->TabIndex = 39;
			this->button3->Text = L"X";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Processing_a_request::button3_Click);
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(345, 306);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 24);
			this->label5->TabIndex = 44;
			this->label5->Text = L"Цена";
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(160, 243);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(239, 24);
			this->label7->TabIndex = 45;
			this->label7->Text = L"Количество экземпляров";
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(277, 173);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(122, 24);
			this->label8->TabIndex = 46;
			this->label8->Text = L"Год выпуска";
			// 
			// label9
			// 
			this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(266, 133);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(133, 24);
			this->label9->TabIndex = 47;
			this->label9->Text = L"Тип носителя";
			// 
			// label10
			// 
			this->label10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(302, 91);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(97, 24);
			this->label10->TabIndex = 48;
			this->label10->Text = L"Название";
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(272, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(420, 29);
			this->label1->TabIndex = 48;
			this->label1->Text = L"Выберите параметры для запроса:";
			// 
			// Processing_a_request
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(909, 668);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->Name = L"Processing_a_request";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Обработка запроса";
			this->Load += gcnew System::EventHandler(this, &Processing_a_request::Processing_a_request_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void back_to_menu_item_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void exit_item2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void about_item_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void checkBox5_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Processing_a_request_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void вводДанныхToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void удалениеСтрокиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void редактированиеСтрокиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void очиститьБазуДанныхToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};
}
