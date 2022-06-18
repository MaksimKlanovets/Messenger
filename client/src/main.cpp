#include "baseApp.cpp"
#include "cli.cpp"
#include "cliBaseApp.cpp"
#include <ctime>


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
	
	//signIn();
	//signUp();
			
	return 0;
}