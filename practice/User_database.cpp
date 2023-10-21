#include "User_database.h"
#include "Menu_form.h"
#include "Processing_a_request.h"
#include "Log_in.h"

System::Void practice::User_database::вернутьс€ЌазадToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Menu_form^ form = gcnew Menu_form();
	form->Show();
	this->Hide();
}

System::Void practice::User_database::toolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e)
{
    Application::Exit();
}

System::Void practice::User_database::обќкнеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MessageBox::Show("¬ этом окне можно просматривать базу данных и выполн€ть запрос", "Ѕаза данных");
}

System::Void practice::User_database::выполнить«апросToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    String^ currentDirectory = Environment::CurrentDirectory;
    String^ filename = "database.txt";
    String^ filePath = System::IO::Path::Combine(currentDirectory, filename);
    System::IO::FileInfo^ fileInfo = gcnew System::IO::FileInfo(filePath);
    if (fileInfo->Length != 0)
    {
        Processing_a_request^ form = gcnew Processing_a_request(this);
        form->Show();
        this->Hide();
    }
    else MessageBox::Show("Ѕаза данных пуста!", "ќшибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
}

System::Void practice::User_database::войти¬–ежимјдминистратораToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Log_in^ form = gcnew Log_in();
	form->Show();
	this->Hide();
}

//событие загрузки окна
System::Void practice::User_database::User_database_Load(System::Object^ sender, System::EventArgs^ e)
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
        System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(filePath);
        //очищаем DataGridView перед заполнением
        dataGridView1->Rows->Clear();
        String^ line;
        //считываем файл построчно
        int i = 0, j = 1;
        bool f = 1;
        dataGridView1->Rows->Add(1);
        while ((line = reader->ReadLine()) != nullptr)
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
    //перехват и обработка исключений
    catch (System::IO::IOException^ e)
    {
        MessageBox::Show("ќшибка при загрузке данных из файла: " + e->Message);
    }
}

System::Void practice::User_database::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    Application::Exit();
}