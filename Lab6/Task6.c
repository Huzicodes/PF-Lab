#include<stdio.h>

int main(void) {
    int even = 0, odd = 0;
    int reading;

    printf("Enter electricity-meter reading: ");
    scanf("%d", &reading);

    while(reading>0) {
        if((reading%10)%2 == 0) {
            even++;
        } else {
            odd++;
        }
        reading /= 10;
    }

    printf("Number of even digits: %d\n", even);
    printf("Number of odd digits: %d\n", odd);
}
