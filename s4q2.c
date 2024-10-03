#include <stdio.h>

int main() {
    int num;
    int count=0;

    printf("Please enter a number: ");
    scanf("%d", &num);
    int num1=num;

    while (num != 0) {
        if(num & 1){
            count=count+1;
        }
        num = num >> 1;
    }

    printf("The number of 1s in the binary representation of %d is: %d\n", num1, count);

    return 0;
}
