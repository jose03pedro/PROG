#include "smatrix.h"

void sum(const smatrix& a, const smatrix& b, smatrix& r) {
    r.clear();
    size_t i = 0, j = 0;
    while (i < a.size() && j < b.size()) {
        if (a[i].row == b[j].row) {
            if (a[i].col == b[j].col) {
                int sum = a[i].value + b[j].value;
                if (sum != 0) {
                    r.push_back({a[i].row, a[i].col, sum});
                }
                i++;
                j++;
            } else if (a[i].col < b[j].col) {
                r.push_back(a[i]);
                i++;
            } else {
                r.push_back(b[j]);
                j++;
            }
        } else if (a[i].row < b[j].row) {
            r.push_back(a[i]);
            i++;
        } else {
            r.push_back(b[j]);
            j++;
        }
    }
    while (i < a.size()) {
        r.push_back(a[i]);
        i++;
    }
    while (j < b.size()) {
        r.push_back(b[j]);
        j++;
    }
}
