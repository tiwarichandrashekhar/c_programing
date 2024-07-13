    // Online C compiler to run C program online
    #include <stdio.h>
    #include <math.h>
    
    int main() {
        long int n,i; 
    
        printf("Enter a number: ");
        scanf("%ld", &n);
        if(n==1)
        {
            printf("not prime number");
        }
        else
        {
            for(int i=2;i<=n/2;i++)
            {
                if(n%i==0)
                {
                    printf("composite no");
                    return 0;
                }
            }
            printf("prime no");
        }
    
       
    }
