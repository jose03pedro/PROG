#include <iostream>
#include <iomanip>
#include <math.h>

int main()
{
    double res = 0;
    int k, d;
    std::cin >> k;
    std::cin >> d;
    for (int i = 0; i <= k; i++)
    {
        res += pow(-1, i) / (2 * i + 1);
    }
    auto pi = 4 * res;
    std::cout << std::fixed << std::setprecision(d) << pi;
    return 0;
}