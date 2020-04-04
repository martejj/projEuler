/*
    If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

    Find the sum of all the multiples of 3 or 5 below n.
*/

#include <stdio.h>

int main(void) {
    
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    int i = 0, sum = 0;
    
    // Find all multiples of 3 (add ones that are also multiples of 5)
    while (i < n) {
    
        sum += i;
        
        i += 3;
        
    }
    
    // Find all multiples of 5 (dont add ones that are also multiples of 3)
    i = 0;
    while (i < n) {
        
        if (i%5 == 0 && i%3 != 0) {
            sum += i;
        }
        
        i += 5;
        
    }
    
    printf("Sum of multiples of 3 or 5 upto %d is %d\n", n, sum);
    
    return 0;
}
