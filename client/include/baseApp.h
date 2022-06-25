#pragma once


//#pragma warning(disable: 4996)


#include "/home/neronsuper/Documents/vsc projects/Messanger/client/src/userData.cpp"
#include <vector>
#include <string>
#include <fstream>
#include <filesystem>
#include <iostream>
#include <sys/stat.h>
#include <memory>



class BaseApp
{
public:
	static BaseApp* instance();
	

	void addUser(UserData& userData);
    UserData *authUser(UserData userData);
	void sentMessageToAll(const std::string &message);

	const Message *sentMessage();
	bool isLoginAuth();
	bool isUserExist(std::string username);

	void createDirectory(std::string string_path, std::string directory_name);
	
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
	std::vector <std::unique_ptr<UserData>> _userData = {};
	
};