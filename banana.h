#ifndef BANANA_H
#define BANANA_H

#include "fruit.h"

class Banana : public Fruit
{
    private:
        bool peel;
    public: 
        //constructors
        Banana();
        Banana(string, int, Seed*, bool);
        Banana(Banana const&);

        //getters
        bool getPeel();

        //setters
        void setPeel(bool);

        //addl. methods
        void printBanana();
};

#endif