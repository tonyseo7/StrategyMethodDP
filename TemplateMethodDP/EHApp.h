#pragma once
#include "common.h"

class EHApp
{
public:
	void Do();

protected:
	virtual void About();
	virtual void ViewMenu();
	void Run();
	virtual void InitInstance() = 0;
	virtual void ExitInstance() = 0;
	virtual void KeyProc(int key);

private:
	int SelectMenu();
};
