#include <stdio.h>

int main() {
    int choice;
    int quantity;
    int total_price;
    int amount_paid;
    int change;
    char order_again = 'Y';

    printf("Welcome to our Tea Stall Counter!\n");

    // Display menu
    printf("Our menu:\n");
    printf("1. Tea --------------------- Rs. 10\n");
    printf("2. Coffee ------------------ Rs. 20\n");
    printf("3. Cold coffee ------------- Rs. 50\n");
    printf("4. Exit\n");
    printf("Choose by entering a number (1-4): ");
    scanf("%d", &choice);

    // Validate choice
    if (choice < 1 || choice > 4) {
        printf("Invalid choice. Please run the program again and choose a valid option.\n");
        return 1;
    }

    // Determine item and price
    switch (choice) {
        case 1:
            printf("How many cups of refreshing tea? ");
            total_price = 10;
            break;
        case 2:
            printf("How many cups of aromatic coffee? ");
            total_price = 20;
            break;
        case 3:
            printf("How many cups of chilled cold coffee? ");
            total_price = 50;
            break;
        case 4:
            printf("Thank you for visiting! We look forward to serving you again soon.\n");
            return 0;
    }

    // Input quantity
    scanf("%d", &quantity);

    // Calculate total price
    total_price *= quantity;

    // Display total price and accept payment
    printf("Total for %d cup(s): Rs. %d\n", quantity, total_price);
    printf("Enter your payment amount: Rs. ");
    scanf("%d", &amount_paid);

    // Calculate change
    change = amount_paid - total_price;
    printf("Change: Rs. %d\n", change);

    printf("Thank you for visiting! We look forward to serving you again soon.\n");

    return 0;
}

