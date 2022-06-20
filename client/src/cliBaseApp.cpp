#include "/home/neronsuper/Documents/vsc projects/Messanger/client/include/cliBaseApp.h"
#include "cliPrivateUserData.cpp"
#include "cliMessage.cpp"


CLIBaseApp::CLIBaseApp()
{
	_baseApp = nullptr;
	_userData = nullptr;
}


void CLIBaseApp::signIn()
{
	_baseApp = BaseApp::instance();

	CLIBaseApp cliBaseApp;
	CLIprivataUserData cliPrivateUserData;
	CLI* cli = &cliPrivateUserData;
	
	PrivateUserData privateUserData;

	//handle user data /privateUserData / log, password, name ... if needed

	
	//check / is user autorization use Userdata
	

	// handle meassages write, sent(for one, for group or all users), receive incoming messages(notifications read time handle, who sent, time messages, a little prewiew)

	//CLIprivataUserData cliPrivateUserData;
			
	CLImessage cliMessage;
			
}

void CLIBaseApp::signUp()
{
	_baseApp = BaseApp::instance();

	CLIBaseApp cliBaseApp;
	CLIprivataUserData cliPrivareData;

	PrivateUserData privateUserData;
	
	// create new user , log, password ... , check if exist 
	// add user to base

	this->signIn();

}

void CLIBaseApp::help()
{
	std::cout << "To terminate the program 0 " << std::endl;
	std::cout << "Sign in 1" << std::endl;
	std::cout << "Sign up 2" << std::endl;
}




