#ifndef CPP_MATRIX_H
#define CPP_MATRIX_H

#include <iostream>
#include <vector>

namespace Matrix {
    class Matrix {
    private:
        std::vector<std::vector<float>> matrix;
    public:
        explicit Matrix(const std::vector<std::vector<float>>& initialMatrix) : matrix(initialMatrix) {}

        void print_matrix() const;

        void multiply_matrix_pointer(float scalar);

        void multiply_matrix_link(float scalar);
    };
}

#endif //CPP_MATRIX_H
