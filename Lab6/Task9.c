#include<stdio.h>
#define MAX 100

int main(void) {
    char str[MAX];
    char temp[MAX];

    printf("Enter a string: ");
    scanf("%s", str);
    printf("\nYour string is: %s", str);

    int i = 0;
    while(str[i] != '\0') {
        i++;
    }
    printf("\n\nThe length of your string is %d", i);
    
    int j = i-1;
    i = 0;
    char r_str[MAX];
    while(str[i] != '\0') {
        temp[j] = str[i];
        i++;
        j--;
    }
    i = 0;
    while(str[i] != '\0') {
        r_str[i] = temp[i];
        i++;
    }
    printf("\n\nThe reverse of your string is: %s", r_str);

    int size = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        size++;
        str[i] = tolower(str[i]);
    }
    int start = 0;
    int end = size - 1;
    int is_palindrome = 1;
    while(start<end) {
        if(str[start] != str[end]) {
            printf("\n\nThe string is not a palindrome.");
            is_palindrome = 0;
            break;
        }
        start++;
        end--;
    }
    if(is_palindrome) {
        printf("\n\nThe string is a palindrome.");
    }

    int vowels = 0;
    int consonants = 0;
    for(int v = 0; v<size; v++) {
        if(str[v] == 'a' || str[v] == 'e' || str[v] == 'i' || str[v] == 'o' || str[v] == 'u') {
            vowels++;
        } else {
            consonants++;
        }
    }
    printf("\n\nThe number of vowels in your string is: %d", vowels);
    printf("\nThe number of consonants in your string is: %d", consonants);

}