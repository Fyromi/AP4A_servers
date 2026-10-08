#ifndef SENSOR_H
#define SENSOR_H

#include <string>
#include "Data.h"
#include "Server.h"

class Sensor
{
protected:
    static int nextId;
    int id;
    std::string type;
    Data data; // en gros c'est la derniere donnée produite par le capteur
    Server* server;

public:
    Sensor();
    Sensor(std::string type, Server* server);
    Sensor(const Sensor& other);
    virtual ~Sensor();

    Sensor& operator=(const Sensor& other);

    void update(int currentTime);
    void execute();
    virtual double generateValue() = 0;
};

#endif
