#include "Data.h"

Data::Data() {
    this->id = 0;
    this->type = "";
    this->valeur = 0.0;
    this->timeStamp = 0;
}

Data::Data(int id, std::string type, double valeur, int timeStamp) {
    this->id = id;
    this->type = type;
    this->valeur = valeur;
    this->timeStamp = timeStamp;
}

Data::Data(const Data &other) {
    this->id = other.id;
    this->type = other.type;
    this->valeur = other.valeur;
    this->timeStamp = other.timeStamp;
}

Data::~Data() {
}

Data &Data::operator=(const Data &other) {
    this->id = other.id;
    this->type = other.type;
    this->valeur = other.valeur;
    this->timeStamp = other.timeStamp;

    return *this;
}

int Data::getTimeStamp() const {
    return this->timeStamp;
}

int Data::getId() const{
    return this->id;
}

const std::string Data::getType() const {
    return this->type;
}

void Data::setValeur(double v) {
    this->valeur = v;
}

double Data::getValeur() const {
    return this->valeur;
}

const std::string Data::toString() const {
    char chain[256];
    const char *p = this->type.c_str();

    sprintf(chain, "the id is %d \n "
            "the type is %s \n"
            "this is the value %f \n"
            "this is the time stamp %d \n --------------------------------- \n"
            , this->id, p, this->valeur, this->timeStamp);
    return chain;
}
