#include "game_settings.h"
#include "game_main_menu.h"
#include "gameplay.h"

System::Void practice::game_settings::âåðíóòüñÿÍàçàäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	game_main_menu^ form = gcnew game_main_menu();
	form->Show();
	this->Hide();
}

System::Void practice::game_settings::âûéòèÈçÏðîãðàììûToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

System::Void practice::game_settings::button8_Click(System::Object^ sender, System::EventArgs^ e)
{
	bool moderadb1 = moderadioButton1->Checked;
	bool moderadb2 = moderadioButton2->Checked;
	bool regionrb1 = regionradb1->Checked;
	bool regionrb2 = regionradb2->Checked;
	bool regionrb3 = regionradb3->Checked;
	bool regionrb4 = regionradb4->Checked;
	bool regionrb5 = regionradb5->Checked;
	bool regionrb6 = regionradb6->Checked;

	gameplay^ form = gcnew gameplay(moderadb1, moderadb2,regionrb1, regionrb2, regionrb3, regionrb4, regionrb5, regionrb6);
	form->Show();
	this->Hide();
}

System::Void practice::game_settings::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}
