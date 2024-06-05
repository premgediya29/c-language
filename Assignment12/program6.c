#include <stdio.h>

main() {
    int i;
    
    for (i = 0; i < 3; i++) {
        if (i == 0) {
            printf("HELLO\n");
        } else if (i == 1) {
            printf("Enter\n");
        } else if (i == 2) {
            printf("Exit\n");
        } else {
            goto end;
        }
    }
    
    end:;
}
