#pragma once
//if define Windows 

#include "baseApp.h"
#include "cli.h"

class CLIBaseApp : public CLI
{
public:
	CLIBaseApp();

	void signIn();
	void signUp();
	void help()override;
	
private:
	BaseApp* _baseApp;
	std::unique_ptr<UserData> _userData;
};