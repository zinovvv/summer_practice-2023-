#include "Menu_form.h"
#include "Log_in.h"
#include "User_database.h"
#include <iostream>
#include "game_main_menu.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	practice::Menu_form form;
	Application::Run(% form);
}

System::Void practice::Menu_form::exit_item_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

System::Void practice::Menu_form::about_item_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Данная программа позволяет работать в двух режимах: администратор и пользователь. В режиме администратора можно работать с базой данных: Вводить, удалять, редактировать данные, также можно выполнить поиск по запросу. В режиме пользователя можно просматривать базу данных и выполнять поиск по запросу.", "Информация");
}

//переход в режим админа
System::Void practice::Menu_form::admin_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Log_in^ form = gcnew Log_in();
	form->Show();
	this->Hide();
}

//переход в режим пользователя
System::Void practice::Menu_form::user_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	User_database^ form = gcnew User_database();
	form->Show();
	this->Hide();
}

System::Void practice::Menu_form::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

//переход в игру
System::Void practice::Menu_form::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	game_main_menu^ form = gcnew game_main_menu();
	form->Show();
	this->Hide();
}
