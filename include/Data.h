#ifndef DATA_H
#define DATA_H

#include <ostream>
#include <string>

class Data
{
private:
    int id;
    std::string type;
    double valeur;
    int timeStamp;

public:
    Data();
    Data(int id, std::string type, double valeur, int timeStamp);
    Data(const Data& other);
    ~Data();

    Data& operator=(const Data& other);

    int getTimeStamp() const;

    int getId() const;

    const std::string getType() const;

    void setValeur(double valeur);

    double getValeur() const;

    friend std::ostream& operator<<(std::ostream& os, const Data& d);
};

#endif
