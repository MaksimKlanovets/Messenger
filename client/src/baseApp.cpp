#include "/home/neronsuper/Documents/vsc projects/Messanger/client/include/baseApp.h"



BaseApp* BaseApp::_instance = 0;
BaseApp* BaseApp::instance()
{
	if (_instance == 0)
	{
		// use unique_ptr insted new
		_instance = new BaseApp;
	}
	return _instance;
}


BaseApp::BaseApp()
{
}

BaseApp& BaseApp::operator=(const BaseApp&)
{
	return *this;
}


void BaseApp::writeRegUserToFile()
{

}
void BaseApp::writeMessageToFile()
{

}

void BaseApp::readUsersFromFile()
{
	std::ifstream myfile("/home/neronsuper/Documents/vsc projects/Messanger/Database/users.txt");
	std::string first_output;
	std::string second_output;
	
	
	if (myfile.is_open())
	{
		std::cout << "HERE!\n";
		while (true)
		{
			myfile >> first_output >> second_output;
			if (myfile.eof()) break;
			_userData.push_back(UserData(PrivateUserData(first_output, second_output)));
		}
		
	}
	else
	{
		std::cout << "File can't be openned\n";
	}
	myfile.close();
}

void BaseApp::readHistoryMes()
{
	
}