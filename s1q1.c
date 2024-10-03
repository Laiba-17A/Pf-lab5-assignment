#include <stdio.h>

int main() {
    int age;
    printf("Please enter your age: ");
    scanf("%d", &age);
    
    if(age<0){
        printf("Please enter valid age \n");
    }
    else{
        if(age<13){
            printf("You are a child \n");
        }
        else if(age<20){
            printf("You are a teenager \n");
        }
        else if(age<60){
            printf("You are an adult \n");
        }
        else{
            printf("You are a senior \n");
        }
    }
    
    return 0;
}