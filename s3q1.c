#include <stdio.h>

int main() {
    int num1, num2, max;

    printf("Please enter the first number: ");
    scanf("%d", &num1);
    printf("Please enter the second number: ");
    scanf("%d", &num2);

    max = (num1 < num2) ? num2 : num1;

    printf("The maximum out of %d and %d is: %d\n", num1, num2, max);

    return 0;
}