#include "sensors/HumiditySensor.h"

#include <cstdlib>

HumiditySensor::HumiditySensor(Server* server, int measureTime)
    : Sensor("Humidity", server, measureTime)
{
}

double HumiditySensor::generateValue()
{
    return 30.0 + (std::rand() % 400) / 10.0;
}
