#include <stdio.h>

int main() {
    FILE *file = fopen("demo1.txt", "w");
     int i;
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    for ( i = 1; i <= 50; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            fprintf(file, "%d\n", i);
        }
    }

    fclose(file);

    printf("Numbers divisible by both 3 and 5 have been written to the file.\n");

    return 0;
}
