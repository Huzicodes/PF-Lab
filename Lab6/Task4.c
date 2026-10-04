#include<stdio.h>
#define MAX 137

int main(void) {
    char array[MAX];
    int size = 0;

    printf("Enter your book code: ");
    scanf("%[^\n]s", array);

    for(int i = 0; array[i] != '\0'; i++) {
        size++;
        array[i] = tolower(array[i]);
    }

    int start = 0;
    int end = size - 1;

    while(start<end) {
        if(array[start] != array[end]) {
            printf("\nThe code is not valid");
            return 0;
        }
        start++;
        end--;
    }
    printf("\nThe code is valid");
    return 0;
}