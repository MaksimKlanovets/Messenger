#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <map>
#include "/home/neronsuper/Documents/vsc projects/Messanger/client/src/message.cpp"
#include "/home/neronsuper/Documents/vsc projects/Messanger/client/src/privateUserData.cpp"

class UserData
{
public:
	UserData();
	UserData(UserData&& copy);
	UserData(PrivateUserData const &privateUserData);

	void setLogin(const std::string& login);
	void setPassword(const std::string& password);
	void setName(const std::string& name);
	const Message* setMessage();
	void setMessageData(Message&& messageData);

	PrivateUserData* getPrivateUserData();

private:
	std::unique_ptr<PrivateUserData> _privateUserData;
	std::vector <std::unique_ptr<Message>> _messages = {};
	
};

