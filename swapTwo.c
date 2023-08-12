#include <stdio.h>
// int main(){
//     int a,b;
//     printf("Enter two number :");
//     scanf("%d%d",&a,&b);
//      a= a+b;                                   // without using third variable
//      b= a-b;
//      a= a-b; 
//      printf("After swapping:\n");
//     printf("a = %d\n", a);
//     printf("b = %d\n", b);
    


// }


int main()
{
    int a,b,temp;
    printf("Enter the number");
    scanf("%d%d",&a,&b);// let 1,2
    temp = a;//   temp = 1
    a = b;//      a = 2
    b = temp;//   b = 1    
    printf("number after swaping/n");
    printf("%d%d",a,"/n",b);


}