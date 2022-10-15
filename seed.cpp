#include "seed.h"

//constructors
Seed::Seed()
{
    size = 0;
    shape = "";
}
Seed::Seed(int s, string sh)
{
    size = s;
    shape = sh;
}
Seed::Seed(Seed const &s)
{
    size = s.size;
    shape = s.shape;
}

//getters
int Seed::getSize()
{
    return size;
}
string Seed::getShape()
{
    return shape;
}

//setters
void Seed::setSize(int s)
{
    size = s;
}
void Seed::setShape(string sh)
{
    shape = sh;
}

//addl. methods
void Seed::printSeed()
{
    cout << "Seed size: " << size << endl;
    cout << "Seed Shape: " << shape << endl << endl;
}