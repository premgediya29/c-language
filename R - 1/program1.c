#include <stdio.h>

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Invalid array size.\n");
        
    }

    int arr[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    int *ptr = arr; 
    for (int i = 0; i < size; i++) {
        sum += *ptr;
        ptr++;      
    }
    printf("Sum of elements: %d\n", sum);

}
