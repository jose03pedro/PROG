#include <cmath>

#include "complex.h"

void add(const complex& a, const complex& b, complex& r) {
    r.x = a.x + b.x;
    r.y = a.y + b.y;
}

void mul(const complex& a, const complex& b, complex& r) {
    r.x = a.x * b.x - a.y * b.y;
    r.y = a.x * b.y + a.y * b.x;
}

void mandelbrot(const complex& c, unsigned int n, complex& z_n) {
    z_n.x = 0;
    z_n.y = 0;

    for (unsigned i = 1; i <= n; i++) {
        complex a = z_n, b = z_n;
        mul(a, b, z_n);
        add(z_n, c, z_n);
    }
}