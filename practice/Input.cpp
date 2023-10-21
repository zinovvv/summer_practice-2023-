#include "Input.h"
#include "Admin_database.h"
#include "Delete.h"
#include "Edit.h"
#include "Processing_a_request.h"

//событие нажатия на кнопку ввод
System::Void practice::Input::button_input_Click(System::Object^ sender, System::EventArgs^ e)
{
    //проверка на пустые поля
    if (textBox1->TextLength>0&& textBox2->TextLength > 0&&textBox3->TextLength > 0 && textBox4->TextLength > 0&&textBox5->TextLength > 0)
    {
        int f[3] = { 0,0,0 };
        bool y = 0;
        int year;
        int quantity;
        int price;
        //проверка на ввод года
        for (int i = 0; i < textBox3->Text->Length; i++)
        {
            if (!Char::IsDigit(textBox3->Text[i]))
            {
                f[0] = 1;
            }
        }
        if (f[0] == 0) {
            year = System::Int32::Parse(textBox3->Text);
            if (year < 1982 || year>2023)
                y = 1;
        }
        //проверка на ввод кол-ва
        for (int i = 0; i < textBox4->Text->Length; i++)
        {
            if (!Char::IsDigit(textBox4->Text[i]))
            {
                f[1] = 1;
            }
        }
        if (f[1] == 0) {
            quantity = System::Int32::Parse(textBox4->Text);
            if (quantity < 0)
                y = 1;
        }
        //проверка на ввод цены
        for (int i = 0; i < textBox5->Text->Length; i++)
        {
            if (!Char::IsDigit(textBox5->Text[i]))
            {
                f[2] = 1;
            }
        }
        if (f[2] == 0) {
            price = System::Int32::Parse(textBox5->Text);
            if (price < 0)
                y = 1;
        }
        //если есть ошибка, то выводится сообщение
        for (int i = 0; i < 3; i++) {
            if (f[i] == 1 || y)
            {
                MessageBox::Show("Ошибка! Неверный формат года, количества или цены", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
                f[0] = 1;
                break;
            }

        }
        //если условия выполняются, то работа продолжается
        if (f[0] != 1 && y == 0) {
            //открываю файл в режиме записи, записываю данные
            String^ currentDirectory = Environment::CurrentDirectory;
            String^ filename = "database.txt";
            String^ filePath = Path::Combine(currentDirectory, filename);
            StreamWriter^ writer = gcnew StreamWriter(filePath, true);
            writer->WriteLine(textBox1->Text);
            writer->WriteLine(textBox2->Text);
            writer->WriteLine(year);
            writer->WriteLine(quantity);
            writer->WriteLine(price);
            writer->Close();
            MessageBox::Show("Строка успешно добавлена!", "Успешно!");
            //выводим данные в таблицу
            try
            {
                String^ currentDirectory = Environment::CurrentDirectory;
                String^ filename = "database.txt";
                String^ filePath = Path::Combine(currentDirectory, filename);
                StreamReader^ reader = gcnew StreamReader(filePath);
                dataGridView1->Rows->Clear();
                String^ line;
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
            catch (IOException^ e)
            {
                MessageBox::Show("Ошибка при загрузке данных из файла: " + e->Message);
            }
        }
    }
    else MessageBox::Show("Имеются пустые поля!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
}

System::Void practice::Input::back_toolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e)
{
    Admin_database^ form = gcnew Admin_database();
    form->Show();
    this->Hide();
}

System::Void practice::Input::exit_toolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e)
{
    Application::Exit();
}

System::Void practice::Input::очиститьБазуДанныхToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
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

System::Void practice::Input::Input_Load(System::Object^ sender, System::EventArgs^ e)
{
    try
    {
        String^ currentDirectory = Environment::CurrentDirectory;
        String^ filename = "database.txt";
        String^ filePath = Path::Combine(currentDirectory, filename);
        StreamReader^ reader = gcnew StreamReader(filePath);
        dataGridView1->Rows->Clear();
        String^ line;
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
    catch (IOException^ e)
    {
        MessageBox::Show("Ошибка при загрузке данных из файла: " + e->Message);
    }
}

System::Void practice::Input::удалитьСтрокуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
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

System::Void practice::Input::редактироватьСтрокуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
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

System::Void practice::Input::выполнитьЗапросToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
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
    else MessageBox::Show("База данных пуста!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
}

System::Void practice::Input::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
    Application::Exit();
}

System::Void practice::Input::about_ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MessageBox::Show("В данном окне можно вводить построчно данные, также имеются переходы на другие окна");
}
