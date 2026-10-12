#include "sensors/LightSensor.h"

#include <cstdlib>

LightSensor::LightSensor(Server* server, int measureTime)
    : Sensor("Light", server, measureTime)
{
}

double LightSensor::generateValue()
{
    return std::rand() % 2; // Soit 0 soit 1
}
