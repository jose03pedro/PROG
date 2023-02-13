#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;
    int aux = 0;
    int size = floor(log10(x)) + 1;
    for (int i = 0; i < size; i++) {
        int n = x % 10;
        aux = aux * 10 + n;
        x /= 10;
    }
    cout << aux;
    return 0;
}