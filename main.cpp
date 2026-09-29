#include <iostream>
#include <cstdlib>
#include <ctime>

#include "randfuncs.h"

using namespace std;

int main()
{
    // Seed the random number generator once
    srand(time(nullptr));

    cout << "Coin flip: ";

    if (flipCoin() == 0)
        cout << "Heads";
    else
        cout << "Tails";

    cout << endl;

    cout << "6-sided die: " << rollD6() << endl;
    cout << "10-sided die: " << rollD10() << endl;

    return 0;
}