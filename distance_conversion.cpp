#include <stdio.h>

int main() {
    int choice;
    double length, result;

    printf("Select the conversion type:\n");
    printf("1. Meters to Kilometers\n");
    printf("2. Kilometers to Meters\n");
    printf("3. Centimeters to Meters\n");
    printf("4. Meters to Centimeters\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter length in meters: ");
            scanf("%lf", &length);
            result = length / 1000.0; 
            printf("%.2f meters = %.2f kilometers\n", length, result);
            break;
        case 2:
            printf("Enter length in kilometers: ");
            scanf("%lf", &length);
            result = length * 1000.0; 
            printf("%.2f kilometers = %.2f meters\n", length, result);
            break;
        case 3:
            printf("Enter length in centimeters: ");
            scanf("%lf", &length);
            result = length / 100.0; 
            printf("%.2f centimeters = %.2f meters\n", length, result);
            break;
        case 4:
            printf("Enter length in meters: ");
            scanf("%lf", &length);
            result = length * 100.0; 
            printf("%.2f meters = %.2f centimeters\n", length, result);
            break;
        default:
            printf("Invalid choice!\n");
             
            break;
    }

    return 0;
}
