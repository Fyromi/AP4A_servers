#ifndef SERVER_H
#define SERVER_H

#include <string>
#include "Data.h"

class Server
{
private:
    bool consoleEnabled;
    std::string logPath;

public:
    Server();
    Server(bool consoleEnabled, std::string logPath);
    Server(const Server& other);
    ~Server();

    Server& operator=(const Server& other);

    void consoleWrite(const Data& d);
    void fileWrite(const Data& d);
    void dataRecu(const Data& d);
};

#endif
