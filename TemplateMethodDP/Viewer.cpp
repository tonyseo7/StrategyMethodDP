#include "Viewer.h"

void MyApp::InitInstance()
{
	cout << "���� ������ ���α׷� V0.1" << endl;
	cout << "�ƹ�Ű�� ��������." << endl;
}

void MyApp::ExitInstance()
{
	cout << "���������� ���α׷��� �����մϴ�." << endl;
}

void MyApp::About()
{
	EHApp::About();
	cout << "���� ������ xxxxx.xxx.xx" << endl;
}

void MyApp::ViewMenu()
{
	EHApp::ViewMenu();
	cout << "2: �����߰� 3:���� �˻�" << endl;
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
	cout << "���� �߰� ����� �����Ͽ����ϴ�." << endl;
}

void MyApp::SearchPicture()
{
	cout << "���� �˻� ����� �����Ͽ����ϴ�." << endl;
}