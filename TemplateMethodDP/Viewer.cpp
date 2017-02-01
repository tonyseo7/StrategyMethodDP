#include "Viewer.h"

void MyApp::InitInstance()
{
	cout << "사진 관리자 프로그램 V0.1" << endl;
	cout << "아무키나 누르세요." << endl;
}

void MyApp::ExitInstance()
{
	cout << "사진관리자 프로그램을 종료합니다." << endl;
}

void MyApp::About()
{
	EHApp::About();
	cout << "응용 개발자 xxxxx.xxx.xx" << endl;
}

void MyApp::ViewMenu()
{
	EHApp::ViewMenu();
	cout << "2: 사진추가 3:사진 검색" << endl;
}

void MyApp::KeyProc(int key)
{
	switch(key)
	{
		case 2:
		{
			AddPicture();

			return;
		}
		case 3:
		{
			SearchPicture();
			
			return;
		}
	}

	EHApp::KeyProc(key);
}

void MyApp::AddPicture()
{
	cout << "사진 추가 기능을 선택하였습니다." << endl;
}

void MyApp::SearchPicture()
{
	cout << "사진 검색 기능을 선택하였습니다." << endl;
}