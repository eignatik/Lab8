#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <vector>

#ifndef LAB8_MPI_H
#define LAB8_MPI_H

using namespace std;


class MPi {
private:
    vector<float> result;
public:
    float operator()(float x) {
        return x *= M_PI;
    }

    vector<float> getResult() {
        return result;
    }
};


#endif //LAB8_MPI_H
