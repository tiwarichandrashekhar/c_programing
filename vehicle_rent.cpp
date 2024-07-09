#include <stdio.h>

int main() {
    int choice, rental_days;
    double total_cost = 0.0;

    printf("Welcome to the Car Rental System\n");
    printf("-------------------------------\n");
    printf("Choose a car model:\n");
    printf("1. Sedan - $50 per day\n");
    printf("2. SUV - $70 per day\n");
    printf("3. Hatchback - $40 per day\n");
    printf("4. Truck - $100 per day\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter number of rental days: ");
            scanf("%d", &rental_days);
            total_cost = rental_days * 50.0;
            printf("Total rental cost for Sedan for %d days: $%.2f\n", rental_days, total_cost);
            break;
        case 2:
            printf("Enter number of rental days: ");
            scanf("%d", &rental_days);
            total_cost = rental_days * 70.0;
            printf("Total rental cost for SUV for %d days: $%.2f\n", rental_days, total_cost);
            break;
        case 3:
            printf("Enter number of rental days: ");
            scanf("%d", &rental_days);
            total_cost = rental_days * 40.0;
            printf("Total rental cost for Hatchback for %d days: $%.2f\n", rental_days, total_cost);
            break;
        case 4:
            printf("Enter number of rental days: ");
            scanf("%d", &rental_days);
            total_cost = rental_days * 100.0;
            printf("Total rental cost for Truck for %d days: $%.2f\n", rental_days, total_cost);
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}



