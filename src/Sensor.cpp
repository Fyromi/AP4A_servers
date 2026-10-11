#include "Sensor.h"

int Sensor::nextId = 0;

Sensor::Sensor()
{
    this->id = nextId++;
    this->type = "";
    this->data = Data();
    this->measureTime = 0;
    this->server = nullptr;
}

Sensor::Sensor(std::string type, Server* server)
{
    this->id = nextId++;
    this->type = type;
    this->server = server;
}


Sensor::Sensor(const Sensor& other)
{
    this->id = nextId++; // d'ailleur ici faut faire gaffe, comme c'est un nouveau capteurs faut lui donné un nouvel id et donc repartir de 0, même si c'est un constructeur par copie
    this->type = other.type;
    this->measureTime = other.measureTime;
    this->data = other.data;
    this->server = other.server;
}

Sensor::~Sensor()
{
}

Sensor& Sensor::operator=(const Sensor& other)
{
    // alors qu'ici on garde son propre ID
    this->type = other.type;
    this->data = other.data;
    this->measureTime = other.measureTime;
    this->server = other.server;

    return *this;
}

void Sensor::update(int currentTime)
{
    if (currentTime - this->data.getTimeStamp() <= this->measureTime) {
        this->execute();
    }

}

void Sensor::execute()
{

    this->data.setValeur((std::rand() % 6) + 1);
    this->server->dataRecu(this->data);


}
