#include "Admin_database.h"
#include "Menu_form.h"
#include "Input.h"
#include "Delete.h"
#include "Edit.h"
#include "Processing_a_request.h"

System::Void practice::Admin_database::back_to_menu_item_Click(System::Object^ sender, System::EventArgs^ e)
{
	Menu_form^ form = gcnew Menu_form();
	form->Show();
	this->Hide();
}

System::Void practice::Admin_database::exit_item2_Click(System::Object^ sender, System::EventArgs^ e)
{
    Application::Exit();
}

System::Void practice::Admin_database::about_item_Click(System::Object^ sender, System::EventArgs^ e)
{
    MessageBox::Show("В этом окне можно выбрать различные действия для работы с базой данных", "База данных");
}

System::Void practice::Admin_database::вводДанныхToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    Input^ form = gcnew Input();
    form->Show();
    this->Hide();
}

System::Void practice::Admin_database::Admin_database_Load(System::Object^ sender, System::EventArgs^ e)
{
    try
    {
        String^ currentDirectory = Environment::CurrentDirectory;
        String^ filename = "database.txt";
        String^ filePath = System::IO::Path::Combine(currentDirectory, filename);
        if (!System::IO::File::Exists(filePath))
        {
            System::IO::StreamWriter^ writer = System::IO::File::CreateText(filePath);
            writer->Close();
        }
        StreamReader^ reader = gcnew StreamReader(filePath);
        dataGridView1->Rows->Clear();
        String^ line;
        // Считываем файл построчно
        int i = 0, j = 1;
        bool f = 1;
        dataGridView1->Rows->Add(1);
        while ((line = reader->ReadLine()) != nullptr && f)
        {
            dataGridView1->Rows[i]->Cells[0]->Value = i + 1;
            dataGridView1->Rows[i]->Cells[j]->Value = line;
            j++;
            if (j == 6) {
                dataGridView1->Rows->Add(1);
                i++;
                j = 1;
            }
        }
        dataGridView1->Rows->RemoveAt(i);
        reader->Close();
    }
    catch (IOException^ e)
    {
        MessageBox::Show("Ошибка при загрузке данных из файла: " + e->Message);
    }
}

System::Void practice::Admin_database::очиститьБазуДанныхToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    System::Windows::Forms::DialogResult result = MessageBox::Show("Вы действительно хотите удалить базу данных?", "Подтверждение удаления", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
    if (result == System::Windows::Forms::DialogResult::Yes)
    {
        String^ fileName = "database.txt";
        StreamWriter^ sw = gcnew StreamWriter(fileName);
        sw->Close();
        dataGridView1->Rows->Clear();
        MessageBox::Show("База данных успешно очищена!", "Успешно!");
    }
}

System::Void practice::Admin_database::удалитьСтрокуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    String^ currentDirectory = Environment::CurrentDirectory;
    String^ filename = "database.txt";
    String^ filePath = Path::Combine(currentDirectory, filename);
    System::IO::FileInfo^ fileInfo = gcnew System::IO::FileInfo(filePath);
    if (fileInfo->Length != 0)
    {
        Delete^ form = gcnew Delete();
        form->Show();
        this->Hide();
    }
    else MessageBox::Show("База данных пуста!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
}

System::Void practice::Admin_database::toolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e)
{
    String^ currentDirectory = Environment::CurrentDirectory;
    String^ filename = "database.txt";
    String^ filePath = Path::Combine(currentDirectory, filename);
    System::IO::FileInfo^ fileInfo = gcnew System::IO::FileInfo(filePath);
    if (fileInfo->Length != 0)
    {
        Edit^ form = gcnew Edit();
        form->Show();
        this->Hide();
    }
    else MessageBox::Show("База данных пуста!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
}

System::Void practice::Admin_database::выполнитьЗапросToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    String^ currentDirectory = Environment::CurrentDirectory;
    String^ filename = "database.txt";
    String^ filePath = Path::Combine(currentDirectory, filename);
    System::IO::FileInfo^ fileInfo = gcnew System::IO::FileInfo(filePath);
    if (fileInfo->Length != 0)
    {
        Processing_a_request^ form = gcnew Processing_a_request(this);
        form->Show();
        this->Hide();
    }
    else MessageBox::Show("База данных пуста!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
}

System::Void practice::Admin_database::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    Application::Exit();
}