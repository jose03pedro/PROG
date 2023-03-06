#include "complex.h"

#include <cmath>

void add(const complex& a, const complex& b, complex& r) {
    r.x = a.x + b.x;
    r.y = a.y + b.y;
}

void mul(const complex& a, const complex& b, complex& r) {
    r.x = a.x * b.x - a.y * b.y;
    r.y = a.x * b.y + a.y * b.x;
}

double norm(const complex& c) { return sqrt(pow(c.x, 2) + pow(c.y, 2)); }