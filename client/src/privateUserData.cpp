#include "privateUserData.h"

PrivateUserData::PrivateUserData()
{
	_name = {};
	_pData = {};
}

PrivateUserData::PrivateUserData(const std::string &login, const std::string& password)
	: PrivateUserData()
{
	_pData.first = login;
	_pData.second = password;
}

PrivateUserData::PrivateUserData(const std::string &name, const std::string &login, const std::string &password)
	: PrivateUserData(login, password)
{
	_name = name;
}

