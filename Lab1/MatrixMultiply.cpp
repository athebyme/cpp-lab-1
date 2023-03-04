//
// Created by Anton on 04.03.2023.
//

#include "MatrixMultiply.h"
#include <iostream>

void Matrix::print_matrix(const float *matrix) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << *(matrix + i * 3 + j) << " | ";
        }
        std::cout << std::endl;
    }
}

void Matrix::multiply_matrix_link(float (&matrix)[3][3], float scalar) {
    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 3; ++j){
            matrix[i][j] *= scalar;
        }
    }
}

void Matrix::multiply_matrix_pointer(float *matrix, float scalar) {
    for (int i = 0; i < 9; i++) {
        *(matrix + i) *= scalar;
    }
}
