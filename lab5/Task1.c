#include<stdio.h>

int main(void) {
    int AI, maths, pf;
    float ap;
    
    printf("Enter marks for AI: ");
    scanf("%d", &AI);
    printf("Enter marks for maths: ");
    scanf("%d", &maths);
    printf("Enter marks for programming: ");
    scanf("%d", &pf);
    printf("Enter marks for attendance percentage: ");
    scanf("%f", &ap);

    if (pf>=50 && maths>=50 && AI>=50 && ap>=75) {
        float avg = (AI+pf+maths)/3.0;
        if(avg>=80.0) {
            printf("\nExcellent!");
        }
        else if(avg>=70.0) {
            printf("\nVery Good!");
        } else if(avg>=60.0) {
            printf("\nGood!");
        }
        else if(avg>=50.0) {
            printf("\nSatisfactory");
        } else {
            printf("\nPoor");
        }
    }
    else {
        printf("\nStudent is not eligible");
        return 0;
    }
    return 0;
}