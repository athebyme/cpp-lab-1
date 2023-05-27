#include "Matrix.h"

namespace Matrix {
    void Matrix::print_matrix() const {
        for (const auto& row : matrix) {
            for (const auto& element : row) {
                std::cout << element << " ";
            }
            std::cout << std::endl;
        }
    }

    void Matrix::multiply_matrix_pointer(float scalar) {
        for (auto& row : matrix) {
            for (auto& element : row) {
                element *= scalar;
            }
        }
    }

    void Matrix::multiply_matrix_link(float scalar) {
        for (auto& row : matrix) {
            for (auto& element : row) {
                element *= scalar;
            }
        }
    }
}