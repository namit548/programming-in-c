#include <stdio.h>
int main(){
    int n = 5;
    for(int i=5;i>=1;i--){
        for(int j=1;j<=i;j++){
            for(int z=1;z<=5;z++){
                printf(" ");
            }
        printf("*",j);
        }
    printf("\n");
    }
}