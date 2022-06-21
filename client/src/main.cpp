#include "baseApp.cpp"
#include "cli.cpp"
#include "cliBaseApp.cpp"
#include <ctime>

void mainMenu()
{
	std::system("clear");
	std::cout << "1. Sign in\n";
	std::cout << "2. Sign up\n";
	std::cout << "3. Help\n";
}

auto main()->int
{
	
	//singelton
	BaseApp *baseApp = BaseApp::instance();
	//read private data from file
	baseApp->readUsersFromFile();
	//read history from file
	baseApp->readHistoryMes();
	CLIBaseApp  cliBaseApp;
	CLI *cli = &cliBaseApp;
	
	while (true)
	{
		int requestToUser;
		mainMenu();
		std::cin >> requestToUser;
		switch (requestToUser)
		{
		case 1:
			cliBaseApp.signIn();
			break;
		case 2:
			cliBaseApp.signUp();
			break;
		case 3:
			cli->help();
			break;
		}
	}
	

	//signIn();
	//signUp();
			
	return 0;
}