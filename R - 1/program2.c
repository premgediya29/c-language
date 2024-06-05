#include <stdio.h>

void reverseString(char* str) {
    int len = strlen(str);
    char* s = str;
    char* e = str + len - 1;

    while (s < e) {
        char temp = *s;
        *s = *e;
        *e = temp;

        s++;
        e--;
    }
}

int main() {
    char i[100];

    printf("Enter a string: ");
    fgets(i, sizeof(i), stdin);

    if (i[strlen(i) - 1] == '\n') {
        i[strlen(i) - 1] = '\0';
    }

    reverseString(i);

    printf("Reversed string: %s\n", i);

}
