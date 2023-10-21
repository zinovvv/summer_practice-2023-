#pragma once

namespace practice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для game_settings
	/// </summary>
	public ref class game_settings : public System::Windows::Forms::Form
	{
	public:
		game_settings(void)
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
		~game_settings()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button3;
	protected:
	private: System::Windows::Forms::MenuStrip^ menuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ user_btn;
	private: System::Windows::Forms::Button^ admin_btn;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::RadioButton^ regionradb1;
	private: System::Windows::Forms::RadioButton^ regionradb2;
	private: System::Windows::Forms::RadioButton^ regionradb3;
	private: System::Windows::Forms::RadioButton^ regionradb4;
	private: System::Windows::Forms::RadioButton^ regionradb6;





	private: System::Windows::Forms::RadioButton^ regionradb5;








	private: System::Windows::Forms::RadioButton^ moderadioButton1;
	private: System::Windows::Forms::RadioButton^ moderadioButton2;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::ToolStripMenuItem^ вернутьсяНазадToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выйтиИзПрограммыToolStripMenuItem;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(game_settings::typeid));
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вернутьсяНазадToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выйтиИзПрограммыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->user_btn = (gcnew System::Windows::Forms::Button());
			this->admin_btn = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->regionradb1 = (gcnew System::Windows::Forms::RadioButton());
			this->regionradb2 = (gcnew System::Windows::Forms::RadioButton());
			this->regionradb3 = (gcnew System::Windows::Forms::RadioButton());
			this->regionradb4 = (gcnew System::Windows::Forms::RadioButton());
			this->regionradb6 = (gcnew System::Windows::Forms::RadioButton());
			this->regionradb5 = (gcnew System::Windows::Forms::RadioButton());
			this->moderadioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->moderadioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->menuStrip2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Red;
			this->button3->FlatAppearance->BorderSize = 2;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(862, 0);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(33, 26);
			this->button3->TabIndex = 45;
			this->button3->Text = L"X";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &game_settings::button3_Click);
			// 
			// menuStrip2
			// 
			this->menuStrip2->BackColor = System::Drawing::Color::Transparent;
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripMenuItem2,
					this->toolStripMenuItem1
			});
			this->menuStrip2->Location = System::Drawing::Point(0, 0);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Size = System::Drawing::Size(895, 31);
			this->menuStrip2->TabIndex = 44;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->BackColor = System::Drawing::Color::Transparent;
			this->toolStripMenuItem2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->toolStripMenuItem2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(126, 27);
			this->toolStripMenuItem2->Text = L"О программе";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->BackColor = System::Drawing::Color::Transparent;
			this->toolStripMenuItem1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->вернутьсяНазадToolStripMenuItem,
					this->выйтиИзПрограммыToolStripMenuItem
			});
			this->toolStripMenuItem1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->toolStripMenuItem1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(76, 27);
			this->toolStripMenuItem1->Text = L"Выход";
			// 
			// вернутьсяНазадToolStripMenuItem
			// 
			this->вернутьсяНазадToolStripMenuItem->Name = L"вернутьсяНазадToolStripMenuItem";
			this->вернутьсяНазадToolStripMenuItem->Size = System::Drawing::Size(252, 28);
			this->вернутьсяНазадToolStripMenuItem->Text = L"Вернуться назад";
			this->вернутьсяНазадToolStripMenuItem->Click += gcnew System::EventHandler(this, &game_settings::вернутьсяНазадToolStripMenuItem_Click);
			// 
			// выйтиИзПрограммыToolStripMenuItem
			// 
			this->выйтиИзПрограммыToolStripMenuItem->Name = L"выйтиИзПрограммыToolStripMenuItem";
			this->выйтиИзПрограммыToolStripMenuItem->Size = System::Drawing::Size(252, 28);
			this->выйтиИзПрограммыToolStripMenuItem->Text = L"Выйти из программы";
			this->выйтиИзПрограммыToolStripMenuItem->Click += gcnew System::EventHandler(this, &game_settings::выйтиИзПрограммыToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoEllipsis = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label1->Location = System::Drawing::Point(79, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(756, 68);
			this->label1->TabIndex = 43;
			this->label1->Text = L"Выберите настройки для игры:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// user_btn
			// 
			this->user_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->user_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->user_btn->FlatAppearance->BorderSize = 4;
			this->user_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->user_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->user_btn->Location = System::Drawing::Point(87, 323);
			this->user_btn->Name = L"user_btn";
			this->user_btn->Size = System::Drawing::Size(225, 99);
			this->user_btn->TabIndex = 41;
			this->user_btn->Text = L"Загадывается государство";
			this->user_btn->UseVisualStyleBackColor = false;
			// 
			// admin_btn
			// 
			this->admin_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->admin_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->admin_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->admin_btn->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->admin_btn->FlatAppearance->BorderSize = 4;
			this->admin_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->admin_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->admin_btn->ForeColor = System::Drawing::Color::Black;
			this->admin_btn->Location = System::Drawing::Point(87, 218);
			this->admin_btn->Name = L"admin_btn";
			this->admin_btn->Size = System::Drawing::Size(225, 99);
			this->admin_btn->TabIndex = 42;
			this->admin_btn->Text = L"Загадывается столица";
			this->admin_btn->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button1->FlatAppearance->BorderSize = 4;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(589, 265);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(246, 62);
			this->button1->TabIndex = 42;
			this->button1->Text = L"Америка";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button2->FlatAppearance->BorderSize = 4;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(589, 199);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(246, 60);
			this->button2->TabIndex = 41;
			this->button2->Text = L"Европа";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button4->FlatAppearance->BorderSize = 4;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(589, 333);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(246, 60);
			this->button4->TabIndex = 42;
			this->button4->Text = L"Азия";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button5->FlatAppearance->BorderSize = 4;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(589, 399);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(246, 60);
			this->button5->TabIndex = 41;
			this->button5->Text = L"Австралия и Океания";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button6
			// 
			this->button6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button6->FlatAppearance->BorderSize = 4;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(589, 465);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(246, 62);
			this->button6->TabIndex = 42;
			this->button6->Text = L"Африка";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// button7
			// 
			this->button7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button7->FlatAppearance->BorderSize = 4;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(589, 533);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(246, 55);
			this->button7->TabIndex = 41;
			this->button7->Text = L"Все регионы";
			this->button7->UseVisualStyleBackColor = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->regionradb1);
			this->panel1->Controls->Add(this->regionradb2);
			this->panel1->Controls->Add(this->regionradb3);
			this->panel1->Controls->Add(this->regionradb4);
			this->panel1->Controls->Add(this->regionradb6);
			this->panel1->Controls->Add(this->regionradb5);
			this->panel1->Location = System::Drawing::Point(554, 199);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(29, 389);
			this->panel1->TabIndex = 46;
			// 
			// regionradb1
			// 
			this->regionradb1->AutoSize = true;
			this->regionradb1->Checked = true;
			this->regionradb1->Location = System::Drawing::Point(12, 25);
			this->regionradb1->Name = L"regionradb1";
			this->regionradb1->Size = System::Drawing::Size(85, 17);
			this->regionradb1->TabIndex = 0;
			this->regionradb1->TabStop = true;
			this->regionradb1->Text = L"radioButton1";
			this->regionradb1->UseVisualStyleBackColor = true;
			// 
			// regionradb2
			// 
			this->regionradb2->AutoSize = true;
			this->regionradb2->Location = System::Drawing::Point(12, 92);
			this->regionradb2->Name = L"regionradb2";
			this->regionradb2->Size = System::Drawing::Size(85, 17);
			this->regionradb2->TabIndex = 0;
			this->regionradb2->Text = L"radioButton1";
			this->regionradb2->UseVisualStyleBackColor = true;
			// 
			// regionradb3
			// 
			this->regionradb3->AutoSize = true;
			this->regionradb3->Location = System::Drawing::Point(12, 159);
			this->regionradb3->Name = L"regionradb3";
			this->regionradb3->Size = System::Drawing::Size(85, 17);
			this->regionradb3->TabIndex = 0;
			this->regionradb3->Text = L"radioButton1";
			this->regionradb3->UseVisualStyleBackColor = true;
			// 
			// regionradb4
			// 
			this->regionradb4->AutoSize = true;
			this->regionradb4->Location = System::Drawing::Point(12, 225);
			this->regionradb4->Name = L"regionradb4";
			this->regionradb4->Size = System::Drawing::Size(85, 17);
			this->regionradb4->TabIndex = 0;
			this->regionradb4->Text = L"radioButton1";
			this->regionradb4->UseVisualStyleBackColor = true;
			// 
			// regionradb6
			// 
			this->regionradb6->AutoSize = true;
			this->regionradb6->Location = System::Drawing::Point(12, 356);
			this->regionradb6->Name = L"regionradb6";
			this->regionradb6->Size = System::Drawing::Size(85, 17);
			this->regionradb6->TabIndex = 0;
			this->regionradb6->Text = L"radioButton1";
			this->regionradb6->UseVisualStyleBackColor = true;
			// 
			// regionradb5
			// 
			this->regionradb5->AutoSize = true;
			this->regionradb5->Location = System::Drawing::Point(12, 292);
			this->regionradb5->Name = L"regionradb5";
			this->regionradb5->Size = System::Drawing::Size(85, 17);
			this->regionradb5->TabIndex = 0;
			this->regionradb5->Text = L"radioButton1";
			this->regionradb5->UseVisualStyleBackColor = true;
			// 
			// moderadioButton1
			// 
			this->moderadioButton1->AutoSize = true;
			this->moderadioButton1->Checked = true;
			this->moderadioButton1->Location = System::Drawing::Point(12, 44);
			this->moderadioButton1->Name = L"moderadioButton1";
			this->moderadioButton1->Size = System::Drawing::Size(85, 17);
			this->moderadioButton1->TabIndex = 0;
			this->moderadioButton1->TabStop = true;
			this->moderadioButton1->Text = L"radioButton1";
			this->moderadioButton1->UseVisualStyleBackColor = true;
			// 
			// moderadioButton2
			// 
			this->moderadioButton2->AutoSize = true;
			this->moderadioButton2->Location = System::Drawing::Point(12, 140);
			this->moderadioButton2->Name = L"moderadioButton2";
			this->moderadioButton2->Size = System::Drawing::Size(85, 17);
			this->moderadioButton2->TabIndex = 0;
			this->moderadioButton2->Text = L"radioButton1";
			this->moderadioButton2->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoEllipsis = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label2->Location = System::Drawing::Point(496, 128);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(387, 68);
			this->label2->TabIndex = 43;
			this->label2->Text = L"Выберите регион для игры:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoEllipsis = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label3->Location = System::Drawing::Point(12, 128);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(387, 68);
			this->label3->TabIndex = 43;
			this->label3->Text = L"Выберите режим игры:";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button8
			// 
			this->button8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button8->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button8->FlatAppearance->BorderSize = 4;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::Color::Black;
			this->button8->Location = System::Drawing::Point(325, 637);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(225, 99);
			this->button8->TabIndex = 42;
			this->button8->Text = L"Начать игру";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &game_settings::button8_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->Controls->Add(this->moderadioButton2);
			this->panel2->Controls->Add(this->moderadioButton1);
			this->panel2->Location = System::Drawing::Point(57, 218);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(27, 204);
			this->panel2->TabIndex = 47;
			// 
			// game_settings
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(895, 748);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->menuStrip2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->user_btn);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->admin_btn);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"game_settings";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L" ";
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void вернутьсяНазадToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void выйтиИзПрограммыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
};
}
