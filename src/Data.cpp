#include "Data.h"

Data::Data()
{
    this->id = 0;
    this->type = "";
    this->valeur = 0.0;
    this->timeStamp = 0;
}

Data::Data(int id, std::string type, double valeur, int timeStamp)
{
    this->id = id;
    this->type = type;
    this->valeur = valeur;
    this->timeStamp = timeStamp;
}

Data::Data(const Data& other)
{
    this->id = other.id;
    this->type = other.type;
    this->valeur = other.valeur;
    this->timeStamp = other.timeStamp;
}

Data::~Data()
{
}

Data& Data::operator=(const Data& other)
{
    this->id = other.id;
    this->type = other.type;
    this->valeur = other.valeur;
    this->timeStamp = other.timeStamp;

    return *this;
}

std::string Data::toString()
{
    return "";
}
