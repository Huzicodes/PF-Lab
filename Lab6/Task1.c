#include<stdio.h>

int main(void) {
    int array [4];
    
    int i = 1, sum = 0;
    while(i<=4) {
               printf("Enter %dth digit of your pin: ", i);
               scanf("%d", &array[i-1]);
               sum += array[i-1];
               i++;
    }
    
    if(sum>10) {
               printf("strong pin");
               }
    else {
         printf("weak pin");
         }
         
    return 0;
}
