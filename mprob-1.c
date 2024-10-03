#include <stdio.h>

int main() {
    int num1, num2, num3,max;

    printf("Please enter the first number: ");
    scanf("%d", &num1);
    printf("Please enter the second number: ");
    scanf("%d", &num2);
    printf("Please enter the third number: ");
    scanf("%d", &num3);

    if(num1>num2){
        if(num1>=num3){
            max=num1;
        }
        else{
            max=num3;
        }
    }
    else{
        if(num2>=num3){
            max=num2;
        }
        else{
            max=num3;
        }
    }
    
    printf("The greatest number is: %d\n", max);

    return 0;
}