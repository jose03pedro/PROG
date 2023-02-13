#include <iostream>

int main()
{
    int n;
    bool flag = true;
    std::cin >> n;
    if (n == 2)
    {
        std::cout << 2;
        return 0;
    }
    if (n > 2)
        std::cout << 2 << " ";
    for (int i = 3; i <= n; i++)
    {
        flag = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
            std::cout << i << " ";
    }
    return 0;
}
