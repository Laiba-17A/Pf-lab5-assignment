#include <stdio.h>

int main() {
    int num;
    int sum=0;
    printf("Please enter the number: ");
    scanf("%d", &num);


        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }

        num = sum;
    
    
    printf("The single-digit sum is: %d\n", num);
    return 0;
}