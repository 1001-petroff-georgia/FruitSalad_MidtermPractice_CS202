#ifndef SEED_H
#define SEED_H

#include <iostream>
using namespace std;

class Seed
{
    protected:
        int size;
        string shape;
    public:
        //constructors
        Seed();
        Seed(int, string);
        Seed(Seed const&);

        //getters
        int getSize();
        string getShape();

        //setters
        void setSize(int);
        void setShape(string);

        //addl. methods
        void printSeed();
};

#endif