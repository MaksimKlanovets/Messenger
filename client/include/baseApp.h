#pragma once


#pragma warning(disable: 4996)
#endif

#include "userData.h"
#include <vector>
#include <string>
#include <fstream>
#include <filesystem>
#include <iostream>


class BaseApp
{
public:
	static BaseApp* instance();
	

	void addUser(UserData userData);
    UserData *authUser(UserData userData);
	void sentMessageToAll(const std::string &message);

	const Message *sentMessage();
	bool isLoginAuth();
	
	void writeRegUserToFile();
	void writeMessageToFile();
	//read private data
	void readUsersFromFile();
	//read histoty messages
	void readHistoryMes();

	~BaseApp() = delete;
private:
	BaseApp();
	BaseApp(const BaseApp&);
	BaseApp& operator=(const BaseApp&);
	static BaseApp* _instance;
	std::vector <UserData> _userData = {};
	
};