#include "EHApp.h"

void EHApp::Do()
{
	InitInstance();
	Run();
	ExitInstance();
}


void EHApp::About()
{
	cout << "EH Camera" << endl;
}


void EHApp::ViewMenu()
{
	cout << "0:���α׷� ���� 1:��ǰ ����" << endl;
}


void EHApp::Run()
{
	int key = 0;

	while ((key = SelectMenu()) != 0)
	{
		switch (key)
		{
			case 1:
			{
				About();
				break;
			}
			default:
			{
				KeyProc(key);
				break;
			}
			
		}
	}
}


void EHApp::KeyProc(int key)
{
	cout << "�߸��� �޴��� �����Ͽ����ϴ�." << endl;
}



int EHApp::SelectMenu()
{
	int key = 0;
	ViewMenu();
	cout << "�޴��� �����ϼ���." << endl;
	cin >> key;

	return key;
}