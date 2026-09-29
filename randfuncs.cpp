#include "randfuncs.h"
#include <cstdlib>

// Flip a coin: 0 = Heads, 1 = Tails
int flipCoin()
{
    return rand() % 2;
}

// Roll a six-sided die: 1–6
int rollD6()
{
    return rand() % 6 + 1;
}

// Roll a ten-sided die: 1–10
int rollD10()
{
    return rand() % 10 + 1;
}