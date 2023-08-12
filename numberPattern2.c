#include<stdio.h>
int main(){
    int n= 10;
    for(int i=n;i>=0;i--){
        for(int j=i-1;j>=0;j--){
            printf("%d",i);
        }  
        printf("\n");
        //printf("%d",i)
    }
}