#include<stdio.h>
#define MAX 100

int main(void) {
    char str[MAX];
    char temp[MAX];

    printf("Enter a string: "); // taking a string input from the user
    scanf("%s", str);
    printf("\nYour string is: %s", str);

    int i = 0;
    int size;
    while(str[i] != '\0') { // counting the length of the string
        i++;
        size = i;
    }
    printf("\n\nThe length of your string is %d", size);
    
    int j = i-1; // reversing the string
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
    r_str[i] = '\0';
    printf("\n\nThe reverse of your string is: %s", r_str);

    int start = 0; // checking if the string is a palindrome
    int end = size - 1;
    int is_palindrome = 1;
    for(int i = 0; str[i] != '\0'; i++) {
        size++;
        str[i] = tolower(str[i]);
    }
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

    // counting the number of vowels and consonants in the string
    int vowels = 0; 
    int consonants = 0;
    for(int v = 0; v<size; v++) {
        if(str[v] >= 'a' && str[v] <= 'z') {
            if(str[v] == 'a' || str[v] == 'e' || str[v] == 'i' || str[v] == 'o' || str[v] == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    printf("\n\nThe number of vowels in your string is: %d", vowels);
    printf("\nThe number of consonants in your string is: %d", consonants);

}