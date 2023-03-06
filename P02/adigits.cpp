int adigits(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a * 100 + (b >= c ? b * 10 + c : c * 10 + b);
    } else if (b >= a && b >= c) {
        return b * 100 + (a >= c ? a * 10 + c : c * 10 + a);
    } else {
        return c * 100 + (a >= b ? a * 10 + b : b * 10 + a);
    }
}