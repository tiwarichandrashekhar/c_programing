
#include<stdio.h>

int main() 
{
 int a,b,number;
  printf("enter the number1 ");
 scanf("%d",&a);
  printf("enter the number2 ");
 scanf("%d",&b);
 
  printf("1:ADDITION\n ");
   printf("2:SUB\n");
    printf("3:MULTIPLY\n ");
     printf("4:DIVISION \n");
   printf("enter the number for doing operation \n");
 scanf("%d",&number);
 
 switch(number) {
        case 1:
            printf("%d",a+b);
            break;
        case 2:
            printf("%d",a-b);
            break;
        case 3:
            printf("%d",a*b);
            break;
        case 4:
            printf("%d",a/b);
            break;
       
        default:
            printf("invalid input\n");
    }

    return 0;
}
