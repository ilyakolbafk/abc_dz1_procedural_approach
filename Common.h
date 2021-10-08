#ifndef ABC_DZ1_COMMON_H
#define ABC_DZ1_COMMON_H

//------------------------------------------------------------------------------
// Common.h - contains description of common matrix.
//------------------------------------------------------------------------------

#include <stdio.h>
#include "Rand.h"

//------------------------------------------------------------------------------
// Common matrix.
struct Common {
    int dimension; // Dimension.
    double **matrixArray; // Elements of matrix.
};

// Input parameters from file.
void In(Common &c, FILE* file);

// Random parameters.
void InRnd(Common &c);

// Output common matrix parameters.
void Out(Common &c, FILE* file);

// Get average of elements of matrix.
double Average(Common &c);

#endif //ABC_DZ1_COMMON_H
