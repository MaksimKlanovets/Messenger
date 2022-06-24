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

bool BaseApp::isUserExist(std::string username)
{
	for (int i = 0; i < _userData.size(); ++i)
	{
		if (_userData[i].getPrivateUserData()->getPData()->first == username)
			return true;
	}

	return false;
}

void BaseApp::addUser(UserData& userData)
{
	_userData.push_back(userData);
	
	std::fstream myfile("/home/neronsuper/Documents/vsc projects/Messanger/Database/users.txt", std::ios::app);
	if (myfile.is_open())
	{
		myfile << userData.getPrivateUserData()->getPData()->first << " " << userData.getPrivateUserData()->getPData()->second << "\n";
	}
	myfile.close();
	

	createDirectory("/home/neronsuper/Documents/vsc projects/Messanger/Database/users/", userData.getPrivateUserData()->getPData()->first); //creating main directory
	
	std::string mainDirectory("/home/neronsuper/Documents/vsc projects/Messanger/Database/users/");
	mainDirectory.append(userData.getPrivateUserData()->getPData()->first).append("/");

	createDirectory(mainDirectory, "chats"); //creating chats
}

void BaseApp::createDirectory(std::string string_path, std::string directory_name)
{
	string_path.append(directory_name);
	int status = mkdir(string_path.c_str(),0777);
}