#include <stdio.h>

int main() {
    int num;

    while (2) {//we can use while 1,2... it take it as infinite loop 
        printf("Enter a number (0 to exit): ");
        scanf("%d", &num);// scanf- input
                          //&num- stored num after input//%i for integer

        if (num == 0) {
            printf("Exiting the program.\n");
            break;
        }

        printf("You entered: %d\n", num);
    }

    return 0;
}
