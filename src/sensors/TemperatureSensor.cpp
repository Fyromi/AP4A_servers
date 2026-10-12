#include "sensors/TemperatureSensor.h"

#include <cstdlib>

TemperatureSensor::TemperatureSensor(Server* server, int measureTime)
    : Sensor("Temperature", server, measureTime)
{
}

double TemperatureSensor::generateValue()
{
    return (std::rand() % 401) / 10.0;
}
