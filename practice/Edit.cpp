#include "Edit.h"
#include "Admin_database.h"
#include "Delete.h"
#include "Processing_a_request.h"
#include "Input.h"

System::Void practice::Edit::Edit_Load(System::Object^ sender, System::EventArgs^ e)
{
    try
    {
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
        MessageBox::Show("������ ��� �������� ������ �� �����: " + e->Message);
    }
}

//��������� ������� ������� �� ������� ����������� ����� ������
System::Void practice::Edit::button_input_Click(System::Object^ sender, System::EventArgs^ e)
{
    //��������, ��� ������� �����
    int flag = 1;
    for (int i = 0; i < textBox6->TextLength; i++)
    {
        if (!Char::IsDigit(textBox6->Text[i]))
            flag = 0;
    }
    //���� ������� �����
    if (flag)
    {
        //�������� �� ������ ����
        if (textBox6->Text->Length > 0)
        {
            int number = System::Int32::Parse(textBox6->Text);
            String^ currentDirectory = Environment::CurrentDirectory;
            String^ filename = "database.txt";
            String^ filePath = System::IO::Path::Combine(currentDirectory, filename);
            System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(filePath);
            String^ line;
            int k = 1;
            int f = 1;
            int error = 1;
            int flag = 1;
            while (f)
            {
                //���� ��������� �����, �� ������ � ������� �����, �� 5 ����� (= 1 ����) ������������
                if (number != k)
                {
                    for (int i = 0; i < 5; i++)
                    {
                        line = reader->ReadLine();
                        if (line == nullptr || line == "")
                        {
                            f = 0;
                        }
                    }
                }
                //���� ������, �� ������� � ���������� ���������� � �����
                if (number == k) {
                    line = reader->ReadLine();
                    if (line == nullptr)
                        f = 0;
                    else {
                        textBox1->Text = line;
                        textBox2->Text = line = reader->ReadLine();
                        textBox3->Text = line = reader->ReadLine();
                        textBox4->Text = line = reader->ReadLine();
                        textBox5->Text = line = reader->ReadLine();
                        flag = 0;
                    }
                }
                //���� ���� ���������� � ������ �� �������
                if (line == nullptr && flag) {
                    MessageBox::Show("������ �� �������", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
                    error = 0;
                    f = 0;
                    //���������� ��������� � �����������, �������� �����������, ������ ����������� �����������
                    textBox1->Clear();
                    textBox2->Clear();
                    textBox3->Clear();
                    textBox4->Clear();
                    textBox5->Clear();
                    checkBox1->Enabled = false;
                    checkBox2->Enabled = false;
                    checkBox3->Enabled = false;
                    checkBox4->Enabled = false;
                    checkBox5->Enabled = false;
                    textBox1->Enabled = false;
                    textBox2->Enabled = false;
                    textBox3->Enabled = false;
                    textBox4->Enabled = false;
                    textBox5->Enabled = false;
                    button_apply->Enabled = false;
                }
                //����� �����
                k++;
            }
            reader->Close();
            //���� ������ �������
            if (error)
            {
                MessageBox::Show("������ �������!", "�������!");
                //��������� ���������
                checkBox1->Enabled = true;
                checkBox2->Enabled = true;
                checkBox3->Enabled = true;
                checkBox4->Enabled = true;
                checkBox5->Enabled = true;
                if (checkBox1->Checked == true)
                    textBox1->Enabled = true;
                if (checkBox2->Checked == true)
                    textBox2->Enabled = true;
                if (checkBox3->Checked == true)
                    textBox3->Enabled = true;
                if (checkBox4->Checked == true)
                    textBox4->Enabled = true;
                if (checkBox5->Checked == true)
                    textBox5->Enabled = true;
            }
        }
        else MessageBox::Show("������� ����� ������!", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    else MessageBox::Show("� ������ ������ ������ ���� ������������� �����!", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
    
}

System::Void practice::Edit::back_toolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e)
{
    Admin_database^ form = gcnew Admin_database();
    form->Show();
    this->Hide();
}

//������ ����������� ���������
System::Void practice::Edit::button_apply_Click(System::Object^ sender, System::EventArgs^ e)
{
    //�������� �� ������ ����
    if (textBox1->Text->Length > 0 && textBox2->Text->Length > 0 && textBox3->Text->Length > 0 && textBox4->Text->Length > 0 && textBox5->Text->Length > 0)
    {
        //���� ���� �� ����� �������
        if (checkBox1->Checked == true || checkBox2->Checked == true || checkBox3->Checked == true || checkBox4->Checked == true || checkBox5->Checked == true)
        {
            
            int number = System::Int32::Parse(textBox6->Text);
            String^ currentDirectory = Environment::CurrentDirectory;
            String^ filename = "database.txt";
            String^ filePath = System::IO::Path::Combine(currentDirectory, filename);
            System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(filePath);
            //��������� ��������������� ���� ��� ������
            String^ fileName = "temp.txt";
            String^ newfilePath = System::IO::Path::Combine(currentDirectory, fileName);
            System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(fileName);
            String^ line;
            int k = 1;
            int f = 1;
            while (f)
            {
                //���� ����� ����� �� ������ � ��������� �������, �� ���������� �� ��������������� ����
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
                //���� ������, �� ����� ���� �������� ���������� � ���� ������ �� �����������
                if (number == k) {
               
                    int f[3] = { 0,0,0 };
                    bool y = 0;
                    int year;
                    int quantity;
                    int price;
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

                    for (int i = 0; i < 3; i++) {
                        if (f[i] == 1 || y)
                        {
                            MessageBox::Show("������! �������� ������ ����, ���������� ��� ����", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
                            f[0] = 1;
                            break;
                        }
                    }
                    if (f[0] != 1 && y == 0) {
                        for (int i = 0; i < 5; i++)
                        {
                            line = reader->ReadLine();
                            if (line == nullptr || line == "")
                            {
                                int f = 0;
                            }
                        }
                        sw->WriteLine(textBox1->Text);
                        sw->WriteLine(textBox2->Text);
                        sw->WriteLine(year);
                        sw->WriteLine(quantity);
                        sw->WriteLine(price);
                        MessageBox::Show("������ ��������!", "�������!");
                    }
                }
                k++;
            }
            reader->Close();
            sw->Close();
            //�������, ���������������
            System::IO::File::Delete(filePath);
            System::IO::File::Move(newfilePath, filePath);
            try
            {
                String^ currentDirectory = Environment::CurrentDirectory;
                String^ filename = "database.txt";
                String^ filePath = System::IO::Path::Combine(currentDirectory, filename);
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
                MessageBox::Show("������ ��� �������� ������ �� �����: " + e->Message);
            }

        }
        else MessageBox::Show("�������� ���� �� ����� ��� ��������������", "��������!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
    }
    else MessageBox::Show("������� ������ ����(�)", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
}

System::Void practice::Edit::exit_toolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e)
{
    Application::Exit();
}

System::Void practice::Edit::�������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
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
    else MessageBox::Show("���� ������ �����!", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
}

System::Void practice::Edit::������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    System::Windows::Forms::DialogResult result = MessageBox::Show("�� ������������� ������ ������� ���� ������?", "������������� ��������", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
    if (result == System::Windows::Forms::DialogResult::Yes)
    {
        String^ fileName = "database.txt";
        StreamWriter^ sw = gcnew StreamWriter(fileName);
        sw->Close();
        dataGridView1->Rows->Clear();
        MessageBox::Show("���� ������ ������� �������!", "�������!");
    }
}

System::Void practice::Edit::checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{

    if (checkBox1->Checked == true)
    {
        textBox1->Enabled = true;
        button_apply->Enabled = true;
    }
    if (checkBox1->Checked == false)
    {
        textBox1->Enabled = false;

    }
    
}

System::Void practice::Edit::checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (checkBox2->Checked == true)
    {
        textBox2->Enabled = true;
        button_apply->Enabled = true;
    }
    if (checkBox2->Checked == false)
    {
        textBox2->Enabled = false;
    }
}

System::Void practice::Edit::checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (checkBox3->Checked == true)
    {
        textBox3->Enabled = true;
        button_apply->Enabled = true;
    }
    if (checkBox3->Checked == false)
    {
        textBox3->Enabled = false;
    }
}

System::Void practice::Edit::checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (checkBox4->Checked == true)
    {
        textBox4->Enabled = true;
        button_apply->Enabled = true;
    }
    if (checkBox4->Checked == false)
    {
        textBox4->Enabled = false;
    }
}

System::Void practice::Edit::checkBox5_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (checkBox5->Checked == true)
    {
        textBox5->Enabled = true;
        button_apply->Enabled = true;
    }
    if (checkBox5->Checked == false)
    {
        textBox5->Enabled = false;
    }
}

System::Void practice::Edit::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
    Application::Exit();
}

System::Void practice::Edit::����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    String^ currentDirectory = Environment::CurrentDirectory;
    String^ filename = "database.txt";
    String^ filePath = Path::Combine(currentDirectory, filename);
    System::IO::FileInfo^ fileInfo = gcnew System::IO::FileInfo(filePath);
    if (fileInfo->Length != 0)
    {
        Input^ form = gcnew Input();
        form->Show();
        this->Hide();
    }
    else MessageBox::Show("���� ������ �����!", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
}

System::Void practice::Edit::���������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
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
    else MessageBox::Show("���� ������ �����!", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
}

System::Void practice::Edit::about_ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MessageBox::Show("� ������ ���� ����� ������ �����, ������������ ������, � �������� ����� ���� � ���� ������, ����� ������� �������� �� ������ ����", "��������������");
}
