#include "banana.h"

Seed bananaSeed(1, "round");

Banana::Banana()
{
    color = "NONE";
    numSeeds = -1;
    seedType = &bananaSeed;
    peel = false;
}
Banana::Banana(string c, int n, Seed *t, bool p)
{
    color = c;
    numSeeds = n;
    seedType = t;
    peel = p;
}
Banana::Banana(Banana const &b)
{
    color = b.color;
    numSeeds = b.numSeeds;
    seedType = b.seedType;
    peel = b.peel;
}

//getters
bool Banana::getPeel()
{
    return peel;
}

//setters
void Banana::setPeel(bool p)
{
    peel = p;
}

//addl. methods
void Banana::printBanana()
{
    cout << "This fruit is a banana, and it is currently ";
    if (peel)
    {
        cout << "not peeled." << endl;
    }
    else
    {
        cout << "peeled." << endl;
    }

    printFruit();
}