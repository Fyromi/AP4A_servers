#ifndef HUMIDITYSENSOR_H
#define HUMIDITYSENSOR_H

#include "Sensor.h"

class HumiditySensor : public Sensor
{
public:
    HumiditySensor(Server* server, int measureTime);

    double generateValue() override;
};

#endif
