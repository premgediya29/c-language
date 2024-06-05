#include <stdio.h>

main() {
    int sum = 0;
    
    for (int i = 1; i <= 10; i++) {
        sum += i;
        
        if (sum > 50) {
            break;
        }
    }
    
    printf("The sum of the first 10 positive integers: %d\n", sum);
    
}
