#include <stdio.h>

int main() {
    char ch;

    // Input marks from user
    printf("Enter character: ");
    scanf("%c",&ch);
   

    // Determine grade using switch statement
    switch (ch) {
        case 'a':case 'e':case 'i':case 'o':case 'u':case 'A':case 'E':case 'I':case'O':case 'U':
            printf("VOVEL");
            break;
        default:
            printf("constant\n");
    }

    return 0;
}
