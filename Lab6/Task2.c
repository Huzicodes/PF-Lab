#include<stdio.h>

int main(void) {
    int array [4];
    
    int i = 1;
    while(i<=4) {
               printf("Enter %dth digit of your ticket: ", i);
               scanf("%d", &array[i-1]);
               i++;
    }
    
    i= 1;
    int j = 4;
    int temp[4];
    while(i<=4) {
        temp[j-1] = array[i-1];
        i++;
        j--;
    }

    i = 1;
    while(i<=4) {
        array[i-1] = temp [i-1];
        i++;
    }

    printf("Your reversed pin is: ");
    i = 1;
    while(i<=4) {
               printf("%d", array[i-1]);
               i++;
    }
         
    return 0;
}
