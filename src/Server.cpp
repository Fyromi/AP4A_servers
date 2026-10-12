#include "Server.h"

#include <filesystem>
#include <fstream>
#include <iostream>
#include <ostream>
#include "Data.h"

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
    std::cout << d << '\n';
}

void Server::fileWrite(const Data& d)
{
    std::filesystem::create_directories(this->logPath);
    const std::string fileName = this->logPath + d.getType()+".csv";

    bool writeHeader = true;

    if (std::filesystem::exists(fileName)) {

        writeHeader = (std::filesystem::file_size(fileName)==0);
    }


    std::ofstream file(fileName, std::ios::app);

    if (!file)
    {
        std::cerr << "Erreur : impossible d'ouvrir " << fileName << '\n';
        return;
    }

    if (writeHeader) {
        file<<"time; sensor; type; value\n";
    }

    file << d << '\n';
}

void Server::dataRecu(const Data& d)
{
    consoleWrite(d);
    fileWrite(d);
}

std::ostream& operator<<(std::ostream& os, const Server& s)
{
    os << "Server (console : " << (s.consoleEnabled ? "on" : "off")
       << ", logs : " << s.logPath << ")";
    return os;
}
