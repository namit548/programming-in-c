#include <stdio.h>
int main()
{ 
      
    for (int i = 1;i<=4; i++)
    {
        for (int j = 1;j<=i; j++) {
            printf("%d",j); 
        }
        printf("\n");       
        }
         for(int i=3; i>=1;i--){    // i= 3// j=1,2,3// i=2//j=1,2//i=1//j=1
            for(int j=1;j<=i;j++){
                printf("%d",j);
            }
            printf("\n");
        }
    }

   
