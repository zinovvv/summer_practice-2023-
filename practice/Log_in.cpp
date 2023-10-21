#include "Log_in.h"
#include "Admin_database.h"
#include "Menu_form.h"

//переход в режим пользователя
System::Void practice::Log_in::log_in_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ log = login_text->Text;
	String^ pas = password_textBox1->Text;

	if (login_password(log, pas)) {
		Admin_database^ form1 = gcnew Admin_database();
		form1->Show();
		this->Hide();
	}
}

//переход в меню
System::Void practice::Log_in::back_toolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e)
{
	Menu_form^ form = gcnew Menu_form();
	form->Show();
	this->Hide();
}

System::Void practice::Log_in::exit_toolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

System::Void practice::Log_in::about_ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("В этом окне Вам нужно ввести логин и пароль для входа.", "Вход в режим администратора");
}

System::Void practice::Log_in::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

//видимость пароля
System::Void practice::Log_in::checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (checkBox1->Checked)
		password_textBox1->PasswordChar = '\0';
	else password_textBox1->PasswordChar = '*';
}
