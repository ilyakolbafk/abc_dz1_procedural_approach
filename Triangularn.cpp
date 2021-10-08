//------------------------------------------------------------------------------
// Triangularn.cpp - implementation of tetrahedron.h.
//------------------------------------------------------------------------------

#include "Triangularn.h"
#include "Rand.h"
#include <math.h>
#include <stdexcept>

//------------------------------------------------------------------------------
// Input parameters from file.
void In(Triangularn &t, FILE* file) {
    int dimension;
    fscanf(file, "%d", &dimension);
    t.matrixArray = new double [dimension*(dimension + 1)/2];
    for (int i = 0; i < dimension*(dimension + 1)/2; ++i) {
        fscanf(file, "%lf", &t.matrixArray[i]);
    }
    t.dimension = dimension;
}

// Random parameters.
void InRnd(Triangularn &t) {
    t.dimension = Random();
    t.matrixArray = new double [t.dimension*(t.dimension + 1)/2];
    for (int i = 0; i < t.dimension*(t.dimension + 1)/2; ++i) {
        t.matrixArray[i] = Random(0);
    }
}

//------------------------------------------------------------------------------
// Output triangularn matrix.
void Out(Triangularn &t, FILE* file) {
    fprintf(file, "%s%d%s%.2f", "It is Triangular matrix: dimension = ", t.dimension, ". Average = ",
            Average(t));
}

//------------------------------------------------------------------------------
// Get average of elements of triangularn matrix.
double Average(Triangularn &t) {
    double average = 0;
    for (int i = 0; i < t.dimension*(t.dimension + 1)/2; ++i) {
        average += t.matrixArray[i];
    }
    return average / (t.dimension*t.dimension);
}
