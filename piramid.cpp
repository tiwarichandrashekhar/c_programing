
#include <stdio.h>

int main() {
   int n;
  for(int i=0;i<=5;i++)                                    //   - - - - - - *
                                                          //    - - - - - * * *
                                                          //    - - - - * * * * *
                                                          //    - - - * * * * * * *
                                                          //    - - * * * * * * * * *
                                                         //     - * * * * * * * * * * *
                                                         //     - - * * * * * * * * *
                                                          //    - - - * * * * * * *
                                                        //      - - - - * * * * *
                                                        //      - - - - - * * *
                                                        //      - - - - - - *
  {
      for(int j=5;j>=i;j--)
      {  
          printf(" -");
      }
      for(int j=0;j<=i;j++)
      {
         printf(" *");
      }
    for(int j=0;j<i;j++)
    {
          printf(" *");
    }
      printf("\n");
  }
   
   
  for(int i=1;i<=5;i++)
  {
         for(int j=0;j<=i;j++)
        {
            printf(" -");
        } 
         for(int j=5;j>i;j--)
        {
             printf(" *");
        }
        for(int m=5;m>=i;m--)
        {
           printf(" *");
        }
        printf("\n");
        
  }

    return 0;
}
