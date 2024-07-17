#include <stdio.h>

int main() {
    printf("Palindrome numbers between 1 and 50:\n");

    for (int num = 1; num <= 50; num++) {
        int originalNum = num;
        int reversedNum = 0;
        
        // Reverse the number
        while (originalNum > 0) {
            int remainder = originalNum % 10;
            reversedNum = reversedNum * 10 + remainder;
            originalNum /= 10;
        }
        
        // Check if the original number is equal to its reversed version
        if (num == reversedNum) {
            printf("%d\n", num);
        }
    }

    return 0;
}
