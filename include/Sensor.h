#ifndef SENSOR_H
#define SENSOR_H

#include <ostream>
#include <string>
#include "Data.h"
#include "Server.h"

class Sensor
{
protected:
    static int nextId;
    int id;
    int measureTime;
    std::string type;
    Data data; // en gros c'est la derniere donnée produite par le capteur
    Server* server;

public:
    Sensor();
    Sensor(std::string type, Server* server, int measureTime);
    Sensor(const Sensor& other);
    virtual ~Sensor();

    Sensor& operator=(const Sensor& other);

    void update(int currentTime);
    void execute(int currentTime);
    virtual double generateValue() = 0;

    friend std::ostream& operator<<(std::ostream& os, const Sensor& s);
};

#endif
