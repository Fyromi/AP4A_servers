#ifndef DATA_H
#define DATA_H

#include <string>

class Data
{
private:
    int id;
    std::string type;
    double valeur;
    int timeStamp;

public:
    Data();
    Data(int id, std::string type, double valeur, int timeStamp);
    Data(const Data& other);
    ~Data();

    Data& operator=(const Data& other);

    std::string toString();
};

#endif
