#include <stdio.h>

int main() {
    int num;

    printf("Please enter a number: ");
    scanf("%d", &num);

    (num > 0) ? printf("The number is positive \n") :
    (num == 0) ? printf("The number is zero.\n"):
                printf("The number is negative.\n");

    return 0;
}