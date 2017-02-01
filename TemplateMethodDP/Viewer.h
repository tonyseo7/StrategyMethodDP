#pragma once
#include "EHApp.h"

class MyApp :public EHApp
{
public:
	virtual void InitInstance();
	virtual void ExitInstance();
	virtual void About();
	virtual void ViewMenu();
	virtual void KeyProc(int key);

private:
	void AddPicture();
	void SearchPicture();
};
