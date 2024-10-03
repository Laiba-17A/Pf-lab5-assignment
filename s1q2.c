#include <stdio.h>

int main() {
    int num;
    printf("Please enter a number: ");
    scanf("%d", &num);
    
    if(num<0){
        printf("Number is negative \n");
    }
    else if(num>0){
        if(num%2==0){
            printf("Number is a positive and even");
        }
        else{
            printf("Number is a positive and odd");
        }
    }
    else{
        printf("Number is zero \n");
    }
    
    
    return 0;
}