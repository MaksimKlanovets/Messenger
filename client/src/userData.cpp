#include "/home/neronsuper/Documents/vsc projects/Messanger/client/include/userData.h"



UserData::UserData()
{
	_privateUserData = {};
}

UserData::UserData(UserData&& copy) 
	: _privateUserData(copy._privateUserData), _messages(std::move(copy._messages))
{
	
}

UserData::UserData(PrivateUserData const &privateUserData)
	: _privateUserData(privateUserData)
{
	
}




void UserData::setLogin(const std::string& login)
{
	
}

void UserData::setPassword(const std::string& password)
{
	
}

void UserData::setName(const std::string& name)
{

}

const Message* UserData::setMessage()
{
	Message* m = new Message(); 
	return m;
}

void UserData::setMessageData(Message&& messageData)
{

	 
}

PrivateUserData* UserData::getPrivateUserData()
{
	return &_privateUserData;
}





