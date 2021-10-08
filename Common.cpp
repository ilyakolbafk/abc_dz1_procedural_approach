//------------------------------------------------------------------------------
// Common.cpp - implementation of Common.h.
//------------------------------------------------------------------------------

#include "Common.h"
#include "Rand.h"

//------------------------------------------------------------------------------
// Input parameters from file.
void In(Common &c, FILE *file) {
    int dimension;
    fscanf(file, "%d", &dimension);
    c.matrixArray = new double *[dimension];
    for (int i = 0; i < dimension; ++i) {
        c.matrixArray[i] = new double[dimension];
        for (int j = 0; j < dimension; ++j) {
            fscanf(file, "%lf", &c.matrixArray[i][j]);
        }
    }
    c.dimension = dimension;

}

// Random parameters.
void InRnd(Common &c) {
    c.dimension = Random();
    c.matrixArray = new double *[c.dimension];
    for (int i = 0; i < c.dimension; ++i) {
        c.matrixArray[i] = new double[c.dimension];
        for (int j = 0; j < c.dimension; ++j) {
            c.matrixArray[i][j] = Random(0);
        }
    }
}

//------------------------------------------------------------------------------
// Output common matrix parameters and square.
void Out(Common &c, FILE *file) {
    fprintf(file, "%s%d%s%.2f", "It is Common matrix: dimension = ", c.dimension,". Average = ",
            Average(c));
}

//------------------------------------------------------------------------------
// Get average of elements of common matrix.
double Average(Common &c) {
    double average = 0;
    for (int i = 0; i < c.dimension; ++i) {
        for (int j = 0; j < c.dimension; ++j) {
            average += c.matrixArray[i][j];
        }
    }
    return average / (c.dimension*c.dimension);
}
