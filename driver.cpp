#include "banana.h"

int main()
{
    Seed bananaSeed(1, "round");
    Banana newBanana("yellow", 12, &bananaSeed, true);

    newBanana.printBanana();

    newBanana.setPeel(false);

    newBanana.printBanana();

    return 0;
}