#include <stdio.h>
#include <stdlib.h>

#define N 4000000

int main(void) {
    
    int fib[2];
    fib[0] = 1;
    fib[1] = 2;
    
    int i = 0;
    
    long long int evenSum = 2;
    
    while (1) {
    
        fib[i%2] = fib[i%2] + fib[(i+1)%2];
        
        if (fib[i%2] > N) {
            printf("%lli\n", evenSum);
            return 0;
        }
        
        if (fib[i%2]%2 == 0) {
            evenSum += fib[i%2];
        }
        
        i++;
    
    }
    
    return 0;
}
