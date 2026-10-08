#include "Scheduler.h"

Scheduler::Scheduler()
{
    this->timeStep = 1;
}

Scheduler::Scheduler(int timeStep)
{
    this->timeStep = timeStep;
}

Scheduler::Scheduler(const Scheduler& other)
{
    this->sensors = other.sensors;
    this->timeStep = other.timeStep;
}

Scheduler::~Scheduler()
{
}

Scheduler& Scheduler::operator=(const Scheduler& other)
{
    this->sensors = other.sensors;
    this->timeStep = other.timeStep;

    return *this;
}

void Scheduler::simulation(int duree)
{
}

void Scheduler::addSensor(Sensor* s)
{
}
