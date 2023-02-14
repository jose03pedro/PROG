#include <iostream>

int main() {
    int n;
    bool flag;
    std::cin >> n;
    if (n == 2) {
        std::cout << 2;
        return 0;
    }
    for (int i = 2; i <= n; i++) {
        flag = true;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                flag = false;
                break;
            }
        }
        if (flag) std::cout << i << " ";
    }
    return 0;
}
