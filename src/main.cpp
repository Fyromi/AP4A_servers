#include <ctime>
#include <iostream>

#include "Scheduler.h"
#include "sensors/TemperatureSensor.h"
#include "sensors/HumiditySensor.h"
#include "sensors/SoundSensor.h"
#include "sensors/LightSensor.h"

int main()
{
    Server serveur = Server();

    Scheduler scheduleur = Scheduler();

    TemperatureSensor temperature(&serveur, 2);
    HumiditySensor humidity(&serveur, 3);
    SoundSensor sound(&serveur, 1);
    LightSensor light(&serveur, 5);

    scheduleur.addSensor(&temperature);
    scheduleur.addSensor(&humidity);
    scheduleur.addSensor(&sound);
    scheduleur.addSensor(&light);


    std::cout << serveur << '\n';
    std::cout << scheduleur << '\n';

    std::srand(std::time(nullptr));

    scheduleur.simulation(10);

}
