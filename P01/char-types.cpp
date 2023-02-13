#include <iostream>
#include <cctype>

int main()
{
    int n;
    std::cin >> n;

    int letter_count = 0;
    int digit_count = 0;
    int other_count = 0;

    char c;
    for (int i = 0; i < n; i++)
    {
        std::cin >> c;
        if (isalpha(c))
        {
            letter_count++;
        }
        else if (isdigit(c))
        {
            digit_count++;
        }
        else
        {
            other_count++;
        }
    }

    std::cout << letter_count << " ";
    std::cout << digit_count << " ";
    std::cout << other_count << " ";

    return 0;
}