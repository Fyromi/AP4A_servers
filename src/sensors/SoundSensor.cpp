#include "sensors/SoundSensor.h"

#include <cstdlib>

SoundSensor::SoundSensor(Server* server, int measureTime)
    : Sensor("Sound", server, measureTime)
{
}

double SoundSensor::generateValue()
{
    return 30 + std::rand() % 61; 
}
