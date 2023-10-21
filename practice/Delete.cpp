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
        MessageBox::Show("������ ��� �������� ������ �� �����: " + e->Message);
    }
}

System::Void practice::Delete::��������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    Admin_database^ form = gcnew Admin_database();
    form->Show();
    this->Hide();
}

System::Void practice::Delete::�����������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    Application::Exit();
}

//������� ������� �� ������ ��������
System::Void practice::Delete::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    //�������� ���� � ������� ������ �� �������
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
            //��������������� ������ �� ���������� � int
            int number = System::Int32::Parse(textBox1->Text);
            String^ currentDirectory = Environment::CurrentDirectory;
            String^ filename = "database.txt";
            String^ filePath = Path::Combine(currentDirectory, filename);
            StreamReader^ reader = gcnew StreamReader(filePath);
            //�������� ���������������� ����� ��� ������
            String^ fileName = "temp.txt";
            String^ newfilePath = Path::Combine(currentDirectory, fileName);
            StreamWriter^ sw = gcnew StreamWriter(fileName);
            String^ line;
            int k = 1;
            int f = 1;
            int flag = 1;
            while (f)
            {
                //���� ��������� ����� �� ������ � ������� �����, �� ��������� �� ���������������
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
                //���� ������ � ���� �� ����������, �� ������ ����������, ��������� 5 �����
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
                //����� �����
                k++;
                //���� ����� �� ����� ����� � �� ����� ���������� ������, �� ��������� ��������� �� ������ 
                if (line == nullptr && flag)
                {
                    MessageBox::Show("��������� ������ �� ����������", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
                    f = 0;
                }
            }
            reader->Close();
            sw->Close();
            //���� ����� ���������� ������, �� ������� ������ � ������� ������ � �������, ����� ������� ��������������� ����
            if (flag == 0)
            {
                //������������� ��������
                System::Windows::Forms::DialogResult result = MessageBox::Show("�� ������������� ������ ������� ������?", "������������� ��������", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
                //�������� ���������� �������� ������
                if (result == System::Windows::Forms::DialogResult::Yes)
                {
                    try
                    {
                        //������ ��������� ����, ��������������� ��������������
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
                        MessageBox::Show("������ ������� �������!", "�������!");
                    }

                    catch (IOException^ e)
                    {
                        MessageBox::Show("������ ��� �������� ������ �� �����: " + e->Message);
                    }
                }
            }
            else System::IO::File::Delete(newfilePath);
        }
        else MessageBox::Show("� ������ ������ ������ ���� ������������� �����!", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
        
    }
    else MessageBox::Show("������� ����� ������", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
}

System::Void practice::Delete::����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    Input^ form = gcnew Input();
    form->Show();
    this->Hide();
}

System::Void practice::Delete::�������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
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
    else MessageBox::Show("���� ������ �����!", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
}

System::Void practice::Delete::���������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
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

System::Void practice::Delete::������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
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

System::Void practice::Delete::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
    Application::Exit();
}

System::Void practice::Delete::������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MessageBox::Show("� ���� ���� ����� ������� ������������ ������, ����� ������� �������� �� ������ ����", "��������");
}
