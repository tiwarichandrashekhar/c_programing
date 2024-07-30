#include <stdio.h>

int main() {
    int ele;
    int size = 10;
    int a[10] = {1,2,3,4,5,6,2,8,2,10};

    // Print the original array
    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    // Input the number to delete
    printf("Enter the number to delete: ");
    scanf("%d", &ele);

    // Variable to keep track of the new size of the array
    int newSize = 0;

    // Process the array to remove all occurrences of `ele`
    for (int i = 0; i < size; i++) {
        if (a[i] != ele) {
            a[newSize] = a[i];
            newSize++;
        }
    }

    // Print the modified array
    printf("Array after deletion: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
