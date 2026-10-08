#ifndef SCHEDULER_H
#define SCHEDULER_H

#include <vector>
#include "Sensor.h"

class Scheduler
{
private:
    std::vector<Sensor*> sensors;
    int timeStep;

public:
    Scheduler();
    Scheduler(int timeStep);
    Scheduler(const Scheduler& other);
    ~Scheduler();

    Scheduler& operator=(const Scheduler& other);

    void simulation(int duree);
    void addSensor(Sensor* s);
};

#endif
