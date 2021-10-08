//------------------------------------------------------------------------------
// Diagonal.cpp - implementation of Diagonal.h.
//------------------------------------------------------------------------------

#include <stdexcept>
#include "Diagonal.h"
#include "Rand.h"

//------------------------------------------------------------------------------
// Input parameters from file.
void In(Diagonal &d, FILE *file) {
    int dimension;
    fscanf(file, "%d", &dimension);
    d.matrixArray = new double [dimension];
    for (int i = 0; i < dimension; ++i) {
        fscanf(file, "%lf", &d.matrixArray[i]);
    }
    d.dimension = dimension;
}

// Random parameters.
void InRnd(Diagonal &d) {
    d.dimension = Random();
    d.matrixArray = new double [d.dimension];
    for (int i = 0; i < d.dimension; ++i) {
        d.matrixArray[i] = Random(0);
    }
}

//------------------------------------------------------------------------------
// Output diagonal matrix parameters.
void Out(Diagonal &d, FILE *file) {
    fprintf(file, "%s%d%s%.2f", "It is Diagonal matrix: dimension = ", d.dimension, ". Average = ",
            Average(d));
}

//------------------------------------------------------------------------------
// Get average of elements of diagonal matrix.
double Average(Diagonal &d) {
    double average = 0;
    for (int i = 0; i < d.dimension; ++i) {
            average += d.matrixArray[i];
    }
    return average / (d.dimension*d.dimension);
}
