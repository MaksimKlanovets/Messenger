#include "/home/neronsuper/Documents/vsc projects/Messanger/client/include/cliMessage.h"

CLImessage::CLImessage()
{
    _baseApp = nullptr;
}

void CLImessage::help()
{
}

void CLImessage::sendMessage(UserData* ud)
{
    _baseApp = BaseApp::instance();

    std::system("clear");

    std::string receiver = "";
    std::string tmpMessage = "";
    do
    {
        std::cout << "Message to: ";
        std::cin >> receiver;
        if (!_baseApp->isUserExist(receiver))
        {
            continue;
        }
        std::cout << "Your message to " << receiver << ": ";
        std::cin.clear();
        std::cin.ignore(255, '\n');
        std::getline(std::cin, tmpMessage);

        break;
    }
    while(1);

    Message ms(ud->getPrivateUserData()->getPData()->first, tmpMessage);
    _baseApp->sendMessage(ms, receiver);

}