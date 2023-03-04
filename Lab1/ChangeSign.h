#ifndef CPP_CHANGESIGN_H
#define CPP_CHANGESIGN_H


class ChangeSign {


public:
    static int changeIntLink(int x);
    static int changeIntPointer(const int *x);
    static float changeFloatPointer(float *x);
    static float changeFloatLink(float x);
};


#endif //CPP_CHANGESIGN_H
