#include <stdio.h>
int main()
{ 
    int n = 10;   
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++) {
            printf("%d ", n); 
            n--;
        }
        printf("\n"); 
    }
    return 0;
}
