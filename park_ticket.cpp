#include <stdio.h>

int main() {
    int age;
    float height;
    char vip_pass;
    float base_price = 0.0;
    float additional_charge = 0.0;
    float discount = 0.0;
    float final_price = 0.0;

    // Input customer details
    printf("Enter customer's age: ");
    scanf("%d", &age);

    printf("Enter customer's height in centimeters: ");
    scanf("%f", &height);

    printf("Does customer have a VIP pass? (y/n): ");
    scanf(" %c", &vip_pass);

    // Validate age and height
    if (age < 0 || height < 0) {
        printf("Error: Age or height cannot be negative.\n");
        return 1;
    }

    // Determine base price based on age
    if (age <= 3) {
        base_price = 0.0; // Children under 3 get in for free
    } else if (age >= 4 && age <= 12) {
        base_price = 20.0; // Children aged 4 to 12 pay Rs.20
    } else if (age >= 13 && age <= 64) {
        base_price = 100.0; // Adults aged 13 to 64 pay Rs.100
    } else {
        base_price = 50.0; // Seniors aged 65 and above pay Rs.50
    }

    // Additional charge based on height
    if (height > 180.0) {
        additional_charge = 50.0; // Height above 180 cm pays extra Rs.50
    } else if (height < 120.0) {
        additional_charge = -0.5 * base_price; // Below 120 cm gets 50% discount on base price
    }

    // Calculate final price before applying VIP discount
    final_price = base_price + additional_charge;

    // Apply VIP discount if applicable
    if (vip_pass == 'y' || vip_pass == 'Y') {
        discount = 0.1 * final_price; // VIP pass gets 10% discount
        final_price -= discount;
    }

    // Display customer details and final ticket price
    printf("\nCustomer Details:\n");
    printf("Age: %d\n", age);
    printf("Height: %.2f cm\n", height);
    printf("VIP Pass: %c\n", vip_pass);
    printf("\nBase Ticket Price: Rs. %.2f\n", base_price);
    printf("Additional Charge: Rs. %.2f\n", additional_charge);
    printf("Discount Applied: Rs. %.2f\n", discount);
    printf("Final Ticket Price: Rs. %.2f\n", final_price);

    return 0;
}

