#include "baseApp.h"
#include "cli.h"
#include "cliBaseApp.h"
#include <ctime>

// hello

auto main()->int
{

	setlocale(LC_ALL, "ru");
	//singelton
	BaseApp *baseApp = BaseApp::instance();
	//read private data from file
	baseApp->readUsersFromFile();
	//read history from file
	baseApp->readHistoryMes();
	CLIBaseApp  cliBaseApp;
	CLI *cli = &cliBaseApp;
	
	signIn();
	signUp();
			
	return 0;
}