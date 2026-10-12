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

void Scheduler::simulation(int duree)
{
    for (int t = 0; t < duree; t += this->timeStep) {
        for (size_t i = 0; i < this->sensors.size(); i++) {
            this->sensors[i]->update(t);
        }
    }
}

void Scheduler::addSensor(Sensor* s)
{
    this->sensors.push_back(s);
}

std::ostream& operator<<(std::ostream& os, const Scheduler& s)
{
    os << "Scheduler (Time Step : " << s.timeStep << ", "
       << s.sensors.size() << " Sensors)\n";
    for (size_t i = 0; i < s.sensors.size(); i++) {
        os << "  - " << *s.sensors[i] << '\n';
    }
    return os;
}
