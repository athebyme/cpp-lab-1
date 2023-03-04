#include "Runner.h"
#include <iostream>
#include "Lab1/Addition.h"
#include "Lab1/ChangeSign.h"
#include "Lab1/Complex.h"
#include "Lab1/MatrixMultiply.h"
int Runner::runTask1() {
    Addition a;
    std::cout << "Enter 2 nums"<< std::endl;
    int x,y;
    std::cin>>x >> y;
    std::cout << "Pointers result:" << std::endl;
    std::cout << Addition::addPointer(&x,&y) << std::endl;
    std::cout << "Links result:" << std::endl;
    std::cout << Addition::addLink(x,y) << std::endl;
    return 0;
}

int Runner::runTask2() {
    ChangeSign a;
    std::cout << "Enter int num" << std::endl;
    int _int;
    std::cin>> _int;
    std::cout << "Changed sign for int using Pointer:\n" << ChangeSign::changeIntPointer(&_int)<<std::endl;
    std::cout << "Changed sign for int using Link:\n" << ChangeSign::changeIntLink(_int)<<std::endl;

    std::cout << "Enter float num" << std::endl;
    float _float;
    std::cin >> _float;
    std::cout << "Link\n" << ChangeSign::changeFloatLink(_float)<<std::endl;
    std::cout << "Pointer\n"<<ChangeSign::changeFloatPointer(&_float)<<std::endl;
    return 0;
}


int Runner::runTask3(){
    double re = 2.5;
    double im = -3.0;
    Complex complex;

    Complex::conjugate_complexPointer(&re, &im);
    std::cout << "Conjugate complex on Pointer: " << re << " + " << im << "i" << std::endl;

    Complex::conjugate_complexLink(re, im);
    std::cout << "Conjugate complex on Link: " << re << " + " << im << "i" << std::endl;
    return 0;
}

int Runner::runTask4() {

    Matrix Matrix;

    float matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    float StillMatrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    float scalar = 2.5;

    std::cout << "Matrix:" << std::endl;
    Matrix::print_matrix(&matrix[0][0]);

    Matrix::multiply_matrix_pointer(&matrix[0][0], scalar);
    std::cout << "Pointers method:" << std::endl;
    Matrix::print_matrix(&matrix[0][0]);

    Matrix::multiply_matrix_link(StillMatrix, scalar);
    std::cout << "Links method" << std::endl;
    Matrix::print_matrix(&matrix[0][0]);

    return 0;
}