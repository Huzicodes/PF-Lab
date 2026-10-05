#include<stdio.h>

int main(void) {
    long long N_FAC = 1;
    int n;
    long long N_Doubled_FAC = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i<=n; i++) {
        N_FAC *= i;
    }

    for(int j = 1; j<=(2*n); j++) {
        N_Doubled_FAC *= j;
    }

    long long res = N_Doubled_FAC / (N_FAC * N_FAC * (n + 1));

    printf("\nThe result is: %lld", res);
}