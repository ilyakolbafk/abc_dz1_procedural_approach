#ifndef ABC_DZ1_TRIANGULAR_H
#define ABC_DZ1_TRIANGULAR_H

//------------------------------------------------------------------------------
// Triangularn.h - contains description of triangular matrix.
//------------------------------------------------------------------------------

#include <stdio.h>
#include "Rand.h"

//------------------------------------------------------------------------------
// Triangular matrix.
struct Triangularn {
    int dimension; // Dimension.
    double *matrixArray; // Elements of matrix.
};

// Input parameters from file.
void In(Triangularn &t, FILE* file);

// Random parameters.
void InRnd(Triangularn &t);

// Output triangularn matrix.
void Out(Triangularn &t, FILE* file);

// Get average of elements of triangularn matrix.
double Average(Triangularn &t);

#endif //ABC_DZ1_TRIANGULAR_H
