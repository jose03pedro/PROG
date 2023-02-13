#include <iostream>

using namespace std;

bool isPrime(int x) {
    if (x < 2) return false;
    if (x == 2) return true;
    for (int i = 2; i < x; i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        int oneCounter = 0;
        int aux = i;
        while (aux > 0) {
            if (aux % 2 != 0) {
                oneCounter++;
            }
            aux /= 2;
        }
        if (isPrime(i) && isPrime(oneCounter)) cout << i << " ";
    }
    return 0;
}