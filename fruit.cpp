#include "fruit.h"

Seed fruitSeed;

Fruit::Fruit()
{
    color = "";
    numSeeds = 0;
    seedType = &fruitSeed;
}
Fruit::Fruit(string c, int n, Seed *t)
{
    color = c;
    numSeeds = n;
    seedType = t;
}
Fruit::Fruit(Fruit const &f)
{
    color = f.color;
    numSeeds = f.numSeeds;
    seedType = f.seedType;
}

//getters
string Fruit::getColor()
{
    return color;
}
int Fruit::getNumSeeds()
{
    return numSeeds;
}
Seed* Fruit::getSeedType()
{
    return seedType;
}

//setters
void Fruit::setColor(string c)
{
    color = c;
}
void Fruit::setNumSeeds(int n)
{
    numSeeds = n;
}
void Fruit::setSeedType(Seed *t)
{
    seedType = t;
}

//addl. methods
void Fruit::printFruit()
{
    cout << "It is " << color << " and has " << numSeeds << " seeds" << endl;
    cout << "Each seed has the following attributes: " << endl;
    seedType->printSeed();
}