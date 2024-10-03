#include <stdio.h>

int main() {
    int age;
    printf("Please enter your age: ");
    scanf("%d", &age);
    
    char citizen;
    printf("Are you a citizen? (Y/N): ");
    scanf(" %c", &citizen);
    
    if (age>17 && (citizen=='Y' || citizen=='y')) {
        printf("You are eligible to vote");
    } else {
        printf("You are not eligible to vote");
    }
    
    
    return 0;
}