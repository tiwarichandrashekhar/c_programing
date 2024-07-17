#include <stdio.h>

int main() {
    int num, root;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate the digital root
    while (num >= 10) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10; // Add the last digit to sum
            num /= 10;       // Remove the last digit from number
        }
        num = sum; // Update num with the sum of digits
    }

    // The final value of num is the digital root
    root = num;

    // Display the digital root
    printf("The digital root of %d is %d.\n", num, root);

    return 0;
}

