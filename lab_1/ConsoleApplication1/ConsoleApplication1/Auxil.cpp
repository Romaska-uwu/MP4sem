#include "Auxil.h"
#include <ctime>

namespace auxil {
    void start() {
        srand(static_cast<unsigned>(time(nullptr)));
    }

    double dget(double rmin, double rmax) {
        return ((double)rand() / (double)RAND_MAX) * (rmax - rmin) + rmin;
    }

    int iget(int rmin, int rmax) {
        return static_cast<int>(dget(static_cast<double>(rmin), static_cast<double>(rmax)));
    }

    long long fibonacci(int n) {
        if (n <= 1) return n;
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}