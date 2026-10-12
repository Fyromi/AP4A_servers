#ifndef LIGHTSENSOR_H
#define LIGHTSENSOR_H

#include "Sensor.h"

class LightSensor : public Sensor
{
public:
    LightSensor(Server* server, int measureTime);

    double generateValue() override;
};

#endif
