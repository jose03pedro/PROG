unsigned long bc(unsigned long n, unsigned long k){
    if (k == 0 || k == n) return 1;
    return bc(n - 1, k - 1) + bc(n - 1, k);
}