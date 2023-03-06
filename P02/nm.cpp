unsigned long next_mersenne(unsigned long n){
    if(n == 0) return 1;
    return 2*next_mersenne(n-1) - 1;
}