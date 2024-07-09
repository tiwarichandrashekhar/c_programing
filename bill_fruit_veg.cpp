#include <stdio.h>

int main() {
    int mainChoice, subChoice, qty;
    float price,bill=0;

    while (1) {
        // Displaying main menu
        printf("\nMain Menu:\n");
        printf("1. Fruits\n");
        printf("2. Vegetables\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &mainChoice);

        switch (mainChoice) {
            case 1:
                // Fruits menu
                printf("\nFruits Menu:\n");
                printf("1. Apple (15 Rupees each)\n");
                printf("2. Banana (10 Rupees each)\n");
                printf("3. Orange (20 Rupees each)\n");
                printf("Enter your choice: ");
                scanf("%d", &subChoice);

                switch (subChoice) {
                    case 1:
                        printf("You selected Apple.\n");
                        price = 15.0;
                        break;
                    case 2:
                        printf("You selected Banana.\n");
                        price = 10.0;
                        break;
                    case 3:
                        printf("You selected Orange.\n");
                        price = 20.0;
                        break;
                    default:
                        printf("Invalid choice in Fruits Menu.\n");
                        continue;
                }

                // Calculate bill
                printf("Enter quantity: ");
                scanf("%d", &qty);
                if (qty > 0) {
                    bill+=price*qty;
                    printf("bill: %.2f\n", price * qty);
                } else {
                    printf("Invalid quantity entered.\n");
                }
                break;

            case 2:
                // Vegetables menu
                printf("\nVegetables Menu:\n");
                printf("1. Carrot (5 Rupees each)\n");
                printf("2. Broccoli (10 Rupees each)\n");
                printf("3. Spinach (15 Rupees each)\n");
                printf("Enter your choice: ");
                scanf("%d", &subChoice);

                switch (subChoice) {
                    case 1:
                        printf("You selected Carrot.\n");
                        price = 5.0;
                        break;
                    case 2:
                        printf("You selected Broccoli.\n");
                        price = 10.0;
                        break;
                    case 3:
                        printf("You selected Spinach.\n");
                        price = 15.0;
                        break;
                    default:
                        printf("Invalid choice in Vegetables Menu.\n");
                        continue;
                }

                // Calculate bill
                printf("Enter quantity: ");
                scanf("%d", &qty);
                if (qty > 0) {
                     bill+=price*qty;
                    printf("bill: %.2f\n", price * qty);
                } else {
                    printf("Invalid quantity entered.\n");
                }
                break;

            case 3:
                // Exit
                 printf("Total bill=%.2f\n",bill);
                printf("Exiting the program.\n");
                return 0;

            default:
                printf("Invalid choice in Main Menu.\n");
                break;
        }
    }
   

    return 0;
}

