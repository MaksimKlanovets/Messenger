#pragma once
#include "cli.h"
#include "baseApp.h"

class CLImessage : public CLI
{
public:
	CLImessage();

	void sendMessage(UserData* ud);
	void help()override;

private:
	BaseApp* _baseApp;	


};

