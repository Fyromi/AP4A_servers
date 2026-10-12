#include <ctime>

#include "Scheduler.h"

int main()
{
    Server serveur = Server();

    Scheduler scheduleur = Scheduler();

    Sensor sensore1 = Sensor("Son type", &serveur, 2);
    Sensor sensore2 = Sensor("Son type 2", &serveur, 3);

    scheduleur.addSensor(&sensore1);
    scheduleur.addSensor(&sensore2);


    std::srand(std::time(nullptr));

    scheduleur.simulation(10);


}
