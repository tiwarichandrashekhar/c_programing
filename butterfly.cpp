// Online C compiler to run C program online
#include <stdio.h>

int main() {
   for(int i=0;i<=5;i++)
   {
       for(int j=0;j<=i;j++)
       {
           printf("  ");
       }
        for(int k=5;k>=i;k--)
       {
           printf(" *");
       }
        for(int k=4;k>=i;k--)
       {
           printf(" *");
       }
       printf("\n");
   }
    for(int i=0;i<=5;i++)
   {
       for(int j=5;j>=i;j--)
       {
           printf("  ");
       }
        for(int k=0;k<=i;k++)
       {
           printf(" *");
       }
      
        for(int k=1;k<=i;k++)
      {
          printf(" *");
      }
      printf("\n");
   }

    return 0;
}
