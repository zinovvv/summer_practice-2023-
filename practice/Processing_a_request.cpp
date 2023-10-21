#include "Processing_a_request.h"
#include "Admin_database.h"
#include "Input.h"
#include "Delete.h"
#include "Edit.h"
#include "User_database.h"

System::Void practice::Processing_a_request::back_to_menu_item_Click(System::Object^ sender, System::EventArgs^ e)
{
    //если вошел в запрос из базы данных админа, то возвращаюсь в базу данных админа
    if (dynamic_cast<Admin_database^>(parentForm) != nullptr || dynamic_cast<Input^>(parentForm) != nullptr || dynamic_cast<Delete^>(parentForm) != nullptr || dynamic_cast<Edit^>(parentForm) != nullptr)
    {
        Admin_database^ form = gcnew Admin_database();
        form->Show();
        this->Hide();
    }
    //если вошел в запрос из базы данных пользователя, то возвращаюсь в базу данных пользователя
    if(dynamic_cast<User_database^>(parentForm) != nullptr) {
        User_database^ form = gcnew User_database();
        form->Show();
        this->Hide();
    }
}

System::Void practice::Processing_a_request::exit_item2_Click(System::Object^ sender, System::EventArgs^ e)
{
    Application::Exit();
}

System::Void practice::Processing_a_request::about_item_Click(System::Object^ sender, System::EventArgs^ e)
{
    MessageBox::Show("В этом окне можно выполнить поиск по любому из критериев, также если был выполнен вход из режима администратора, то можно переходить в другие окна", "Запрос");
}

System::Void practice::Processing_a_request::checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (checkBox1->Checked == true)
	{
		textBox1->Enabled = true;
        button1->Enabled = true;
	}
	if (checkBox1->Checked == false)
	{
		textBox1->Enabled = false;
	}
}

System::Void practice::Processing_a_request::checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (checkBox2->Checked == true)
	{
		textBox2->Enabled = true;
        button1->Enabled = true;

	}
	if (checkBox2->Checked == false)
	{
		textBox2->Enabled = false;
	}

}

System::Void practice::Processing_a_request::checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (checkBox3->Checked == true)
	{
		textBox3->Enabled = true;
		panel1->Enabled = true;
        button1->Enabled = true;
	}
	if (checkBox3->Checked == false)
	{
		textBox3->Enabled = false;
		panel1->Enabled = false;
	}
}

System::Void practice::Processing_a_request::checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (checkBox4->Checked == true)
	{
		textBox4->Enabled = true;
		panel2->Enabled = true;
        button1->Enabled = true;
	}
	if (checkBox4->Checked == false)
	{
		textBox4->Enabled = false;
		panel2->Enabled = false;
	}
}

System::Void practice::Processing_a_request::checkBox5_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (checkBox5->Checked == true)
	{
		textBox5->Enabled = true;
		panel3->Enabled = true;
        button1->Enabled = true;
	}
	if (checkBox5->Checked == false)
	{
		textBox5->Enabled = false;
		panel3->Enabled = false;
	}
}

