#include "Server.h"

Server::Server()
{
    this->consoleEnabled = true;
    this->logPath = "logs/"; //si t'as d'autre idée dit moi mais dans un dossier logs/ ca me semblais pas mal
}

Server::Server(bool consoleEnabled, std::string logPath)
{
    this->consoleEnabled = consoleEnabled;
    this->logPath = logPath;
}

Server::Server(const Server& other)
{
    this->consoleEnabled = other.consoleEnabled;
    this->logPath = other.logPath;
}

Server::~Server()
{
}

Server& Server::operator=(const Server& other)
{
    this->consoleEnabled = other.consoleEnabled;
    this->logPath = other.logPath;

    return *this;
}

void Server::consoleWrite(const Data& d)
{
}

void Server::fileWrite(const Data& d)
{
}

void Server::dataRecu(const Data& d)
{
}
