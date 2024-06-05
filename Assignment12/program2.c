#include <stdio.h>

int main() {
    int n = 1;

    do {
        if (n == 13) {
            n++; 
            continue;
        }

        if (n % 2 != 0) {
            printf("%d ", n);
        }

        n++;
    } while (n <= 20);

    printf("\n");
}






