#include<stdio.h>

int main(void) {
    char secret_messages[3][100];

    for(int r = 0; r<3; r++) {
        printf("Enter message%d (encypted): ", r+1);
        scanf(" %[A-Z ]", secret_messages[r]); // spaces and uppercase letters only
        scanf("%*[^\n]");
    }

    int count;
    int in_word;
    for(int r = 0; r<3; r++) {
        count = 0;
        in_word = 0; // initially, we're not in any word
        for(int c = 0; secret_messages[r][c] != '\0'; c++) {
            if(secret_messages[r][c] != ' ') { //as soon as we see an uppercase letter
                if(in_word == 0) { // given we were not in a word
                    in_word = 1; // we're now in a word
                    count++; // a space-to-letter transition suggests that we've encountered a new word
                }
            } else {
                in_word = 0; // a space means we stepped out of a word
            }
        }
        printf("\nMessage%d: %s", r+1, secret_messages[r]);
        printf("\nTotal number of words in message%d: %u\n", r+1, count);
    }

    return 0;
}