//обработка кнопки выполнить запрос
System::Void practice::Processing_a_request::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    //если хотя бы одно из полей активно
    if(checkBox1->Checked == true||checkBox2->Checked == true||checkBox3->Checked == true || checkBox4->Checked == true ||checkBox5->Checked == true)
    {
        //если есть пустые включенные поля, то ошибка
        if ((textBox1->TextLength == 0 && checkBox1->Checked) || (textBox2->TextLength == 0 && checkBox2->Checked) || (textBox3->TextLength == 0 && checkBox3->Checked) || (textBox4->TextLength == 0 && checkBox4->Checked) || (textBox5->TextLength == 0 && checkBox5->Checked))
            MessageBox::Show("Есть пустая строка с критерием поиска!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
        //иначе работа продолжается
        else
        {
            int Year;
            int Quantity;
            int Price;
            int notdigit[3] = { 0,0,0 };
            int ye = 0;
            //проверка на пустое поле год выпуска и на ввод числа
            if (checkBox3->Checked == true && textBox3->TextLength != 0)
            {
                for (int i = 0; i < textBox3->Text->Length; i++)
                {
                    if (!Char::IsDigit(textBox3->Text[i]))
                    {
                        notdigit[0] = 1;
                    }
                }
                if (notdigit[0] == 0) {
                    Year = System::Int32::Parse(textBox3->Text);
                    if (Year < 1982 || Year>2023)
                        ye = 1;
                }
            }
            //проверка количества
            if (checkBox4->Checked == true && textBox4->TextLength != 0)
            {
                for (int i = 0; i < textBox4->Text->Length; i++)
                {
                    if (!Char::IsDigit(textBox4->Text[i]))
                    {
                        notdigit[1] = 1;
                    }
                }
                if (notdigit[1] == 0) {
                    Quantity = System::Int32::Parse(textBox4->Text);
                    if (Quantity < 0)
                        ye = 1;
                }
            }
            //проверка цены
            if (checkBox5->Checked == true && textBox5->TextLength != 0)
            {
                for (int i = 0; i < textBox5->Text->Length; i++)
                {
                    if (!Char::IsDigit(textBox5->Text[i]))
                    {
                        notdigit[2] = 1;
                    }
                }
                if (notdigit[2] == 0) {
                    Price = System::Int32::Parse(textBox5->Text);
                    if (Price < 0)
                        ye = 1;
                }
            }
            //если есть ошибка то флаг обнуляем
            int flag_digit = 1;
            for (int i = 0; i < 3; i++) {
                if (notdigit[i] == 1 || ye)
                {
                    flag_digit = 0;
                    break;
                }
            }
            //если нет ошибки, то продолжаем
            if (flag_digit)
            {
                String^ currentDirectory = Environment::CurrentDirectory;
                String^ filename = "database.txt";
                String^ filePath = System::IO::Path::Combine(currentDirectory, filename);
                System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(filePath);
                //открытие вспомогательного файла для записи
                String^ fileName = "temp.txt";
                String^ newfilePath = System::IO::Path::Combine(currentDirectory, fileName);
                System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(newfilePath);
                String^ line;
                String^ name;
                String^ type;
                String^ y;
                String^ q;
                String^ p;
                int year;
                int quantity;
                int price;
                int k = 1;
                int f = 1;
                //полностью переписываем данные во вспомогательный файл
                while (f)
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
                reader->Close();
                sw->Close();

                int err = 0;
                f = 1;
                //открываем файл, в который скопировали данные, для чтения
                String^ fileName1 = "temp.txt";
                String^ newfilePath1 = System::IO::Path::Combine(currentDirectory, fileName1);
                System::IO::StreamReader^ reader1 = gcnew System::IO::StreamReader(newfilePath1);
                //создаем новый файл для записи
                String^ fileName2 = "temp2.txt";
                String^ newfilePath2 = System::IO::Path::Combine(currentDirectory, fileName2);
                System::IO::StreamWriter^ sw2 = gcnew System::IO::StreamWriter(newfilePath2);

                int b[5] = { 0, 0, 0, 0, 0 };
                //проверка на пустое поле название
                if (checkBox1->Checked && textBox1->TextLength > 0)
                {
                    err = 1;
                    do
                    {
                        //считываем данные
                        name = reader1->ReadLine();
                        if (name == nullptr)
                            break;
                        type = reader1->ReadLine();
                        year = System::Int32::Parse(y = reader1->ReadLine());
                        quantity = System::Int32::Parse(q = reader1->ReadLine());
                        price = System::Int32::Parse(p = reader1->ReadLine());
                        //сравниваем название с введенным, если совпало, то записываем в новый файл
                        if (name != nullptr && String::Compare(textBox1->Text, name) == 0)
                        {
                            b[0] = 1;
                            sw2->WriteLine(name);
                            sw2->WriteLine(type);
                            sw2->WriteLine(y);
                            sw2->WriteLine(q);
                            sw2->WriteLine(p);
                            err = 0;
                        }
                    } while (name != nullptr);
                }
                //закрываем оба файла
                reader1->Close();
                sw2->Close();
                //если данные не совпали, выводим сообщение
                if (b[0] == 0 && checkBox1->Checked && err == 1) {
                    f = 0;
                    MessageBox::Show("Нет подходящих строк", "Неуспешно", MessageBoxButtons::OK, MessageBoxIcon::Warning);
                    err = 0;
                }
                //если совпали, то удаляем файл первый файл, второй переименовываем
                if (b[0] == 1)
                {
                    System::IO::File::Delete(newfilePath1);
                    System::IO::File::Move(newfilePath2, newfilePath1);
                }
                //открываем снова
                reader1 = gcnew System::IO::StreamReader(newfilePath1);
                sw2 = gcnew System::IO::StreamWriter(newfilePath2);

                //тип носителя
                if (checkBox2->Checked == true && textBox2->TextLength > 0) {
                    err = 1;
                    do
                    {
                        name = reader1->ReadLine();
                        if (name == nullptr)
                            break;
                        type = reader1->ReadLine();
                        year = System::Int32::Parse(y = reader1->ReadLine());
                        quantity = System::Int32::Parse(q = reader1->ReadLine());
                        price = System::Int32::Parse(p = reader1->ReadLine());
                        if (String::Compare(textBox2->Text, type) == 0)
                        {
                            b[1] = 1;
                            err = 0;
                            sw2->WriteLine(name);
                            sw2->WriteLine(type);
                            sw2->WriteLine(y);
                            sw2->WriteLine(q);
                            sw2->WriteLine(p);

                        }
                    } while (name != nullptr);
                }
                reader1->Close();
                sw2->Close();
                if (b[1] == 0 && checkBox2->Checked && err == 1 && f) {
                    f = 0;
                    MessageBox::Show("Нет подходящих строк", "Неуспешно", MessageBoxButtons::OK, MessageBoxIcon::Warning);
                    err = 0;
                }
                if (b[1] == 1)
                {
                    System::IO::File::Delete(newfilePath1);
                    System::IO::File::Move(newfilePath2, newfilePath1);

                }
                reader1 = gcnew System::IO::StreamReader(newfilePath1);
                sw2 = gcnew System::IO::StreamWriter(newfilePath2);

                //год
                if (checkBox3->Checked == true && textBox3->TextLength == 4) {
                    err = 1;
                    do
                    {
                        int Year = System::Int32::Parse(textBox3->Text);
                        name = reader1->ReadLine();
                        if (name == nullptr)
                            break;
                        type = reader1->ReadLine();
                        year = System::Int32::Parse(y = reader1->ReadLine());
                        quantity = System::Int32::Parse(q = reader1->ReadLine());
                        price = System::Int32::Parse(p = reader1->ReadLine());
                        if (radioButton_y1->Checked)
                        {
                            if (Year < year)
                            {
                                b[2] = 1;
                                sw2->WriteLine(name);
                                sw2->WriteLine(type);
                                sw2->WriteLine(y);
                                sw2->WriteLine(q);
                                sw2->WriteLine(p);
                                err = 0;
                            }
                        }
                        if (radioButton_y2->Checked)
                        {
                            if (Year == year)
                            {
                                b[2] = 1;
                                sw2->WriteLine(name);
                                sw2->WriteLine(type);
                                sw2->WriteLine(y);
                                sw2->WriteLine(q);
                                sw2->WriteLine(p);
                                err = 0;
                            }
                        }if (radioButton_y3->Checked)
                        {
                            if (Year > year)
                            {
                                b[2] = 1;
                                sw2->WriteLine(name);
                                sw2->WriteLine(type);
                                sw2->WriteLine(y);
                                sw2->WriteLine(q);
                                sw2->WriteLine(p);
                                err = 0;
                            }
                        }
                    } while (name != nullptr);
                }
                reader1->Close();
                sw2->Close();
                if (b[2] == 0 && checkBox3->Checked && err == 1 && f) {
                    f = 0;
                    MessageBox::Show("Нет подходящих строк", "Неуспешно", MessageBoxButtons::OK, MessageBoxIcon::Warning);
                    err = 0;
                }
                if (b[2] == 1)
                {
                    System::IO::File::Delete(newfilePath1);
                    System::IO::File::Move(newfilePath2, newfilePath1);

                }
                reader1 = gcnew System::IO::StreamReader(newfilePath1);
                sw2 = gcnew System::IO::StreamWriter(newfilePath2);

                //кол-во
                if (checkBox4->Checked == true && textBox4->TextLength > 0) {
                    err = 1;
                    do
                    {
                        int Quantity = System::Int32::Parse(textBox4->Text);
                        name = reader1->ReadLine();
                        if (name == nullptr)
                            break;
                        type = reader1->ReadLine();
                        year = System::Int32::Parse(y = reader1->ReadLine());
                        quantity = System::Int32::Parse(q = reader1->ReadLine());
                        price = System::Int32::Parse(p = reader1->ReadLine());
                        if (radioButton_q1->Checked)
                        {
                            if (Quantity < quantity)
                            {
                                b[3] = 1;
                                sw2->WriteLine(name);
                                sw2->WriteLine(type);
                                sw2->WriteLine(y);
                                sw2->WriteLine(q);
                                sw2->WriteLine(p);
                                err = 0;
                            }
                        }
                        if (radioButton_q2->Checked)
                        {
                            if (Quantity == quantity)
                            {
                                b[3] = 1;
                                sw2->WriteLine(name);
                                sw2->WriteLine(type);
                                sw2->WriteLine(y);
                                sw2->WriteLine(q);
                                sw2->WriteLine(p);
                                err = 0;
                            }
                        }if (radioButton_q3->Checked)
                        {
                            if (Quantity > quantity)
                            {
                                b[3] = 1;
                                sw2->WriteLine(name);
                                sw2->WriteLine(type);
                                sw2->WriteLine(y);
                                sw2->WriteLine(q);
                                sw2->WriteLine(p);
                                err = 0;
                            }
                        }
                    } while (name != nullptr);
                }
                reader1->Close();
                sw2->Close();
                if (b[3] == 0 && checkBox4->Checked && err == 1 && f) {
                    f = 0;
                    MessageBox::Show("Нет подходящих строк", "Неуспешно", MessageBoxButtons::OK, MessageBoxIcon::Warning);
                    err = 0;
                }
                if (b[3] == 1)
                {
                    System::IO::File::Delete(newfilePath1);
                    System::IO::File::Move(newfilePath2, newfilePath1);

                }
                reader1 = gcnew System::IO::StreamReader(newfilePath1);
                sw2 = gcnew System::IO::StreamWriter(newfilePath2);

                //цена
                if (checkBox5->Checked == true && textBox5->TextLength > 0) {
                    err = 1;
                    do
                    {

                        int Price = System::Int32::Parse(textBox5->Text);
                        name = reader1->ReadLine();
                        if (name == nullptr)
                            break;
                        type = reader1->ReadLine();
                        year = System::Int32::Parse(y = reader1->ReadLine());
                        quantity = System::Int32::Parse(q = reader1->ReadLine());
                        price = System::Int32::Parse(p = reader1->ReadLine());
                        if (radioButton_p1->Checked)
                        {
                            if (Price < price)
                            {
                                b[4] = 1;
                                sw2->WriteLine(name);
                                sw2->WriteLine(type);
                                sw2->WriteLine(y);
                                sw2->WriteLine(q);
                                sw2->WriteLine(p);
                                err = 0;
                            }
                        }
                        if (radioButton_p2->Checked)
                        {
                            if (Price == price)
                            {
                                b[4] = 1;
                                sw2->WriteLine(name);
                                sw2->WriteLine(type);
                                sw2->WriteLine(y);
                                sw2->WriteLine(q);
                                sw2->WriteLine(p);
                                err = 0;
                            }
                        }if (radioButton_p3->Checked)
                        {
                            if (Price > price)
                            {
                                b[4] = 1;
                                sw2->WriteLine(name);
                                sw2->WriteLine(type);
                                sw2->WriteLine(y);
                                sw2->WriteLine(q);
                                sw2->WriteLine(p);
                                err = 0;
                            }
                        }
                    } while (name != nullptr);
                }
                reader1->Close();
                sw2->Close();

                if (b[4] == 0 && checkBox5->Checked && err == 1 && f) {
                    f = 0;
                    MessageBox::Show("Нет подходящих строк", "Неуспешно", MessageBoxButtons::OK, MessageBoxIcon::Warning);
                    err = 0;
                }
                if (b[4] == 1)
                {
                    System::IO::File::Delete(newfilePath1);
                    System::IO::File::Move(newfilePath2, newfilePath1);

                }
                
                //если строки нашлись, то выводим данные, иначе очищаем таблицу
                if (f)
                {
                    try
                    {
                        String^ currentDirectory = Environment::CurrentDirectory;
                        String^ filenamee = "temp.txt";
                        String^ filePathh = System::IO::Path::Combine(currentDirectory, filenamee);
                        System::IO::StreamReader^ readerr = gcnew System::IO::StreamReader(filePathh);
                        dataGridView1->Rows->Clear();
                        String^ line;
                        int i = 0, j = 1;
                        bool f = 1;
                        dataGridView1->Rows->Add(1);
                        while ((line = readerr->ReadLine()) != nullptr && f)
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
                        readerr->Close();
                        //удаляются оба вспомогательных файла
                        System::IO::File::Delete(filePathh);
                        System::IO::File::Delete(newfilePath2);
                        MessageBox::Show("Строки найдены!", "Успешно!");
                    }
                    catch (System::IO::IOException^ e)
                    {
                        MessageBox::Show("Ошибка при загрузке данных из файла: " + e->Message);
                    }
                }
                else dataGridView1->Rows->Clear();
            }
            else MessageBox::Show("Ошибка! Неверный формат года, количества или цены", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }
    else MessageBox::Show("Выберите критерии поиска!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
}

System::Void practice::Processing_a_request::Processing_a_request_Load(System::Object^ sender, System::EventArgs^ e)
{
    try
    {
        //если запущено из режима админа, то кнопка действия - доступна
        if (dynamic_cast<Admin_database^>(parentForm) != nullptr|| dynamic_cast<Input^>(parentForm) != nullptr|| dynamic_cast<Delete^>(parentForm) != nullptr|| dynamic_cast<Edit^>(parentForm) != nullptr)
        {
            действияToolStripMenuItem->Visible = true;
        }
        else
        {
            действияToolStripMenuItem->Visible = false;
        }
        String^ currentDirectory = Environment::CurrentDirectory;
        String^ filename = "database.txt";
        String^ filePath = System::IO::Path::Combine(currentDirectory, filename);
        System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(filePath);
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
    catch (System::IO::IOException^ e)
    {
        MessageBox::Show("Ошибка при загрузке данных из файла: " + e->Message);
    }
}

//кнопка вывода базы данных
System::Void practice::Processing_a_request::button2_Click(System::Object^ sender, System::EventArgs^ e)
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
    }
    catch (System::IO::IOException^ e)
    {
        MessageBox::Show("Ошибка при загрузке данных из файла: " + e->Message);
    }
}

System::Void practice::Processing_a_request::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
    Application::Exit();
}

System::Void practice::Processing_a_request::вводДанныхToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    Input^ form = gcnew Input();
    form->Show();
    this->Hide();
}

System::Void practice::Processing_a_request::удалениеСтрокиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
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

System::Void practice::Processing_a_request::редактированиеСтрокиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
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

System::Void practice::Processing_a_request::очиститьБазуДанныхToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
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