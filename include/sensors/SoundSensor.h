#ifndef SOUNDSENSOR_H
#define SOUNDSENSOR_H

#include "Sensor.h"

class SoundSensor : public Sensor
{
public:
    SoundSensor(Server* server, int measureTime);

    double generateValue() override;
};

#endif
