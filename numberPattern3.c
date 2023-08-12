#include<stdio.h>
int main(){
    int n= 5;
    for(int i=n;i>=0;i--){
        for(int j=i-1;j>=0;j--){
            printf("%d",j);
        }  
        printf("\n");
        //printf("%d",i)
    }
}