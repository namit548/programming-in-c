#include<stdio.h>
int main(){
    int n,i,j,temp;
    printf("Enter the number of elements");
    scanf("%d", &n);
    int array[n];//taking number of array 

    printf("Enter the number in the array: ");
    for(int i=0;i<n;i++)
    scanf("%d",&array[i]);//taking array element
    
    for(i=0;i<n-1;i++)//actual code of bubble sort//let n =5 code run 4 times 
    {
        for(j=0;j<n-i-1;j++) //code runs 5-0-1=4//after 4-1-1=2//3-2-1=0
        {
            if(array[j]>array[j+1]){//{let element 8,5,4,5,4,3// j=8,j+1=5//8>5//true}
                temp = array[j];//temp = 8
                array[j]=array[j+1];// j=5
                array[j+1]=temp;//temp= 8//j+1
            }
        }     
    }
    printf("Sorted array: ");
    for(i=0;i<n;i++)
    {
        printf("%d,",array[i]);
    }
    
}