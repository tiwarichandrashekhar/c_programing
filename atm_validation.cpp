#include <stdio.h>

int main() {
    int pin = 1234;
    int e_pin;
    int count = 0;
    
    printf("Enter the PIN: ");
    scanf("%d", &e_pin);
    
    if (e_pin > 0 && e_pin < 9999) { // Assuming valid PIN range is 1 to 9998
        retry:
        if (e_pin == pin) {
            printf("Congratulations! PIN accepted.\n");
        } else {
            count++;
            if (count == 3) {
                printf("Sorry, your ATM card is blocked.\n");
            } else {
                printf("Invalid PIN. Please try again.\n");
                printf("Attempts left: %d\n", 3 - count);
                scanf("%d", &e_pin); // Read the PIN again
                goto retry;
            }
        }
    } else {
        printf("Invalid PIN format. Please enter a 4-digit PIN.\n");
    }
    
    return 0;
}
