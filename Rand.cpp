//------------------------------------------------------------------------------
// Rand.cpp - Random functions.
//------------------------------------------------------------------------------

#include <stdlib.h>
#include "Rand.h"

// Random integer from 1 to 100.
int Random() {
    return rand() % 101 - 100;
}

// Random double from -100 to 100.
double Random(double i) {
    return (Random() * (rand() % 1001 - 500) / 500.0);
}
