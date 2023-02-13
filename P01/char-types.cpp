#include <cctype>
#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int letterCounter = 0, numberCounter = 0, specialCounter = 0;
    char c;

    for (int i = 0; i < n; i++) {
        std::cin >> c;
        if (isalpha(c)) {
            letterCounter++;
        } else if (isdigit(c)) {
            numberCounter++;
        } else {
            specialCounter++;
        }
    }

    std::cout << letterCounter << " " << numberCounter << " " << specialCounter;
    return 0;
}