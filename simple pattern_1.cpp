
// ******
// ******
// ******
// ******
// ******
// ******
// #include <stdio.h>
// int main() {
//     for(int i=0;i<=5;i++)
//     {
//             for(int i=0;i<=5;i++)
//             {
//                 printf("*");
//             }  
//             printf("\n");
//     }

//     return 0;
// }
//---------------------------------------------------------------------
// 12345
// 12345
// 12345
// 12345
// 12345
// #include <stdio.h>
// int main() {
//     for(int i=1;i<=5;i++)
//     {
//             for(int j=1;j<=5;j++)
//             {
//                 printf("%d",j);
//             }  
//             printf("\n");
//     }

//     return 0;
// }

//---------------------------------------------------------------------
//   1  3  5  7  9
//  11 13 15 17 19
//  21 23 25 27 29
//  31 33 35 37 39
// #include <stdio.h>
// int main()

// {
//     int a=1;
    
//     for(int i=1;i<=4;i++)
//     {
        
//             for(int j=1;j<=5;j++)
//             {
//                      printf("%3d",a);
//                      a=a+2;
                
               
//             }  
//             printf("\n");
//     }

//     return 0;
// }


//---------------------------------------------------------------------
// 01010
// 01010
// 01010
// 01010
// #include <stdio.h>
// int main()

// {
//     int a=1;
    
//     for(int i=1;i<=4;i++)
//     {
        
//             for(int j=1;j<=5;j++)
//             {
//                 if(j%2==0)
//                 {
//                     printf("1");
//                 }
//                 else
//                 {
//                     printf("0");
//                 }
                    
               
//             }  
//             printf("\n");
//     }

//     return 0;
// }

 //---------------------------------------------------------------------
//   1  1  3  1  5  1
//   1  2  3  2  5  2
//   1  3  3  3  5  3
//   1  4  3  4  5  4
//   1  5  3  5  5  5
//  #include <stdio.h>
// int main()

// {
   
    
//     for(int i=1;i<=5;i++)
//     {
//         int a;
//             for(int j=0;j<=5;j++)
//             {
//                 a=j;
//                  if(j%2==0)
//                  {
//                      printf("%3d",a+1);
//                      a=a+1;
//                  }
//                 else
//                 {
//                     printf("%3d",i);
//                 }
//             }
//             printf("\n");
            
            
//     }

//     return 0;
// }

//---------------------------------------------------------------------
// 1  2  3  4  5  
// 2  4  6  8  10 
// 3  6  9  12 15 
// 4  8  12 16 20 
// 5  10 15 20 25
// #include <stdio.h>

// int main() {
   

//     for (int i = 1; i <= 5; i++) 
//     {
       
//         for (int j = 1; j <= 5; j++)
//         {
            
//             printf("%-3d", i * j); 
//         }
        
//         printf("\n");
//     }
    
//     return 0;
// }

//---------------------------------------------------------------------
// 1  6  11 16 21 
// 2  7  12 17 22 
// 3  8  13 18 23 
// 4  9  14 19 24 
// 5  10 15 20 25
// #include <stdio.h>

// int main() {
   
//     int columns = 5;
//     int start_value = 1;

//     // Outer loop for rows
//     for (int i = 0; i < 5; i++) {
//         // Inner loop for columns
//         for (int j = 0; j < columns; j++) {
//             // Calculate and print the value
//             printf("%-3d", start_value + j * 5 + i);
//         }
        
//         // Move to the next line after each row is printed
//         printf("\n");
//     }
    
//     return 0;
// }
//---------------------------------------------------------------------


// 5  10 15 20 25 
// 4  9  14 19 24 
// 3  8  13 18 23 
// 2  7  12 17 22 
// 1  6  11 16 21
// #include <stdio.h>

// int main() {
//     int rows = 5;
//     int columns = 5;
//     int start_value = 5;

//     // Outer loop for rows
//     for (int i = 0; i < rows; i++) {
//         // Inner loop for columns
//         for (int j = 0; j < columns; j++) {
//             // Calculate and print the value
//             printf("%-3d", start_value - i + j * rows);
//         }
        
//         // Move to the next line after each row is printed
//         printf("\n");
//     }
    
//     return 0;
// }
