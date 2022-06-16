#pragma once
#include "cli.h"

class CLIprivataUserData
{
public:
	CLIprivataUserData();

	void help()override;
	const std::string writeTempName();
	const std::string writeTempLogin();
	const std::string writeTempPassword();
private:
	
};

