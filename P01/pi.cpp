#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    double res = 0;
    int k, d;
    std::cin >> k, d;
    for (int i = 0; i <= k; i++) {
        res += pow(-1, i) / (2 * i + 1);
    }
    double pi = 4 * res;
    std::cout << std::fixed << std::setprecision(d) << pi;
    return 0;
}
