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
	cout << "0:프로그램 종료 1:제품 정보" << endl;
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
	cout << "잘못된 메뉴를 선택하였습니다." << endl;
}



int EHApp::SelectMenu()
{
	int key = 0;
	ViewMenu();
	cout << "메뉴를 선택하세요." << endl;
	cin >> key;

	return key;
}