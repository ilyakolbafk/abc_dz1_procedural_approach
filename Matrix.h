#ifndef TASK1_MATRIX_H
#define TASK1_MATRIX_H

//------------------------------------------------------------------------------
// Matrix.h - contains definition of matrix.
//------------------------------------------------------------------------------

#include "Common.h"
#include "Diagonal.h"
#include "Triangularn.h"

//------------------------------------------------------------------------------
// Structure summarizing all shapes.
struct Matrix {
    // Values of keys for different figures.
    enum key {COMMON, DIAGONAL, TRIANGULAR};
    key k; // Key.
    // Alternatives.
    union { // Simple realization.
        Common c;
        Diagonal d;
        Triangularn t;
    };
};

// Input figure.
Matrix *In(FILE* file);

// Random input.
Matrix *InRnd();

// Output figure.
void Out(Matrix &m, FILE* file);

// Get square of figure.
double Average(Matrix &m);

// Swap function for ShakerSort.
void Swap(Matrix &m1, Matrix &m2);

#endif //TASK1_MATRIX_H