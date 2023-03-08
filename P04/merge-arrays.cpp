#include <algorithm>

#include "print_array.h"

void merge_arrays(const int a[], int na, const int b[], int nb, int c[]) {
    int i = 0, j = 0, k = 0;
    while (i < na && j < nb) {
        if (a[i] < b[j]) {
            c[k] = a[i];
            i++;
        } else {
            c[k] = b[j];
            j++;
        }
        k++;
    }
    while (i < na) {
        c[k] = a[i];
        i++;
        k++;
    }
    while (j < nb) {
        c[k] = b[j];
        j++;
        k++;
    }
}