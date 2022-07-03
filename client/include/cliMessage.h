#pragma once
#include "cli.h"
#include "baseApp.h"

class CLImessage : public CLI
{
public:
	CLImessage(UserData*);

	void sendMessage();
	void help()override;

private:
	BaseApp* _baseApp;	
	UserData* _userData;

};

