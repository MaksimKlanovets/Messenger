#include "/home/neronsuper/Documents/vsc projects/Messanger/client/include/message.h"
#include <sstream>

Message::Message()
{
	std::time_t t = std::time(0);   // get time now
	_dt = std::localtime(&t);
	_data = {};
}


Message::Message(const std::string& login, const std::string &message)
{
	//and set current time 
	
}

const std::string Message::getMessage() const
{
	return _data.second;
}

const std::string Message::getLogin() const
{
	return _data.first;
}

const tm &Message::getTime()const
{
	return *_dt;
}

void Message::setLogin(std::string& login)
{
	_data.first = login;
}

void Message::setMessage(std::string& message)
{
	
}

void Message::setDt(tm &dt)
{
	
}



