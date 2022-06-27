#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "/home/neronsuper/Documents/vsc projects/Messanger/client/src/message.cpp"
#include "/home/neronsuper/Documents/vsc projects/Messanger/client/src/privateUserData.cpp"

class UserData
{
public:
	UserData();
	UserData(const UserData& copy);
	//UserData(const std::unique_ptr<UserData>& copy);
	UserData(PrivateUserData const &privateUserData);
	//UserData(const std::unique_ptr<UserData>&) = delete;

	void setLogin(const std::string& login);
	void setPassword(const std::string& password);
	void setName(const std::string& name);
	const Message* setMessage();
	void setMessageData(Message&& messageData);

	PrivateUserData* getPrivateUserData();

private:
	PrivateUserData _privateUserData;
	std::vector<Message> _messages;
	
};

