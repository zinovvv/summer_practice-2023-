#include "gameplay.h"
#include <cstdlib>
#include <ctime>
#include <string>
#include <fstream>
using namespace System;
using namespace System::Collections::Generic;

 // ������������ ���������� ����������
int randomIndex;
const int MaxCountries = 1000;
System::Void practice::gameplay::gameplay_Load(System::Object^ sender, System::EventArgs^ e)
{
    if (moderadb1)
    {
        state_tb->Visible = false;
		if (regionrb1) {
			
			String^ filename = "Europe.txt";
			array<String^>^ countries = gcnew array<String^>(MaxCountries);
			array<String^>^ capitals = gcnew array<String^>(MaxCountries);
			int countryCount = 0; // ���������� ��������� ����������

			try
			{
				System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(filename, System::Text::Encoding::UTF8);
				String^ line;
				while ((line = reader->ReadLine()) != nullptr)
				{
					int delimiterPos = line->IndexOf(';');
					if (delimiterPos != -1 && countryCount < MaxCountries)
					{
						String^ country = line->Substring(0, delimiterPos);
						String^ capital = line->Substring(delimiterPos + 1);
						if (capital->Length > 0 && capital[capital->Length - 1] == ';')
						{
							capital = capital->Substring(0, capital->Length - 1);
						}
						countries[countryCount] = country;
						capitals[countryCount] = capital;

						countryCount++;
					}
				}
				reader->Close();
			}
			catch (Exception^ ex)
			{
				// ��������� ����������, ���� ������ �� ����� �� �������
			}

			System::Random^ random = gcnew System::Random();
			int randomIndex = random->Next(countryCount); // ��������� ������ �����������
			String^ capital = capitals[randomIndex];

			// ����� ������� � TextBox
			textBox_question->Text = capital;

			// �������� ��������� TextBox'�� ��� ����������
			List<TextBox^>^ countryTextBoxes = gcnew List<TextBox^>();
			countryTextBoxes->Add(answer1);
			countryTextBoxes->Add(answer2);
			countryTextBoxes->Add(answer3);
			countryTextBoxes->Add(answer4);
			countryTextBoxes->Add(answer5);

			// ��������� ������ ��� ���������� ������
			int answerIndex = random->Next(countryTextBoxes->Count);

			// ����� ���������� � TextBox'�
			for (int i = 0; i < countryTextBoxes->Count; i++)
			{
				if (i == answerIndex) // ���� ������� ������ ������������� ������
				{
					countryTextBoxes[i]->Text = countries[randomIndex];
				}
				else
				{
					int randomCountryIndex = random->Next(countryCount);
					countryTextBoxes[i]->Text = countries[randomCountryIndex];
				}
			}

		}
		if (regionrb2) {
			const int MaxCountries = 100; // ������������ ���������� ����������
			String^ filename = "America.txt";
			array<String^>^ countries = gcnew array<String^>(MaxCountries);
			array<String^>^ capitals = gcnew array<String^>(MaxCountries);
			int countryCount = 0; // ���������� ��������� ����������

			try
			{
				System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(filename, System::Text::Encoding::UTF8);
				String^ line;
				while ((line = reader->ReadLine()) != nullptr)
				{
					int delimiterPos = line->IndexOf(';');
					if (delimiterPos != -1 && countryCount < MaxCountries)
					{
						String^ country = line->Substring(0, delimiterPos);
						String^ capital = line->Substring(delimiterPos + 1);
						if (capital->Length > 0 && capital[capital->Length - 1] == ';')
						{
							capital = capital->Substring(0, capital->Length - 1);
						}
						countries[countryCount] = country;
						capitals[countryCount] = capital;

						countryCount++;
					}
				}
				reader->Close();
			}
			catch (Exception^ ex)
			{
				// ��������� ����������, ���� ������ �� ����� �� �������
			}

			System::Random^ random = gcnew System::Random();
			int randomIndex = random->Next(countryCount); // ��������� ������ �����������
			String^ capital = capitals[randomIndex];

			// ����� ������� � TextBox
			textBox_question->Text = capital;

			// �������� ��������� TextBox'�� ��� ����������
			List<TextBox^>^ countryTextBoxes = gcnew List<TextBox^>();
			countryTextBoxes->Add(answer1);
			countryTextBoxes->Add(answer2);
			countryTextBoxes->Add(answer3);
			countryTextBoxes->Add(answer4);
			countryTextBoxes->Add(answer5);

			// ��������� ������ ��� ���������� ������
			int answerIndex = random->Next(countryTextBoxes->Count);

			// ����� ���������� � TextBox'�
			for (int i = 0; i < countryTextBoxes->Count; i++)
			{
				if (i == answerIndex) // ���� ������� ������ ������������� ������
				{
					countryTextBoxes[i]->Text = countries[randomIndex];
				}
				else
				{
					int randomCountryIndex = random->Next(countryCount);
					countryTextBoxes[i]->Text = countries[randomCountryIndex];
				}
			}

		}
		if (regionrb3) {
			const int MaxCountries = 100; // ������������ ���������� ����������
			String^ filename = "Asia.txt";
			array<String^>^ countries = gcnew array<String^>(MaxCountries);
			array<String^>^ capitals = gcnew array<String^>(MaxCountries);
			int countryCount = 0; // ���������� ��������� ����������

			try
			{
				System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(filename, System::Text::Encoding::UTF8);
				String^ line;
				while ((line = reader->ReadLine()) != nullptr)
				{
					int delimiterPos = line->IndexOf(';');
					if (delimiterPos != -1 && countryCount < MaxCountries)
					{
						String^ country = line->Substring(0, delimiterPos);
						String^ capital = line->Substring(delimiterPos + 1);
						if (capital->Length > 0 && capital[capital->Length - 1] == ';')
						{
							capital = capital->Substring(0, capital->Length - 1);
						}
						countries[countryCount] = country;
						capitals[countryCount] = capital;

						countryCount++;
					}
				}
				reader->Close();
			}
			catch (Exception^ ex)
			{
				// ��������� ����������, ���� ������ �� ����� �� �������
			}

			System::Random^ random = gcnew System::Random();
			int randomIndex = random->Next(countryCount); // ��������� ������ �����������
			String^ capital = capitals[randomIndex];

			// ����� ������� � TextBox
			textBox_question->Text = capital;

			// �������� ��������� TextBox'�� ��� ����������
			List<TextBox^>^ countryTextBoxes = gcnew List<TextBox^>();
			countryTextBoxes->Add(answer1);
			countryTextBoxes->Add(answer2);
			countryTextBoxes->Add(answer3);
			countryTextBoxes->Add(answer4);
			countryTextBoxes->Add(answer5);

			// ��������� ������ ��� ���������� ������
			int answerIndex = random->Next(countryTextBoxes->Count);

			// ����� ���������� � TextBox'�
			for (int i = 0; i < countryTextBoxes->Count; i++)
			{
				if (i == answerIndex) // ���� ������� ������ ������������� ������
				{
					countryTextBoxes[i]->Text = countries[randomIndex];
				}
				else
				{
					int randomCountryIndex = random->Next(countryCount);
					countryTextBoxes[i]->Text = countries[randomCountryIndex];
				}
			}

		}
		if (regionrb4) {
			const int MaxCountries = 100; // ������������ ���������� ����������
			String^ filename = "Australia_Oceania.txt";
			array<String^>^ countries = gcnew array<String^>(MaxCountries);
			array<String^>^ capitals = gcnew array<String^>(MaxCountries);
			int countryCount = 0; // ���������� ��������� ����������

			try
			{
				System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(filename, System::Text::Encoding::UTF8);
				String^ line;
				while ((line = reader->ReadLine()) != nullptr)
				{
					int delimiterPos = line->IndexOf(';');
					if (delimiterPos != -1 && countryCount < MaxCountries)
					{
						String^ country = line->Substring(0, delimiterPos);
						String^ capital = line->Substring(delimiterPos + 1);
						if (capital->Length > 0 && capital[capital->Length - 1] == ';')
						{
							capital = capital->Substring(0, capital->Length - 1);
						}
						countries[countryCount] = country;
						capitals[countryCount] = capital;

						countryCount++;
					}
				}
				reader->Close();
			}
			catch (Exception^ ex)
			{
				// ��������� ����������, ���� ������ �� ����� �� �������
			}

			System::Random^ random = gcnew System::Random();
			int randomIndex = random->Next(countryCount); // ��������� ������ �����������
			String^ capital = capitals[randomIndex];

			// ����� ������� � TextBox
			textBox_question->Text = capital;

			// �������� ��������� TextBox'�� ��� ����������
			List<TextBox^>^ countryTextBoxes = gcnew List<TextBox^>();
			countryTextBoxes->Add(answer1);
			countryTextBoxes->Add(answer2);
			countryTextBoxes->Add(answer3);
			countryTextBoxes->Add(answer4);
			countryTextBoxes->Add(answer5);

			// ��������� ������ ��� ���������� ������
			int answerIndex = random->Next(countryTextBoxes->Count);

			// ����� ���������� � TextBox'�
			for (int i = 0; i < countryTextBoxes->Count; i++)
			{
				if (i == answerIndex) // ���� ������� ������ ������������� ������
				{
					countryTextBoxes[i]->Text = countries[randomIndex];
				}
				else
				{
					int randomCountryIndex = random->Next(countryCount);
					countryTextBoxes[i]->Text = countries[randomCountryIndex];
				}
			}

		}
		if (regionrb5) {
			const int MaxCountries = 100; // ������������ ���������� ����������
			String^ filename = "Africa.txt";
			array<String^>^ countries = gcnew array<String^>(MaxCountries);
			array<String^>^ capitals = gcnew array<String^>(MaxCountries);
			int countryCount = 0; // ���������� ��������� ����������

			try
			{
				System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(filename, System::Text::Encoding::UTF8);
				String^ line;
				while ((line = reader->ReadLine()) != nullptr)
				{
					int delimiterPos = line->IndexOf(';');
					if (delimiterPos != -1 && countryCount < MaxCountries)
					{
						String^ country = line->Substring(0, delimiterPos);
						String^ capital = line->Substring(delimiterPos + 1);
						if (capital->Length > 0 && capital[capital->Length - 1] == ';')
						{
							capital = capital->Substring(0, capital->Length - 1);
						}
						countries[countryCount] = country;
						capitals[countryCount] = capital;

						countryCount++;
					}
				}
				reader->Close();
			}
			catch (Exception^ ex)
			{
				// ��������� ����������, ���� ������ �� ����� �� �������
			}

			System::Random^ random = gcnew System::Random();
			int randomIndex = random->Next(countryCount); // ��������� ������ �����������
			String^ capital = capitals[randomIndex];

			// ����� ������� � TextBox
			textBox_question->Text = capital;

			// �������� ��������� TextBox'�� ��� ����������
			List<TextBox^>^ countryTextBoxes = gcnew List<TextBox^>();
			countryTextBoxes->Add(answer1);
			countryTextBoxes->Add(answer2);
			countryTextBoxes->Add(answer3);
			countryTextBoxes->Add(answer4);
			countryTextBoxes->Add(answer5);

			// ��������� ������ ��� ���������� ������
			int answerIndex = random->Next(countryTextBoxes->Count);

			// ����� ���������� � TextBox'�
			for (int i = 0; i < countryTextBoxes->Count; i++)
			{
				if (i == answerIndex) // ���� ������� ������ ������������� ������
				{
					countryTextBoxes[i]->Text = countries[randomIndex];
				}
				else
				{
					int randomCountryIndex = random->Next(countryCount);
					countryTextBoxes[i]->Text = countries[randomCountryIndex];
				}
			}

		}
		if (regionrb6) {
			const int MaxCountries = 100; // ������������ ���������� ����������
			String^ filename = "All_regions.txt";
			array<String^>^ countries = gcnew array<String^>(MaxCountries);
			array<String^>^ capitals = gcnew array<String^>(MaxCountries);
			int countryCount = 0; // ���������� ��������� ����������

			try
			{
				System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(filename, System::Text::Encoding::UTF8);
				String^ line;
				while ((line = reader->ReadLine()) != nullptr)
				{
					int delimiterPos = line->IndexOf(';');
					if (delimiterPos != -1 && countryCount < MaxCountries)
					{
						String^ country = line->Substring(0, delimiterPos);
						String^ capital = line->Substring(delimiterPos + 1);
						if (capital->Length > 0 && capital[capital->Length - 1] == ';')
						{
							capital = capital->Substring(0, capital->Length - 1);
						}
						countries[countryCount] = country;
						capitals[countryCount] = capital;

						countryCount++;
					}
				}
				reader->Close();
			}
			catch (Exception^ ex)
			{
				// ��������� ����������, ���� ������ �� ����� �� �������
			}

			System::Random^ random = gcnew System::Random();
			int randomIndex = random->Next(countryCount); // ��������� ������ �����������
			String^ capital = capitals[randomIndex];

			// ����� ������� � TextBox
			textBox_question->Text = capital;

			// �������� ��������� TextBox'�� ��� ����������
			List<TextBox^>^ countryTextBoxes = gcnew List<TextBox^>();
			countryTextBoxes->Add(answer1);
			countryTextBoxes->Add(answer2);
			countryTextBoxes->Add(answer3);
			countryTextBoxes->Add(answer4);
			countryTextBoxes->Add(answer5);

			// ��������� ������ ��� ���������� ������
			int answerIndex = random->Next(countryTextBoxes->Count);

			// ����� ���������� � TextBox'�
			for (int i = 0; i < countryTextBoxes->Count; i++)
			{
				if (i == answerIndex) // ���� ������� ������ ������������� ������
				{
					countryTextBoxes[i]->Text = countries[randomIndex];
				}
				else
				{
					int randomCountryIndex = random->Next(countryCount);
					countryTextBoxes[i]->Text = countries[randomCountryIndex];
				}
			}

		}
    }
    if (moderadb2)
    {
        capital_tb->Visible = false;

		if (regionrb1)
		{
			const int MaxCountries = 100; // ������������ ���������� ����������
			String^ filename = "Europe.txt";
			array<String^>^ countries = gcnew array<String^>(MaxCountries);
			array<String^>^ capitals = gcnew array<String^>(MaxCountries);
			int countryCount = 0; // ���������� ��������� ����������


			try
			{
				System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(filename, System::Text::Encoding::UTF8);
				String^ line;
				while ((line = reader->ReadLine()) != nullptr)
				{
					int delimiterPos = line->IndexOf(';');
					if (delimiterPos != -1 && countryCount < MaxCountries)
					{
						String^ country = line->Substring(0, delimiterPos);
						String^ capital = line->Substring(delimiterPos + 1);
						if (capital->Length > 0 && capital[capital->Length - 1] == ';')
						{
							capital = capital->Substring(0, capital->Length - 1);
						}
						countries[countryCount] = country;
						capitals[countryCount] = capital;

						countryCount++;
					}
				}
				reader->Close();
			}
			catch (Exception^ ex)
			{
				// ��������� ����������, ���� ������ �� ����� �� �������
			}

			System::Random^ random = gcnew System::Random();
			int randomIndex = random->Next(countryCount); // ��������� ������ �����������
			String^ country = countries[randomIndex];

			// ����� ����������� � TextBox
			textBox_question->Text = country;

			// �������� ��������� TextBox'�� ��� ������
			List<TextBox^>^ capitalTextBoxes = gcnew List<TextBox^>();
			capitalTextBoxes->Add(answer1);
			capitalTextBoxes->Add(answer2);
			capitalTextBoxes->Add(answer3);
			capitalTextBoxes->Add(answer4);
			capitalTextBoxes->Add(answer5);

			// ��������� ������ ��� ���������� ������
			int answerIndex = random->Next(capitalTextBoxes->Count);

			// ����� ������ � TextBox'�
			for (int i = 0; i < capitalTextBoxes->Count; i++)
			{
				if (i == answerIndex) // ���� ������� ������ ������������� ������
				{
					capitalTextBoxes[i]->Text = capitals[randomIndex];
				}
				else
				{
					int randomCapitalIndex = random->Next(countryCount);
					capitalTextBoxes[i]->Text = capitals[randomCapitalIndex];
				}
			}
		}
		if (regionrb2) {
			const int MaxCountries = 100; // ������������ ���������� ����������
			String^ filename = "America.txt";
			array<String^>^ countries = gcnew array<String^>(MaxCountries);
			array<String^>^ capitals = gcnew array<String^>(MaxCountries);
			int countryCount = 0; // ���������� ��������� ����������


			try
			{
				System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(filename, System::Text::Encoding::UTF8);
				String^ line;
				while ((line = reader->ReadLine()) != nullptr)
				{
					int delimiterPos = line->IndexOf(';');
					if (delimiterPos != -1 && countryCount < MaxCountries)
					{
						String^ country = line->Substring(0, delimiterPos);
						String^ capital = line->Substring(delimiterPos + 1);
						if (capital->Length > 0 && capital[capital->Length - 1] == ';')
						{
							capital = capital->Substring(0, capital->Length - 1);
						}
						countries[countryCount] = country;
						capitals[countryCount] = capital;

						countryCount++;
					}
				}
				reader->Close();
			}
			catch (Exception^ ex)
			{
				// ��������� ����������, ���� ������ �� ����� �� �������
			}

			System::Random^ random = gcnew System::Random();
			int randomIndex = random->Next(countryCount); // ��������� ������ �����������
			String^ country = countries[randomIndex];

			// ����� ����������� � TextBox
			textBox_question->Text = country;

			// �������� ��������� TextBox'�� ��� ������
			List<TextBox^>^ capitalTextBoxes = gcnew List<TextBox^>();
			capitalTextBoxes->Add(answer1);
			capitalTextBoxes->Add(answer2);
			capitalTextBoxes->Add(answer3);
			capitalTextBoxes->Add(answer4);
			capitalTextBoxes->Add(answer5);

			// ��������� ������ ��� ���������� ������
			int answerIndex = random->Next(capitalTextBoxes->Count);

			// ����� ������ � TextBox'�
			for (int i = 0; i < capitalTextBoxes->Count; i++)
			{
				if (i == answerIndex) // ���� ������� ������ ������������� ������
				{
					capitalTextBoxes[i]->Text = capitals[randomIndex];
				}
				else
				{
					int randomCapitalIndex = random->Next(countryCount);
					capitalTextBoxes[i]->Text = capitals[randomCapitalIndex];
				}
			}
		}
		if (regionrb3) {
			const int MaxCountries = 100; // ������������ ���������� ����������
			String^ filename = "Asia.txt";
			array<String^>^ countries = gcnew array<String^>(MaxCountries);
			array<String^>^ capitals = gcnew array<String^>(MaxCountries);
			int countryCount = 0; // ���������� ��������� ����������


			try
			{
				System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(filename, System::Text::Encoding::UTF8);
				String^ line;
				while ((line = reader->ReadLine()) != nullptr)
				{
					int delimiterPos = line->IndexOf(';');
					if (delimiterPos != -1 && countryCount < MaxCountries)
					{
						String^ country = line->Substring(0, delimiterPos);
						String^ capital = line->Substring(delimiterPos + 1);
						if (capital->Length > 0 && capital[capital->Length - 1] == ';')
						{
							capital = capital->Substring(0, capital->Length - 1);
						}
						countries[countryCount] = country;
						capitals[countryCount] = capital;

						countryCount++;
					}
				}
				reader->Close();
			}
			catch (Exception^ ex)
			{
				// ��������� ����������, ���� ������ �� ����� �� �������
			}

			System::Random^ random = gcnew System::Random();
			int randomIndex = random->Next(countryCount); // ��������� ������ �����������
			String^ country = countries[randomIndex];

			// ����� ����������� � TextBox
			textBox_question->Text = country;

			// �������� ��������� TextBox'�� ��� ������
			List<TextBox^>^ capitalTextBoxes = gcnew List<TextBox^>();
			capitalTextBoxes->Add(answer1);
			capitalTextBoxes->Add(answer2);
			capitalTextBoxes->Add(answer3);
			capitalTextBoxes->Add(answer4);
			capitalTextBoxes->Add(answer5);

			// ��������� ������ ��� ���������� ������
			int answerIndex = random->Next(capitalTextBoxes->Count);

			// ����� ������ � TextBox'�
			for (int i = 0; i < capitalTextBoxes->Count; i++)
			{
				if (i == answerIndex) // ���� ������� ������ ������������� ������
				{
					capitalTextBoxes[i]->Text = capitals[randomIndex];
				}
				else
				{
					int randomCapitalIndex = random->Next(countryCount);
					capitalTextBoxes[i]->Text = capitals[randomCapitalIndex];
				}
			}
		}
		if (regionrb4) {
			const int MaxCountries = 100; // ������������ ���������� ����������
			String^ filename = "Australia_Oceania.txt";
			array<String^>^ countries = gcnew array<String^>(MaxCountries);
			array<String^>^ capitals = gcnew array<String^>(MaxCountries);
			int countryCount = 0; // ���������� ��������� ����������


			try
			{
				System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(filename, System::Text::Encoding::UTF8);
				String^ line;
				while ((line = reader->ReadLine()) != nullptr)
				{
					int delimiterPos = line->IndexOf(';');
					if (delimiterPos != -1 && countryCount < MaxCountries)
					{
						String^ country = line->Substring(0, delimiterPos);
						String^ capital = line->Substring(delimiterPos + 1);
						if (capital->Length > 0 && capital[capital->Length - 1] == ';')
						{
							capital = capital->Substring(0, capital->Length - 1);
						}
						countries[countryCount] = country;
						capitals[countryCount] = capital;

						countryCount++;
					}
				}
				reader->Close();
			}
			catch (Exception^ ex)
			{
				// ��������� ����������, ���� ������ �� ����� �� �������
			}

			System::Random^ random = gcnew System::Random();
			int randomIndex = random->Next(countryCount); // ��������� ������ �����������
			String^ country = countries[randomIndex];

			// ����� ����������� � TextBox
			textBox_question->Text = country;

			// �������� ��������� TextBox'�� ��� ������
			List<TextBox^>^ capitalTextBoxes = gcnew List<TextBox^>();
			capitalTextBoxes->Add(answer1);
			capitalTextBoxes->Add(answer2);
			capitalTextBoxes->Add(answer3);
			capitalTextBoxes->Add(answer4);
			capitalTextBoxes->Add(answer5);

			// ��������� ������ ��� ���������� ������
			int answerIndex = random->Next(capitalTextBoxes->Count);

			// ����� ������ � TextBox'�
			for (int i = 0; i < capitalTextBoxes->Count; i++)
			{
				if (i == answerIndex) // ���� ������� ������ ������������� ������
				{
					capitalTextBoxes[i]->Text = capitals[randomIndex];
				}
				else
				{
					int randomCapitalIndex = random->Next(countryCount);
					capitalTextBoxes[i]->Text = capitals[randomCapitalIndex];
				}
			}
		}
		if (regionrb5) {
			const int MaxCountries = 100; // ������������ ���������� ����������
			String^ filename = "Africa.txt";
			array<String^>^ countries = gcnew array<String^>(MaxCountries);
			array<String^>^ capitals = gcnew array<String^>(MaxCountries);
			int countryCount = 0; // ���������� ��������� ����������


			try
			{
				System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(filename, System::Text::Encoding::UTF8);
				String^ line;
				while ((line = reader->ReadLine()) != nullptr)
				{
					int delimiterPos = line->IndexOf(';');
					if (delimiterPos != -1 && countryCount < MaxCountries)
					{
						String^ country = line->Substring(0, delimiterPos);
						String^ capital = line->Substring(delimiterPos + 1);
						if (capital->Length > 0 && capital[capital->Length - 1] == ';')
						{
							capital = capital->Substring(0, capital->Length - 1);
						}
						countries[countryCount] = country;
						capitals[countryCount] = capital;

						countryCount++;
					}
				}
				reader->Close();
			}
			catch (Exception^ ex)
			{
				// ��������� ����������, ���� ������ �� ����� �� �������
			}

			System::Random^ random = gcnew System::Random();
			int randomIndex = random->Next(countryCount); // ��������� ������ �����������
			String^ country = countries[randomIndex];

			// ����� ����������� � TextBox
			textBox_question->Text = country;

			// �������� ��������� TextBox'�� ��� ������
			List<TextBox^>^ capitalTextBoxes = gcnew List<TextBox^>();
			capitalTextBoxes->Add(answer1);
			capitalTextBoxes->Add(answer2);
			capitalTextBoxes->Add(answer3);
			capitalTextBoxes->Add(answer4);
			capitalTextBoxes->Add(answer5);

			// ��������� ������ ��� ���������� ������
			int answerIndex = random->Next(capitalTextBoxes->Count);

			// ����� ������ � TextBox'�
			for (int i = 0; i < capitalTextBoxes->Count; i++)
			{
				if (i == answerIndex) // ���� ������� ������ ������������� ������
				{
					capitalTextBoxes[i]->Text = capitals[randomIndex];
				}
				else
				{
					int randomCapitalIndex = random->Next(countryCount);
					capitalTextBoxes[i]->Text = capitals[randomCapitalIndex];
				}
			}
		}
		if (regionrb6) {
			const int MaxCountries = 100; // ������������ ���������� ����������
			String^ filename = "All_regions.txt";
			array<String^>^ countries = gcnew array<String^>(MaxCountries);
			array<String^>^ capitals = gcnew array<String^>(MaxCountries);
			int countryCount = 0; // ���������� ��������� ����������


			try
			{
				System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(filename, System::Text::Encoding::UTF8);
				String^ line;
				while ((line = reader->ReadLine()) != nullptr)
				{
					int delimiterPos = line->IndexOf(';');
					if (delimiterPos != -1 && countryCount < MaxCountries)
					{
						String^ country = line->Substring(0, delimiterPos);
						String^ capital = line->Substring(delimiterPos + 1);
						if (capital->Length > 0 && capital[capital->Length - 1] == ';')
						{
							capital = capital->Substring(0, capital->Length - 1);
						}
						countries[countryCount] = country;
						capitals[countryCount] = capital;

						countryCount++;
					}
				}
				reader->Close();
			}
			catch (Exception^ ex)
			{
				// ��������� ����������, ���� ������ �� ����� �� �������
			}

			System::Random^ random = gcnew System::Random();
			int randomIndex = random->Next(countryCount); // ��������� ������ �����������
			String^ country = countries[randomIndex];

			// ����� ����������� � TextBox
			textBox_question->Text = country;

			// �������� ��������� TextBox'�� ��� ������
			List<TextBox^>^ capitalTextBoxes = gcnew List<TextBox^>();
			capitalTextBoxes->Add(answer1);
			capitalTextBoxes->Add(answer2);
			capitalTextBoxes->Add(answer3);
			capitalTextBoxes->Add(answer4);
			capitalTextBoxes->Add(answer5);

			// ��������� ������ ��� ���������� ������
			int answerIndex = random->Next(capitalTextBoxes->Count);

			// ����� ������ � TextBox'�
			for (int i = 0; i < capitalTextBoxes->Count; i++)
			{
				if (i == answerIndex) // ���� ������� ������ ������������� ������
				{
					capitalTextBoxes[i]->Text = capitals[randomIndex];
				}
				else
				{
					int randomCapitalIndex = random->Next(countryCount);
					capitalTextBoxes[i]->Text = capitals[randomCapitalIndex];
				}
			}
		}
	}
}

