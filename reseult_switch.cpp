#include <stdio.h>

int main() {
    int physics, chemistry, biology, mathematics, computer;
    float percentage;

    // Input marks from user
    printf("Enter marks of Physics: ");
    scanf("%d", &physics);
    printf("Enter marks of Chemistry: ");
    scanf("%d", &chemistry);
    printf("Enter marks of Biology: ");
    scanf("%d", &biology);
    printf("Enter marks of Mathematics: ");
    scanf("%d", &mathematics);
    printf("Enter marks of Computer: ");
    scanf("%d", &computer);

    // Calculate total marks and percentage
    int total_marks = physics + chemistry + biology + mathematics + computer;
    percentage = (float)total_marks / 5.0;

    // Determine grade using switch statement
    switch ((int)(percentage / 10)) {
        case 10:
        case 9:
            printf("Grade A\n");
            break;
        case 8:
            printf("Grade B\n");
            break;
        case 7:
            printf("Grade C\n");
            break;
        case 6:
            printf("Grade D\n");
            break;
        case 5:
        case 4:
            printf("Grade E\n");
            break;
        default:
            printf("Grade F\n");
    }

    return 0;
}

