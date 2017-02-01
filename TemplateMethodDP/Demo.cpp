#include "Viewer.h"

void main()
{
	MyApp *app = new MyApp();
	app->Do();

	delete app;
}