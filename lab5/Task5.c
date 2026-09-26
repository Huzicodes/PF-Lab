#include<stdio.h>

int main(void) {
    int usertype;
    float confidence;

    printf("Enter confidence level (%%): ");
    scanf("%f", &confidence);
    printf("Enter user type (1: Authorized, 0: Unauthorized): ");
    scanf("%d", &usertype);

    if(confidence>=80) {
        printf("\nFace Recognised");
        return 0;
    }
    else if(confidence>=50 && confidence<80) {
        printf("\nManual verification");
        return 0;
    }
    else if(confidence>=80 && usertype == 1) {
        printf("\nAccess Granted");
        return 0;
    }
    else if(confidence<50 || usertype == 0) {
        printf("\nAccess Denied");
        return 0;
    }

    return 0;
}