#pragma once


//#pragma warning(disable: 4996)


#include "/home/neronsuper/Documents/vsc projects/Messanger/client/src/userData.cpp"
#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include <sys/stat.h>
#include <memory>
#include <unistd.h>
#include <experimental/filesystem>



namespace fs = std::experimental::filesystem;



class BaseApp
{
public:
	static BaseApp* instance();
	

	void addUser(std::unique_ptr<UserData>& userData);
    UserData *authUser(UserData userData);

	void sendMessage(const Message& message, const std::string& receiver);
	bool isLoginAuth();
	bool isUserExist(std::string& username);
	bool isLoginAndPasswordCorrect(std::string&, std::string&);

	void createDirectory(std::string string_path, std::string directory_name);
	std::string lastLine(std::string path);
	
	void readUsersFromFile();
	void readFirstMesFromChats(UserData* userData);
	void readFullChat(UserData* userData, std::string chat);

	~BaseApp() = delete;
private:
	BaseApp();
	BaseApp(const BaseApp&);
	BaseApp& operator=(const BaseApp&);
	static BaseApp* _instance;
	std::vector <std::unique_ptr<UserData>> _userData = {};
	
};