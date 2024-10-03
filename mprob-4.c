#include <stdio.h>

int main() {
    int age;
    float income;
    int creditScore;
    
    printf("Please enter your age: ");
    scanf("%d", &age);
    printf("Please enter your monthly income: ");
    scanf("%f", &income);
    
    printf("Please enter your credit score: ");
    scanf("%d", &creditScore);
    
    if (age>17 && income>=10000 && creditScore >=700){
        printf("You are eligible for the loan.\n");
    }
    else{
        printf("You are not eligible for the loan.\n");
    }
    
    
    return 0;
}