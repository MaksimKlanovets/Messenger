#include "/home/neronsuper/Documents/vsc projects/Messanger/client/include/baseApp.h"
#include "/home/neronsuper/Documents/vsc projects/Messanger/client/include/cli.h"
#include "/home/neronsuper/Documents/vsc projects/Messanger/client/include/cliBaseApp.h"
#include <ctime>

// hello vet

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
	
	//signIn();
	//signUp();
			
	return 0;
}