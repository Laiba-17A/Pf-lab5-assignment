#include <stdio.h>

int main() {
    int num1, num2;

    printf("Please enter the first number: ");
    scanf("%d", &num1);
    printf("Please enter the second number: ");
    scanf("%d", &num2);

    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;

    printf("After swapping numbers: \nnumber1 is %d, number2 is %d\n", num1, num2);

    return 0;
}