#include "fraction.h"

#include <algorithm>
#include <cmath>
#include <numeric>

void signal(fraction &result) {
    if (result.den < 0) {
        result.den *= -1;
        result.num *= -1;
    }
    if (result.num == 0) {
        result.den = 1;
    }
}

fraction add(fraction a, fraction b) {
    fraction result;
    int numAux, denAux, gcdF;

    if (a.den == b.den) {
        numAux = a.num + b.num;
        gcdF = __gcd(numAux, a.den);
        result.num = numAux / gcdF;
        result.den = a.den;

    } else {
        denAux = a.den * b.den;
        numAux = a.num * b.den + b.num * a.den;
        gcdF = __gcd(numAux, denAux);
        result.num = numAux / gcdF;
        result.den = denAux / gcdF;
    }
    signal(result);
    return result;
}

fraction mul(fraction a, fraction b) {
    fraction result;
    int denAux, numAux, gcdF;
    numAux = a.num * b.num;
    denAux = a.den * b.den;
    gcdF = __gcd(numAux, denAux);
    result.num = numAux / gcdF;
    result.den = denAux / gcdF;
    signal(result);
    return result;
}

int main() {
    {
        fraction a{-3, 2}, b{3, 2};
        cout << add(a, b) << ' ' << mul(a, b) << '\n';

        return 0;
    }
}