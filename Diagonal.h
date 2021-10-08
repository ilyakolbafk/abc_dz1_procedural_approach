#ifndef ABC_DZ1_DIAGONAL_H
#define ABC_DZ1_DIAGONAL_H

//------------------------------------------------------------------------------
// Diagonal.h - contains description of diagonal matrix.
//-----------------------------------------------------------------------------

#include <stdio.h>
#include "Rand.h"

//------------------------------------------------------------------------------
// Diagonal matrix.
struct Diagonal {
    int dimension; // Dimension.
    double *matrixArray; // Elements of matrix.
};

// Input parameters from file.
void In(Diagonal &d, FILE* file);

// Random parameters.
void InRnd(Diagonal &d);

// Output diagonal matrix parameters.
void Out(Diagonal &d, FILE* file);

// Get average of elements of diagonal matrix.
double Average(Diagonal &d);

#endif //ABC_DZ1_DIAGONAL_H
