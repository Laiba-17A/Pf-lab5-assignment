#include <stdio.h>

int main() {
    float attendance, assignmentScore, examScore, finalGrade;
    
    printf("Please enter attendance percentage: ");
    scanf("%f", &attendance);
    
    printf("Enter assignment score percentage: ");
    scanf("%f", &assignmentScore);
    
    printf("Enter exam score percentage: ");
    scanf("%f", &examScore);

    if (attendance >= 80) {
        finalGrade = (0.3 * assignmentScore) + (0.7 * examScore);

        if (finalGrade >= 90) {
            printf("Final Grade: A+\n");
        } else if (finalGrade >= 80) {
            printf("Final Grade: A\n");
        } else if (finalGrade >= 70) {
            printf("Final Grade: B\n");
        } else if (finalGrade >= 60) {
            printf("Final Grade: C\n");
        } else if (finalGrade >= 50) {
            printf("Final Grade: D\n");
        }
        else {
            printf("Final Grade: F\n");
        }
    } else {
        printf("You have been debared due to low attendance.\n");
    }

    return 0;
}
