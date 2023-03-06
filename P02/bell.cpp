unsigned long bc(unsigned long n, unsigned long k){
    if (k == 0 || k == n) return 1;
    return bc(n - 1, k - 1) + bc(n - 1, k);
}

unsigned long bell(unsigned long n){
    if( n == 0  || n == 1) return 1;
    unsigned long res = 0;

for(unsigned long i = 0; i < n; i++){
        res += bc(n-1, i) * bell(i);
    }
    return res;
}