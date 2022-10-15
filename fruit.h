#ifndef FRUIT_H
#define FRUIT_H

#include "seed.h"

class Fruit
{
    protected:
        string color;
        int numSeeds;
        Seed *seedType;
    public:
        //constructors
        Fruit();
        Fruit(string, int, Seed*);
        Fruit(Fruit const&);

        //getters
        string getColor();
        int getNumSeeds();
        Seed* getSeedType();

        //setters
        void setColor(string);
        void setNumSeeds(int);
        void setSeedType(Seed*);

        //addl. methods
        void printFruit();
};

#endif