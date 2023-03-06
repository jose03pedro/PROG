#include <iostream>

struct data1 {
    double x, y;
};

struct data2 {
    data1 a, b, c;
};

void f(const& data a, data& b) {}

int main() { std::cout << sizeof(data1) << ' ' << sizeof(data2); }