System::Void practice::gameplay::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

System::Void practice::gameplay::button8_Click(System::Object^ sender, System::EventArgs^ e)
{

}

System::Void practice::gameplay::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (moderadb1)
	{
		state_tb->Visible = false;
		if (regionrb1) {
			const int MaxCountries = 100; // ������������ ���������� ����������
			String^ filename = "Europe.txt";
			array<String^>^ countries = gcnew array<String^>(MaxCountries);
			array<String^>^ capitals = gcnew array<String^>(MaxCountries);
			int countryCount = 0; // ���������� ��������� ����������

			try
			{
				System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(filename, System::Text::Encoding::UTF8);
				String^ line;
				while ((line = reader->ReadLine()) != nullptr)
				{
					int delimiterPos = line->IndexOf(';');
					if (delimiterPos != -1 && countryCount < MaxCountries)
					{
						String^ country = line->Substring(0, delimiterPos);
						String^ capital = line->Substring(delimiterPos + 1);
						if (capital->Length > 0 && capital[capital->Length - 1] == ';')
						{
							capital = capital->Substring(0, capital->Length - 1);
						}
						countries[countryCount] = country;
						capitals[countryCount] = capital;

						countryCount++;
					}
				}
				reader->Close();
			}
			catch (Exception^ ex)
			{
				// ��������� ����������, ���� ������ �� ����� �� �������
			}

			System::Random^ random = gcnew System::Random();
			int randomIndex = random->Next(countryCount); // ��������� ������ �����������
			String^ capital = capitals[randomIndex];

			// ����� ������� � TextBox
			textBox_question->Text = capital;

			// �������� ��������� TextBox'�� ��� ����������
			List<TextBox^>^ countryTextBoxes = gcnew List<TextBox^>();
			countryTextBoxes->Add(answer1);
			countryTextBoxes->Add(answer2);
			countryTextBoxes->Add(answer3);
			countryTextBoxes->Add(answer4);
			countryTextBoxes->Add(answer5);

			// ��������� ������ ��� ���������� ������
			int answerIndex = random->Next(countryTextBoxes->Count);

			// ����� ���������� � TextBox'�
			for (int i = 0; i < countryTextBoxes->Count; i++)
			{
				if (i == answerIndex) // ���� ������� ������ ������������� ������
				{
					countryTextBoxes[i]->Text = countries[randomIndex];
				}
				else
				{
					int randomCountryIndex = random->Next(countryCount);
					countryTextBoxes[i]->Text = countries[randomCountryIndex];
				}
			}

		}
		if (regionrb2) {
			const int MaxCountries = 100; // ������������ ���������� ����������
			String^ filename = "America.txt";
			array<String^>^ countries = gcnew array<String^>(MaxCountries);
			array<String^>^ capitals = gcnew array<String^>(MaxCountries);
			int countryCount = 0; // ���������� ��������� ����������

			try
			{
				System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(filename, System::Text::Encoding::UTF8);
				String^ line;
				while ((line = reader->ReadLine()) != nullptr)
				{
					int delimiterPos = line->IndexOf(';');
					if (delimiterPos != -1 && countryCount < MaxCountries)
					{
						String^ country = line->Substring(0, delimiterPos);
						String^ capital = line->Substring(delimiterPos + 1);
						if (capital->Length > 0 && capital[capital->Length - 1] == ';')
						{
							capital = capital->Substring(0, capital->Length - 1);
						}
						countries[countryCount] = country;
						capitals[countryCount] = capital;

						countryCount++;
					}
				}
				reader->Close();
			}
			catch (Exception^ ex)
			{
				// ��������� ����������, ���� ������ �� ����� �� �������
			}

			System::Random^ random = gcnew System::Random();
			int randomIndex = random->Next(countryCount); // ��������� ������ �����������
			String^ capital = capitals[randomIndex];

			// ����� ������� � TextBox
			textBox_question->Text = capital;

			// �������� ��������� TextBox'�� ��� ����������
			List<TextBox^>^ countryTextBoxes = gcnew List<TextBox^>();
			countryTextBoxes->Add(answer1);
			countryTextBoxes->Add(answer2);
			countryTextBoxes->Add(answer3);
			countryTextBoxes->Add(answer4);
			countryTextBoxes->Add(answer5);

			// ��������� ������ ��� ���������� ������
			int answerIndex = random->Next(countryTextBoxes->Count);

			// ����� ���������� � TextBox'�
			for (int i = 0; i < countryTextBoxes->Count; i++)
			{
				if (i == answerIndex) // ���� ������� ������ ������������� ������
				{
					countryTextBoxes[i]->Text = countries[randomIndex];
				}
				else
				{
					int randomCountryIndex = random->Next(countryCount);
					countryTextBoxes[i]->Text = countries[randomCountryIndex];
				}
			}

		}
		if (regionrb3) {
			const int MaxCountries = 100; // ������������ ���������� ����������
			String^ filename = "Asia.txt";
			array<String^>^ countries = gcnew array<String^>(MaxCountries);
			array<String^>^ capitals = gcnew array<String^>(MaxCountries);
			int countryCount = 0; // ���������� ��������� ����������

			try
			{
				System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(filename, System::Text::Encoding::UTF8);
				String^ line;
				while ((line = reader->ReadLine()) != nullptr)
				{
					int delimiterPos = line->IndexOf(';');
					if (delimiterPos != -1 && countryCount < MaxCountries)
					{
						String^ country = line->Substring(0, delimiterPos);
						String^ capital = line->Substring(delimiterPos + 1);
						if (capital->Length > 0 && capital[capital->Length - 1] == ';')
						{
							capital = capital->Substring(0, capital->Length - 1);
						}
						countries[countryCount] = country;
						capitals[countryCount] = capital;

						countryCount++;
					}
				}
				reader->Close();
			}
			catch (Exception^ ex)
			{
				// ��������� ����������, ���� ������ �� ����� �� �������
			}

			System::Random^ random = gcnew System::Random();
			int randomIndex = random->Next(countryCount); // ��������� ������ �����������
			String^ capital = capitals[randomIndex];

			// ����� ������� � TextBox
			textBox_question->Text = capital;

			// �������� ��������� TextBox'�� ��� ����������
			List<TextBox^>^ countryTextBoxes = gcnew List<TextBox^>();
			countryTextBoxes->Add(answer1);
			countryTextBoxes->Add(answer2);
			countryTextBoxes->Add(answer3);
			countryTextBoxes->Add(answer4);
			countryTextBoxes->Add(answer5);

			// ��������� ������ ��� ���������� ������
			int answerIndex = random->Next(countryTextBoxes->Count);

			// ����� ���������� � TextBox'�
			for (int i = 0; i < countryTextBoxes->Count; i++)
			{
				if (i == answerIndex) // ���� ������� ������ ������������� ������
				{
					countryTextBoxes[i]->Text = countries[randomIndex];
				}
				else
				{
					int randomCountryIndex = random->Next(countryCount);
					countryTextBoxes[i]->Text = countries[randomCountryIndex];
				}
			}

		}
		if (regionrb4) {
			const int MaxCountries = 100; // ������������ ���������� ����������
			String^ filename = "Australia_Oceania.txt";
			array<String^>^ countries = gcnew array<String^>(MaxCountries);
			array<String^>^ capitals = gcnew array<String^>(MaxCountries);
			int countryCount = 0; // ���������� ��������� ����������

			try
			{
				System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(filename, System::Text::Encoding::UTF8);
				String^ line;
				while ((line = reader->ReadLine()) != nullptr)
				{
					int delimiterPos = line->IndexOf(';');
					if (delimiterPos != -1 && countryCount < MaxCountries)
					{
						String^ country = line->Substring(0, delimiterPos);
						String^ capital = line->Substring(delimiterPos + 1);
						if (capital->Length > 0 && capital[capital->Length - 1] == ';')
						{
							capital = capital->Substring(0, capital->Length - 1);
						}
						countries[countryCount] = country;
						capitals[countryCount] = capital;

						countryCount++;
					}
				}
				reader->Close();
			}
			catch (Exception^ ex)
			{
				// ��������� ����������, ���� ������ �� ����� �� �������
			}

			System::Random^ random = gcnew System::Random();
			int randomIndex = random->Next(countryCount); // ��������� ������ �����������
			String^ capital = capitals[randomIndex];

			// ����� ������� � TextBox
			textBox_question->Text = capital;

			// �������� ��������� TextBox'�� ��� ����������
			List<TextBox^>^ countryTextBoxes = gcnew List<TextBox^>();
			countryTextBoxes->Add(answer1);
			countryTextBoxes->Add(answer2);
			countryTextBoxes->Add(answer3);
			countryTextBoxes->Add(answer4);
			countryTextBoxes->Add(answer5);

			// ��������� ������ ��� ���������� ������
			int answerIndex = random->Next(countryTextBoxes->Count);

			// ����� ���������� � TextBox'�
			for (int i = 0; i < countryTextBoxes->Count; i++)
			{
				if (i == answerIndex) // ���� ������� ������ ������������� ������
				{
					countryTextBoxes[i]->Text = countries[randomIndex];
				}
				else
				{
					int randomCountryIndex = random->Next(countryCount);
					countryTextBoxes[i]->Text = countries[randomCountryIndex];
				}
			}

		}
		if (regionrb5) {
			const int MaxCountries = 100; // ������������ ���������� ����������
			String^ filename = "Africa.txt";
			array<String^>^ countries = gcnew array<String^>(MaxCountries);
			array<String^>^ capitals = gcnew array<String^>(MaxCountries);
			int countryCount = 0; // ���������� ��������� ����������

			try
			{
				System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(filename, System::Text::Encoding::UTF8);
				String^ line;
				while ((line = reader->ReadLine()) != nullptr)
				{
					int delimiterPos = line->IndexOf(';');
					if (delimiterPos != -1 && countryCount < MaxCountries)
					{
						String^ country = line->Substring(0, delimiterPos);
						String^ capital = line->Substring(delimiterPos + 1);
						if (capital->Length > 0 && capital[capital->Length - 1] == ';')
						{
							capital = capital->Substring(0, capital->Length - 1);
						}
						countries[countryCount] = country;
						capitals[countryCount] = capital;

						countryCount++;
					}
				}
				reader->Close();
			}
			catch (Exception^ ex)
			{
				// ��������� ����������, ���� ������ �� ����� �� �������
			}

			System::Random^ random = gcnew System::Random();
			int randomIndex = random->Next(countryCount); // ��������� ������ �����������
			String^ capital = capitals[randomIndex];

			// ����� ������� � TextBox
			textBox_question->Text = capital;

			// �������� ��������� TextBox'�� ��� ����������
			List<TextBox^>^ countryTextBoxes = gcnew List<TextBox^>();
			countryTextBoxes->Add(answer1);
			countryTextBoxes->Add(answer2);
			countryTextBoxes->Add(answer3);
			countryTextBoxes->Add(answer4);
			countryTextBoxes->Add(answer5);

			// ��������� ������ ��� ���������� ������
			int answerIndex = random->Next(countryTextBoxes->Count);

			// ����� ���������� � TextBox'�
			for (int i = 0; i < countryTextBoxes->Count; i++)
			{
				if (i == answerIndex) // ���� ������� ������ ������������� ������
				{
					countryTextBoxes[i]->Text = countries[randomIndex];
				}
				else
				{
					int randomCountryIndex = random->Next(countryCount);
					countryTextBoxes[i]->Text = countries[randomCountryIndex];
				}
			}

		}
		if (regionrb6) {
			const int MaxCountries = 100; // ������������ ���������� ����������
			String^ filename = "All_regions.txt";
			array<String^>^ countries = gcnew array<String^>(MaxCountries);
			array<String^>^ capitals = gcnew array<String^>(MaxCountries);
			int countryCount = 0; // ���������� ��������� ����������

			try
			{
				System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(filename, System::Text::Encoding::UTF8);
				String^ line;
				while ((line = reader->ReadLine()) != nullptr)
				{
					int delimiterPos = line->IndexOf(';');
					if (delimiterPos != -1 && countryCount < MaxCountries)
					{
						String^ country = line->Substring(0, delimiterPos);
						String^ capital = line->Substring(delimiterPos + 1);
						if (capital->Length > 0 && capital[capital->Length - 1] == ';')
						{
							capital = capital->Substring(0, capital->Length - 1);
						}
						countries[countryCount] = country;
						capitals[countryCount] = capital;

						countryCount++;
					}
				}
				reader->Close();
			}
			catch (Exception^ ex)
			{
				// ��������� ����������, ���� ������ �� ����� �� �������
			}

			System::Random^ random = gcnew System::Random();
			int randomIndex = random->Next(countryCount); // ��������� ������ �����������
			String^ capital = capitals[randomIndex];

			// ����� ������� � TextBox
			textBox_question->Text = capital;

			// �������� ��������� TextBox'�� ��� ����������
			List<TextBox^>^ countryTextBoxes = gcnew List<TextBox^>();
			countryTextBoxes->Add(answer1);
			countryTextBoxes->Add(answer2);
			countryTextBoxes->Add(answer3);
			countryTextBoxes->Add(answer4);
			countryTextBoxes->Add(answer5);

			// ��������� ������ ��� ���������� ������
			int answerIndex = random->Next(countryTextBoxes->Count);

			// ����� ���������� � TextBox'�
			for (int i = 0; i < countryTextBoxes->Count; i++)
			{
				if (i == answerIndex) // ���� ������� ������ ������������� ������
				{
					countryTextBoxes[i]->Text = countries[randomIndex];
				}
				else
				{
					int randomCountryIndex = random->Next(countryCount);
					countryTextBoxes[i]->Text = countries[randomCountryIndex];
				}
			}

		}
	}
	if (moderadb2)
	{
		capital_tb->Visible = false;

		if (regionrb1)
		{
			const int MaxCountries = 100; // ������������ ���������� ����������
			String^ filename = "Europe.txt";
			array<String^>^ countries = gcnew array<String^>(MaxCountries);
			array<String^>^ capitals = gcnew array<String^>(MaxCountries);
			int countryCount = 0; // ���������� ��������� ����������


			try
			{
				System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(filename, System::Text::Encoding::UTF8);
				String^ line;
				while ((line = reader->ReadLine()) != nullptr)
				{
					int delimiterPos = line->IndexOf(';');
					if (delimiterPos != -1 && countryCount < MaxCountries)
					{
						String^ country = line->Substring(0, delimiterPos);
						String^ capital = line->Substring(delimiterPos + 1);
						if (capital->Length > 0 && capital[capital->Length - 1] == ';')
						{
							capital = capital->Substring(0, capital->Length - 1);
						}
						countries[countryCount] = country;
						capitals[countryCount] = capital;

						countryCount++;
					}
				}
				reader->Close();
			}
			catch (Exception^ ex)
			{
				// ��������� ����������, ���� ������ �� ����� �� �������
			}

			System::Random^ random = gcnew System::Random();
			int randomIndex = random->Next(countryCount); // ��������� ������ �����������
			String^ country = countries[randomIndex];

			// ����� ����������� � TextBox
			textBox_question->Text = country;

			// �������� ��������� TextBox'�� ��� ������
			List<TextBox^>^ capitalTextBoxes = gcnew List<TextBox^>();
			capitalTextBoxes->Add(answer1);
			capitalTextBoxes->Add(answer2);
			capitalTextBoxes->Add(answer3);
			capitalTextBoxes->Add(answer4);
			capitalTextBoxes->Add(answer5);

			// ��������� ������ ��� ���������� ������
			int answerIndex = random->Next(capitalTextBoxes->Count);

			// ����� ������ � TextBox'�
			for (int i = 0; i < capitalTextBoxes->Count; i++)
			{
				if (i == answerIndex) // ���� ������� ������ ������������� ������
				{
					capitalTextBoxes[i]->Text = capitals[randomIndex];
				}
				else
				{
					int randomCapitalIndex = random->Next(countryCount);
					capitalTextBoxes[i]->Text = capitals[randomCapitalIndex];
				}
			}
		}
		if (regionrb2) {
			const int MaxCountries = 100; // ������������ ���������� ����������
			String^ filename = "America.txt";
			array<String^>^ countries = gcnew array<String^>(MaxCountries);
			array<String^>^ capitals = gcnew array<String^>(MaxCountries);
			int countryCount = 0; // ���������� ��������� ����������


			try
			{
				System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(filename, System::Text::Encoding::UTF8);
				String^ line;
				while ((line = reader->ReadLine()) != nullptr)
				{
					int delimiterPos = line->IndexOf(';');
					if (delimiterPos != -1 && countryCount < MaxCountries)
					{
						String^ country = line->Substring(0, delimiterPos);
						String^ capital = line->Substring(delimiterPos + 1);
						if (capital->Length > 0 && capital[capital->Length - 1] == ';')
						{
							capital = capital->Substring(0, capital->Length - 1);
						}
						countries[countryCount] = country;
						capitals[countryCount] = capital;

						countryCount++;
					}
				}
				reader->Close();
			}
			catch (Exception^ ex)
			{
				// ��������� ����������, ���� ������ �� ����� �� �������
			}

			System::Random^ random = gcnew System::Random();
			int randomIndex = random->Next(countryCount); // ��������� ������ �����������
			String^ country = countries[randomIndex];

			// ����� ����������� � TextBox
			textBox_question->Text = country;

			// �������� ��������� TextBox'�� ��� ������
			List<TextBox^>^ capitalTextBoxes = gcnew List<TextBox^>();
			capitalTextBoxes->Add(answer1);
			capitalTextBoxes->Add(answer2);
			capitalTextBoxes->Add(answer3);
			capitalTextBoxes->Add(answer4);
			capitalTextBoxes->Add(answer5);

			// ��������� ������ ��� ���������� ������
			int answerIndex = random->Next(capitalTextBoxes->Count);

			// ����� ������ � TextBox'�
			for (int i = 0; i < capitalTextBoxes->Count; i++)
			{
				if (i == answerIndex) // ���� ������� ������ ������������� ������
				{
					capitalTextBoxes[i]->Text = capitals[randomIndex];
				}
				else
				{
					int randomCapitalIndex = random->Next(countryCount);
					capitalTextBoxes[i]->Text = capitals[randomCapitalIndex];
				}
			}
		}
		if (regionrb3) {
			const int MaxCountries = 100; // ������������ ���������� ����������
			String^ filename = "Asia.txt";
			array<String^>^ countries = gcnew array<String^>(MaxCountries);
			array<String^>^ capitals = gcnew array<String^>(MaxCountries);
			int countryCount = 0; // ���������� ��������� ����������


			try
			{
				System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(filename, System::Text::Encoding::UTF8);
				String^ line;
				while ((line = reader->ReadLine()) != nullptr)
				{
					int delimiterPos = line->IndexOf(';');
					if (delimiterPos != -1 && countryCount < MaxCountries)
					{
						String^ country = line->Substring(0, delimiterPos);
						String^ capital = line->Substring(delimiterPos + 1);
						if (capital->Length > 0 && capital[capital->Length - 1] == ';')
						{
							capital = capital->Substring(0, capital->Length - 1);
						}
						countries[countryCount] = country;
						capitals[countryCount] = capital;

						countryCount++;
					}
				}
				reader->Close();
			}
			catch (Exception^ ex)
			{
				// ��������� ����������, ���� ������ �� ����� �� �������
			}

			System::Random^ random = gcnew System::Random();
			int randomIndex = random->Next(countryCount); // ��������� ������ �����������
			String^ country = countries[randomIndex];

			// ����� ����������� � TextBox
			textBox_question->Text = country;

			// �������� ��������� TextBox'�� ��� ������
			List<TextBox^>^ capitalTextBoxes = gcnew List<TextBox^>();
			capitalTextBoxes->Add(answer1);
			capitalTextBoxes->Add(answer2);
			capitalTextBoxes->Add(answer3);
			capitalTextBoxes->Add(answer4);
			capitalTextBoxes->Add(answer5);

			// ��������� ������ ��� ���������� ������
			int answerIndex = random->Next(capitalTextBoxes->Count);

			// ����� ������ � TextBox'�
			for (int i = 0; i < capitalTextBoxes->Count; i++)
			{
				if (i == answerIndex) // ���� ������� ������ ������������� ������
				{
					capitalTextBoxes[i]->Text = capitals[randomIndex];
				}
				else
				{
					int randomCapitalIndex = random->Next(countryCount);
					capitalTextBoxes[i]->Text = capitals[randomCapitalIndex];
				}
			}
		}
		if (regionrb4) {
			const int MaxCountries = 100; // ������������ ���������� ����������
			String^ filename = "Australia_Oceania.txt";
			array<String^>^ countries = gcnew array<String^>(MaxCountries);
			array<String^>^ capitals = gcnew array<String^>(MaxCountries);
			int countryCount = 0; // ���������� ��������� ����������


			try
			{
				System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(filename, System::Text::Encoding::UTF8);
				String^ line;
				while ((line = reader->ReadLine()) != nullptr)
				{
					int delimiterPos = line->IndexOf(';');
					if (delimiterPos != -1 && countryCount < MaxCountries)
					{
						String^ country = line->Substring(0, delimiterPos);
						String^ capital = line->Substring(delimiterPos + 1);
						if (capital->Length > 0 && capital[capital->Length - 1] == ';')
						{
							capital = capital->Substring(0, capital->Length - 1);
						}
						countries[countryCount] = country;
						capitals[countryCount] = capital;

						countryCount++;
					}
				}
				reader->Close();
			}
			catch (Exception^ ex)
			{
				// ��������� ����������, ���� ������ �� ����� �� �������
			}

			System::Random^ random = gcnew System::Random();
			int randomIndex = random->Next(countryCount); // ��������� ������ �����������
			String^ country = countries[randomIndex];

			// ����� ����������� � TextBox
			textBox_question->Text = country;

			// �������� ��������� TextBox'�� ��� ������
			List<TextBox^>^ capitalTextBoxes = gcnew List<TextBox^>();
			capitalTextBoxes->Add(answer1);
			capitalTextBoxes->Add(answer2);
			capitalTextBoxes->Add(answer3);
			capitalTextBoxes->Add(answer4);
			capitalTextBoxes->Add(answer5);

			// ��������� ������ ��� ���������� ������
			int answerIndex = random->Next(capitalTextBoxes->Count);

			// ����� ������ � TextBox'�
			for (int i = 0; i < capitalTextBoxes->Count; i++)
			{
				if (i == answerIndex) // ���� ������� ������ ������������� ������
				{
					capitalTextBoxes[i]->Text = capitals[randomIndex];
				}
				else
				{
					int randomCapitalIndex = random->Next(countryCount);
					capitalTextBoxes[i]->Text = capitals[randomCapitalIndex];
				}
			}
		}
		if (regionrb5) {
			const int MaxCountries = 100; // ������������ ���������� ����������
			String^ filename = "Africa.txt";
			array<String^>^ countries = gcnew array<String^>(MaxCountries);
			array<String^>^ capitals = gcnew array<String^>(MaxCountries);
			int countryCount = 0; // ���������� ��������� ����������


			try
			{
				System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(filename, System::Text::Encoding::UTF8);
				String^ line;
				while ((line = reader->ReadLine()) != nullptr)
				{
					int delimiterPos = line->IndexOf(';');
					if (delimiterPos != -1 && countryCount < MaxCountries)
					{
						String^ country = line->Substring(0, delimiterPos);
						String^ capital = line->Substring(delimiterPos + 1);
						if (capital->Length > 0 && capital[capital->Length - 1] == ';')
						{
							capital = capital->Substring(0, capital->Length - 1);
						}
						countries[countryCount] = country;
						capitals[countryCount] = capital;

						countryCount++;
					}
				}
				reader->Close();
			}
			catch (Exception^ ex)
			{
				// ��������� ����������, ���� ������ �� ����� �� �������
			}

			System::Random^ random = gcnew System::Random();
			int randomIndex = random->Next(countryCount); // ��������� ������ �����������
			String^ country = countries[randomIndex];

			// ����� ����������� � TextBox
			textBox_question->Text = country;

			// �������� ��������� TextBox'�� ��� ������
			List<TextBox^>^ capitalTextBoxes = gcnew List<TextBox^>();
			capitalTextBoxes->Add(answer1);
			capitalTextBoxes->Add(answer2);
			capitalTextBoxes->Add(answer3);
			capitalTextBoxes->Add(answer4);
			capitalTextBoxes->Add(answer5);

			// ��������� ������ ��� ���������� ������
			int answerIndex = random->Next(capitalTextBoxes->Count);

			// ����� ������ � TextBox'�
			for (int i = 0; i < capitalTextBoxes->Count; i++)
			{
				if (i == answerIndex) // ���� ������� ������ ������������� ������
				{
					capitalTextBoxes[i]->Text = capitals[randomIndex];
				}
				else
				{
					int randomCapitalIndex = random->Next(countryCount);
					capitalTextBoxes[i]->Text = capitals[randomCapitalIndex];
				}
			}
		}
		if (regionrb6) {
			const int MaxCountries = 100; // ������������ ���������� ����������
			String^ filename = "All_regions.txt";
			array<String^>^ countries = gcnew array<String^>(MaxCountries);
			array<String^>^ capitals = gcnew array<String^>(MaxCountries);
			int countryCount = 0; // ���������� ��������� ����������


			try
			{
				System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(filename, System::Text::Encoding::UTF8);
				String^ line;
				while ((line = reader->ReadLine()) != nullptr)
				{
					int delimiterPos = line->IndexOf(';');
					if (delimiterPos != -1 && countryCount < MaxCountries)
					{
						String^ country = line->Substring(0, delimiterPos);
						String^ capital = line->Substring(delimiterPos + 1);
						if (capital->Length > 0 && capital[capital->Length - 1] == ';')
						{
							capital = capital->Substring(0, capital->Length - 1);
						}
						countries[countryCount] = country;
						capitals[countryCount] = capital;

						countryCount++;
					}
				}
				reader->Close();
			}
			catch (Exception^ ex)
			{
				// ��������� ����������, ���� ������ �� ����� �� �������
			}

			System::Random^ random = gcnew System::Random();
			int randomIndex = random->Next(countryCount); // ��������� ������ �����������
			String^ country = countries[randomIndex];

			// ����� ����������� � TextBox
			textBox_question->Text = country;

			// �������� ��������� TextBox'�� ��� ������
			List<TextBox^>^ capitalTextBoxes = gcnew List<TextBox^>();
			capitalTextBoxes->Add(answer1);
			capitalTextBoxes->Add(answer2);
			capitalTextBoxes->Add(answer3);
			capitalTextBoxes->Add(answer4);
			capitalTextBoxes->Add(answer5);

			// ��������� ������ ��� ���������� ������
			int answerIndex = random->Next(capitalTextBoxes->Count);

			// ����� ������ � TextBox'�
			for (int i = 0; i < capitalTextBoxes->Count; i++)
			{
				if (i == answerIndex) // ���� ������� ������ ������������� ������
				{
					capitalTextBoxes[i]->Text = capitals[randomIndex];
				}
				else
				{
					int randomCapitalIndex = random->Next(countryCount);
					capitalTextBoxes[i]->Text = capitals[randomCapitalIndex];
				}
			}
		}
	}
}

