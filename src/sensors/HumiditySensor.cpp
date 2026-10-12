#include "sensors/HumiditySensor.h"

#include <cstdlib>

HumiditySensor::HumiditySensor(Server* server, int measureTime)
    : Sensor("Humidity", server, measureTime)
{
}

double HumiditySensor::generateValue()
{
    return 30.0 + (std::rand() % 400) / 10.0; // ça va de 30 à 70 juste pour être cohérent
}
