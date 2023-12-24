#include <vector>

#include "print_vector.h"

template <typename T>
void normalise(std::vector<T>& v, const T& min, const T& max) {
    for (T& x : v) {
        if (x < min) {
            x = min;
        } else if (x > max) {
            x = max;
        }
    }
}
