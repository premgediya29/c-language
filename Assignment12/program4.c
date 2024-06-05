#include <stdio.h>

main() {
    int num = 1;

    while (num <= 50) {
        
        if (num % 5 == 0) {
            
            num++;
            continue;
        }

        
        printf("%d\n", num);

        
        num++;
    }

}
