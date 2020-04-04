#include <stdio.h>

int isPrime(int x) {
    int i = 2;
    
    while (i < x/2) {
        if (x%i == 0) {
            return 0;
        }
        i++;
    }
    return 1;
}

int main(void) {
    
    long long int num = 600851475143;
    
    int i = 1;
    
    long long int prodCurrPrimes = 1;
    
    long long int largestPrimeFactor = 0;
    
    while (prodCurrPrimes != num) {
        
        
        if (num%i==0 && isPrime(i)) {
            prodCurrPrimes *= i;
            largestPrimeFactor = i;
        }
        i++;
    }
    printf("%lli\n", largestPrimeFactor);   
    return 0;
}
