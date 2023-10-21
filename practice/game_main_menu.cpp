#include "game_main_menu.h"
#include "Menu_form.h"
#include "game_settings.h"

System::Void practice::game_main_menu::âåðíóòüñÿÍàçàäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Menu_form^ form = gcnew Menu_form();
	form->Show();
	this->Hide();
}

System::Void practice::game_main_menu::âûéòèÈçÏðîãðàììûToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

System::Void practice::game_main_menu::admin_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	game_settings^ form = gcnew game_settings();
	form->Show();
	this->Hide();
}

System::Void practice::game_main_menu::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}
