#ifndef ABC_DZ1_MATRIX_H
#define ABC_DZ1_MATRIX_H

//------------------------------------------------------------------------------
// Matrix.h - contains definition of matrix.
//------------------------------------------------------------------------------

#include "Common.h"
#include "Diagonal.h"
#include "Triangularn.h"

//------------------------------------------------------------------------------
// Structure summarizing all matrices.
struct Matrix {
    // Values of keys for different matrices.
    enum key {
        COMMON, DIAGONAL, TRIANGULAR
    };
    key k; // Key.
    // Alternatives.
    union { // Simple realization.
        Common c;
        Diagonal d;
        Triangularn t;
    };
};

// Input matrix.
Matrix *In(FILE *file);

// Random input.
Matrix *InRnd();

// Output matrix.
void Out(Matrix &m, FILE *file);

// Get average of elements of figure.
double Average(Matrix &m);

// Swap function for ShakerSort.
void Swap(Matrix &m1, Matrix &m2);

#endif //ABC_DZ1_MATRIX_H