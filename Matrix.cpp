//------------------------------------------------------------------------------
// Matrix.cpp - contains procedures for processing matrices (and input/output).
//------------------------------------------------------------------------------

#include <stdexcept>
#include "Matrix.h"

//------------------------------------------------------------------------------
// Input parameters for matrix from file.
Matrix *In(FILE *file) {
    Matrix *mat;
    int k;
    fscanf(file, "%d", &k);
    switch (k) {
        case 1:
            mat = new Matrix;
            mat->k = Matrix::COMMON;
            In(mat->c, file);
            return mat;
        case 2:
            mat = new Matrix;
            mat->k = Matrix::DIAGONAL;
            In(mat->d, file);
            return mat;
        case 3:
            mat = new Matrix;
            mat->k = Matrix::TRIANGULAR;
            In(mat->t, file);
            return mat;
        default:
            throw std::invalid_argument("Incorrect number of matrix.");
    }

}

//------------------------------------------------------------------------------
// Random values for matrix.
Matrix *InRnd() {
    Matrix *mat;
    int k = rand() % 2 + 1;
    switch (k) {
        case 1:
            mat = new Matrix;
            mat->k = Matrix::COMMON;
            InRnd(mat->c);
            return mat;
        case 2:
            mat = new Matrix;
            mat->k = Matrix::DIAGONAL;
            InRnd(mat->d);
            return mat;
        case 3:
            mat = new Matrix;
            mat->k = Matrix::TRIANGULAR;
            InRnd(mat->t);
            return mat;
        default:
            return 0;
    }
}

//------------------------------------------------------------------------------
// Output Matrix.
void Out(Matrix &m, FILE *file) {
    switch (m.k) {
        case Matrix::COMMON:
            Out(m.c, file);
            break;
        case Matrix::DIAGONAL:
            Out(m.d, file);
            break;
        case Matrix::TRIANGULAR:
            Out(m.t, file);
            break;
        default:
            fprintf(file, "%s", "Incorrect matrix!");
    }
}

//------------------------------------------------------------------------------
// Get average of matrix.
double Average(Matrix &m) {
    switch (m.k) {
        case Matrix::COMMON:
            return Average(m.c);
        case Matrix::DIAGONAL:
            return Average(m.d);
        case Matrix::TRIANGULAR:
            return Average(m.t);
        default:
            return 0.0;
    }
}

//------------------------------------------------------------------------------
// Swap function for ShakerSort.
void Swap(Matrix &m1, Matrix &m2) {
    Matrix temp;
    temp = m1;
    m1 = m2;
    m2 = temp;
}