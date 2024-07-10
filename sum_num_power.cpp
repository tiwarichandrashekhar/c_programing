#include <stdio.h>

int main() {
    int num, pow;                           
    printf("Enter the number and power: "); //num
    scanf("%d %d", &num, &pow);         //    power 1,2,4,8,16
                                         //   sum 0,2,6,14,30;
    int sum = 0;
    int power = 1; // Start with num^1

    for (int i = 1; i <= pow; i++) {
        power=power*num; // Calculate num^i
        sum=sum+power; // Add num^i to the sum
    }

    printf("Sum of powers from %d^1 to %d^%d is: %d\n", num, num, pow, sum);

    return 0;
}

