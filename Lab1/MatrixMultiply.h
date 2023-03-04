//
// Created by Anton on 04.03.2023.
//

#ifndef CPP_MATRIXMULTIPLY_H
#define CPP_MATRIXMULTIPLY_H
class Matrix{
public:
    static void print_matrix(const float *matrix);
    static void multiply_matrix_link(float (&matrix)[3][3], float scalar);
    static void multiply_matrix_pointer(float *matrix, float scalar);
};
#endif //CPP_MATRIXMULTIPLY_H
