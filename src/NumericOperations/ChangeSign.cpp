#include "ChangeSign.h"
int ChangeSign::changeIntPointer(const int *x) {
    return (~(*x)) +1;
}
int ChangeSign::changeIntLink(int x) {
    return (~x) + 1;
}

float ChangeSign::changeFloatPointer(float *x){
    return *x * -1.0f;
}

float ChangeSign::changeFloatLink(float x) {
    return x * -1.0f;
}

