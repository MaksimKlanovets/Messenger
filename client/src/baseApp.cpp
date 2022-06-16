#include "baseApp.h"



BaseApp* BaseApp::_instance = 0;
BaseApp* BaseApp::instance()
{
	if (_instance == 0)
	{
		// use unique_ptr insted new
		_instance = new BaseApp;
	}
	return _instance;
}


BaseApp::BaseApp()
{
}

BaseApp& BaseApp::operator=(const BaseApp&)
{
	return *this;
}


