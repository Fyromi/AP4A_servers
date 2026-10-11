#include "Scheduler.h"

Scheduler::Scheduler()
{

    this->timeStep = 1;
    this->sensors.clear();

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

void Scheduler::simulation(int duree) {

    for (int i = 0; i < this->sensors.size(); i++) {
        this->sensors[i]->update(0);

    }
}

void Scheduler::addSensor(Sensor* s)
{
    this->sensors.push_back(s);
}
