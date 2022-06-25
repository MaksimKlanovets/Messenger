#include "/home/neronsuper/Documents/vsc projects/Messanger/client/include/cliBaseApp.h"
#include "cliPrivateUserData.cpp"
#include "cliMessage.cpp"


CLIBaseApp::CLIBaseApp()
{
	_baseApp = nullptr;
	
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

	// CLIBaseApp cliBaseApp;
	// CLIprivataUserData cliPrivateData;

	// PrivateUserData privateUserData;
	
	// // create a new user , log, password ... , check if exist 
	// // add user to base

	std::string login;
	std::string password;
	do
	{
		std::system("clear");
		std::cout << "Username: ";
		std::cin >> login;

		
		if (_baseApp->isUserExist(login))
			continue;
		

		std::cout << "Password: ";
		std::cin >> password;

		break;
	}
	while (true);

	_userData = UserData(PrivateUserData(login, password));

	_baseApp->addUser(_userData);

	//this->signIn();

}

void CLIBaseApp::help()
{
	std::system("clear");
	std::cout << "0. To terminate the program" << std::endl;
	std::cout << "1. Sign in" << std::endl;
	std::cout << "2. Sign up" << std::endl;
	int requestToUser;
	std::cin >> requestToUser;
	switch (requestToUser)
	{
	case 0:
		exit(0);
		break;
	}
}




