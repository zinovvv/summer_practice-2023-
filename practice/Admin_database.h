#pragma once

namespace practice {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Admin_database
	/// </summary>
	public ref class Admin_database : public System::Windows::Forms::Form
	{
	public:
		Admin_database(void)
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
		~Admin_database()
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
	private: System::Windows::Forms::ToolStripMenuItem^ действияToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ удалитьСтрокуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ выполнитьЗапросToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ вводДанныхToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ очиститьБазуДанныхToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ number;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Name_disk;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Type;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Year;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Quantity;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Price;
	protected:
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Admin_database::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->действияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вводДанныхToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->удалитьСтрокуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выполнитьЗапросToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->очиститьБазуДанныхToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exit_item = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->back_to_menu_item = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exit_item2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->about_item = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->number = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Name_disk = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Type = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Year = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Quantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
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
			this->menuStrip1->Size = System::Drawing::Size(971, 43);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// действияToolStripMenuItem
			// 
			this->действияToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->вводДанныхToolStripMenuItem,
					this->удалитьСтрокуToolStripMenuItem, this->toolStripMenuItem1, this->выполнитьЗапросToolStripMenuItem, this->очиститьБазуДанныхToolStripMenuItem
			});
			this->действияToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->действияToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->действияToolStripMenuItem->Name = L"действияToolStripMenuItem";
			this->действияToolStripMenuItem->Size = System::Drawing::Size(89, 39);
			this->действияToolStripMenuItem->Text = L"Действия";
			// 
			// вводДанныхToolStripMenuItem
			// 
			this->вводДанныхToolStripMenuItem->Name = L"вводДанныхToolStripMenuItem";
			this->вводДанныхToolStripMenuItem->Size = System::Drawing::Size(241, 26);
			this->вводДанныхToolStripMenuItem->Text = L"Ввод данных";
			this->вводДанныхToolStripMenuItem->Click += gcnew System::EventHandler(this, &Admin_database::вводДанныхToolStripMenuItem_Click);
			// 
			// удалитьСтрокуToolStripMenuItem
			// 
			this->удалитьСтрокуToolStripMenuItem->Name = L"удалитьСтрокуToolStripMenuItem";
			this->удалитьСтрокуToolStripMenuItem->Size = System::Drawing::Size(241, 26);
			this->удалитьСтрокуToolStripMenuItem->Text = L"Удалить строку";
			this->удалитьСтрокуToolStripMenuItem->Click += gcnew System::EventHandler(this, &Admin_database::удалитьСтрокуToolStripMenuItem_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(241, 26);
			this->toolStripMenuItem1->Text = L"Редактировать строку";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &Admin_database::toolStripMenuItem1_Click);
			// 
			// выполнитьЗапросToolStripMenuItem
			// 
			this->выполнитьЗапросToolStripMenuItem->Name = L"выполнитьЗапросToolStripMenuItem";
			this->выполнитьЗапросToolStripMenuItem->Size = System::Drawing::Size(241, 26);
			this->выполнитьЗапросToolStripMenuItem->Text = L"Выполнить запрос";
			this->выполнитьЗапросToolStripMenuItem->Click += gcnew System::EventHandler(this, &Admin_database::выполнитьЗапросToolStripMenuItem_Click);
			// 
			// очиститьБазуДанныхToolStripMenuItem
			// 
			this->очиститьБазуДанныхToolStripMenuItem->Name = L"очиститьБазуДанныхToolStripMenuItem";
			this->очиститьБазуДанныхToolStripMenuItem->Size = System::Drawing::Size(241, 26);
			this->очиститьБазуДанныхToolStripMenuItem->Text = L"Очистить базу данных";
			this->очиститьБазуДанныхToolStripMenuItem->Click += gcnew System::EventHandler(this, &Admin_database::очиститьБазуДанныхToolStripMenuItem_Click);
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
			this->exit_item->Size = System::Drawing::Size(67, 39);
			this->exit_item->Text = L"Выход";
			// 
			// back_to_menu_item
			// 
			this->back_to_menu_item->Name = L"back_to_menu_item";
			this->back_to_menu_item->Size = System::Drawing::Size(239, 26);
			this->back_to_menu_item->Text = L"Вернуться в меню";
			this->back_to_menu_item->Click += gcnew System::EventHandler(this, &Admin_database::back_to_menu_item_Click);
			// 
			// exit_item2
			// 
			this->exit_item2->Name = L"exit_item2";
			this->exit_item2->Size = System::Drawing::Size(239, 26);
			this->exit_item2->Text = L"Выйти из приложения";
			this->exit_item2->Click += gcnew System::EventHandler(this, &Admin_database::exit_item2_Click);
			// 
			// about_item
			// 
			this->about_item->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->about_item->ForeColor = System::Drawing::Color::White;
			this->about_item->Name = L"about_item";
			this->about_item->Size = System::Drawing::Size(81, 39);
			this->about_item->Text = L"Об окне";
			this->about_item->Click += gcnew System::EventHandler(this, &Admin_database::about_item_Click);
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
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
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
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->EnableHeadersVisualStyles = false;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridView1->Location = System::Drawing::Point(12, 46);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 20;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::Black;
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView1->Size = System::Drawing::Size(947, 622);
			this->dataGridView1->TabIndex = 5;
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
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->FlatAppearance->BorderSize = 2;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(925, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(46, 29);
			this->button1->TabIndex = 6;
			this->button1->Text = L"X";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Admin_database::button1_Click);
			// 
			// Admin_database
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(971, 680);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->Name = L"Admin_database";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"База данных (режим администратора)";
			this->Load += gcnew System::EventHandler(this, &Admin_database::Admin_database_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void back_to_menu_item_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void exit_item2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void about_item_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void вводДанныхToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Admin_database_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void очиститьБазуДанныхToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void удалитьСтрокуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void toolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void выполнитьЗапросToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
};
}