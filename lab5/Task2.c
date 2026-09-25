#include<stdio.h>

int main(void) {
    int age, income, score, isLoan;

    printf("Enter income: ");
    scanf("%d", &income);
    printf("Enter credit score: ");
    scanf("%d", &score);
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Do you have an existing loan? (1: Yes, 0: No): ");
    scanf("%d", &isLoan);

    if(age>=21 && income>=100000 && score >= 750 && isLoan == 0) {
        printf("\nHigh approval chance");
        return 0;
    } else if(age>=21 && income>=75000 && score >= 650 && isLoan == 1) {
        printf("\nManual review");
        return 0;
    } else if(age>=21 && income>=50000 && score >= 600) {
        printf("\nPosiibly eligible");
        return 0;
    }
    else {
        printf("\nRejected");
    }

    return 0;
}