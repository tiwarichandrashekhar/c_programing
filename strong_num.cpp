#include <stdio.h>

int main() {
    int num, originalNum, sum = 0, fact = 1, digit;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    // Calculate the sum of factorial of digits
    while (num > 0) {
        digit = num % 10;
        // Calculate factorial of digit
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }
        sum += fact;
        // Reset fact for next digit
        fact = 1;
        num /= 10;
    }

    // Check if the original number is equal to the sum
    if (originalNum == sum) {
        printf("%d is a strong number.\n", originalNum);
    } else {
        printf("%d is not a strong number.\n", originalNum);
    }

    return 0;
}
