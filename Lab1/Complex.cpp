//
// Created by Anton on 04.03.2023.
//

#include "Complex.h"
void Complex::conjugate_complexPointer(double *re, double *im) {
    *im = -(*im);
}

void Complex::conjugate_complexLink(double &re, double &im) {
    im = -im;
}
