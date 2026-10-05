#include<stdio.h>

int main(void) {
    int n; // number of asterisks on each side of the diamond
    
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for(int i = 1; i<=n; i++) {
        for(int j = 1; j<=n-i; j++) {
            printf(" ");
        }
        printf("*");
        if(i>1) {
            for(int k = 1; k<=(2*i-3); k++) {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }

    for(int i = n-1; i>=1; i--) {
        for(int j = 1; j<=n-i; j++) {
            printf(" ");
        }
        printf("*");
        if(i>1) {
            for(int k = 1; k<=(2*i-3); k++) {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }

    return 0;

}