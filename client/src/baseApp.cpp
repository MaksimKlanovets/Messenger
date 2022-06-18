#include "/home/neronsuper/Documents/vsc projects/Messanger/client/include/baseApp.h"



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


void BaseApp::writeRegUserToFile()
{

}
void BaseApp::writeMessageToFile()
{

}
void BaseApp::readUsersFromFile()
{

}
void BaseApp::readHistoryMes()
{
	
}