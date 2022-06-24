#pragma once
#include <string>
#include <iostream>


class PrivateUserData
{
public:
	PrivateUserData();
	PrivateUserData(const std::string &login, const std::string &password);
	PrivateUserData(const std::string& name, const std::string& login, const std::string& password);

	std::pair<std::string, std::string>* getPData();
	std::string* getName();

private:
	std::pair<std::string, std::string> _pData; 
	std::string _name;
	
	

};

