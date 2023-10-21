#include "Delete.h"
#include "Admin_database.h"
#include "Edit.h"
#include "Input.h"
#include "Processing_a_request.h"

System::Void practice::Delete::Delete_Load(System::Object^ sender, System::EventArgs^ e)
{
    try
    {
        String^ currentDirectory = Environment::CurrentDirectory;
        String^ filename = "database.txt";
        String^ filePath = System::IO::Path::Combine(currentDirectory, filename);
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

System::Void practice::Delete::вернутьсяНазадToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    Admin_database^ form = gcnew Admin_database();
    form->Show();
    this->Hide();
}

System::Void practice::Delete::выйтиИзПриложенияToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    Application::Exit();
}

//событие нажатия на кнопку удаления
System::Void practice::Delete::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    //проверка поля с номером строки на пустоту
    if (textBox1->TextLength>0)
    {
        int dig = 1;
        for (int i = 0; i < textBox1->TextLength; i++)
        {
            if (!Char::IsDigit(textBox1->Text[i]))
                dig = 0;
        }
        if (dig)
        {
            //конвертирование номера из текстбокса в int
            int number = System::Int32::Parse(textBox1->Text);
            String^ currentDirectory = Environment::CurrentDirectory;
            String^ filename = "database.txt";
            String^ filePath = Path::Combine(currentDirectory, filename);
            StreamReader^ reader = gcnew StreamReader(filePath);
            //открытие вспомогательного файла для записи
            String^ fileName = "temp.txt";
            String^ newfilePath = Path::Combine(currentDirectory, fileName);
            StreamWriter^ sw = gcnew StreamWriter(fileName);
            String^ line;
            int k = 1;
            int f = 1;
            int flag = 1;
            while (f)
            {
                //если введенный номер не совпал с номером диска, то записываю во вспомогательный
                if (number != k)
                {
                    for (int i = 0; i < 5; i++)
                    {

                        line = reader->ReadLine();
                        if (line == nullptr || line == "")
                        {
                            f = 0;
                        }
                        else sw->WriteLine(line);
                    }
                }
                //если совпал и файл не закончился, то просто прочитываю, пропускаю 5 строк
                if (number == k && f) {
                    for (int i = 0; i < 5; i++)
                    {
                        line = reader->ReadLine();
                        if (line == nullptr || line == "")
                        {
                            f = 0;
                        }
                        else flag = 0;
                    }
                }
                //номер диска
                k++;
                //если дошел до конца файла и не нашел подходящей строки, то выводится сообщение об ошибке 
                if (line == nullptr && flag)
                {
                    MessageBox::Show("Введенная строка не существует", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
                    f = 0;
                }
            }
            reader->Close();
            sw->Close();
            //если нашел подходящую строку, то удаляем строку и выводим данные в таблицу, иначе удаляем вспомогательный файл
            if (flag == 0)
            {
                //подтверждение удаления
                System::Windows::Forms::DialogResult result = MessageBox::Show("Вы действительно хотите удалить строку?", "Подтверждение удаления", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
                //проверка выбранного варианта ответа
                if (result == System::Windows::Forms::DialogResult::Yes)
                {
                    try
                    {
                        //удаляю начальный файл, вспомогательный переименовываю
                        System::IO::File::Delete(filePath);
                        System::IO::File::Move(newfilePath, filePath);
                        String^ currentDirectory = Environment::CurrentDirectory;
                        String^ filename = "database.txt";
                        String^ filePath = Path::Combine(currentDirectory, filename);
                        StreamReader^ reader = gcnew StreamReader(filePath);
                        dataGridView1->Rows->Clear();
                        String^ line;
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
                        MessageBox::Show("Строка успешно удалена!", "Успешно!");
                    }

                    catch (IOException^ e)
                    {
                        MessageBox::Show("Ошибка при загрузке данных из файла: " + e->Message);
                    }
                }
            }
            else System::IO::File::Delete(newfilePath);
        }
        else MessageBox::Show("В номере строки должно быть положительное число!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
        
    }
    else MessageBox::Show("Введите номер строки", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
}

System::Void practice::Delete::вводДанныхToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    Input^ form = gcnew Input();
    form->Show();
    this->Hide();
}

System::Void practice::Delete::редактироватьСтрокуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
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

System::Void practice::Delete::выполнитьЗапросToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
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

System::Void practice::Delete::очиститьБазуДанныхToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
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

System::Void practice::Delete::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
    Application::Exit();
}

System::Void practice::Delete::обОкнеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MessageBox::Show("В этом окне можно удалить существующую строку, также имеются переходы на другие окна", "Удаление");
}
