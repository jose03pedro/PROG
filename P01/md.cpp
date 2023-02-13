#include <cmath>
#include <iostream>

using namespace std;
int main() {
    int nInputs;
    cin >> nInputs;
    int res = 0;
    int x1, y1, x2, y2;
    cin >> x1 >> y1;

    for (int i = 1; i < nInputs; i++) {
        cin >> x2 >> y2;
        res += abs(x1 - x2) + abs(y1 - y2);
        x1 = x2;
        y1 = y2;
    }
    cout << res;
    return 0;
}