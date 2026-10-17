#include<stdio.h>

int main(void) {
    char word_grid[3][100];

    for(int r = 0; r<3; r++) {
        printf("Enter word-set%d (three words): ", r+1);
        scanf(" %[^\n]", word_grid[r]); // Until the user hits enter
    }

    int max = 0; // the global max
    int count = 0; // the current counter
    int c; // to traverse each string letter-by-letter
    int row, col; // for max
    for(int r = 0; r<3; r++) {
        c = 0; // resets for every new row
        while(word_grid[r][c] != '\0') { // reading the string until the end
            count = 0; // resets for each word
            while(word_grid[r][c] != ' ' && word_grid[r][c] != '\0') { // until the end of the word
                count++;
                c++; // to move to the next letter
            }
            if(count>max) { // if current word is longer the the previously longest one
                max = count;
                row = r;
                col = c-count; // This is where the word starts
            };
            if(word_grid[r][c] != '\0') c++; // to avoid reading garbage memory
        }
    }

    printf("\nLongest Word: ");
    // to print the entire word till it's end
    for(int c = col; word_grid[row][c] != ' ' && word_grid[row][c] != '\0'; c++) {
        putchar(word_grid[row][c]);
    }
    printf("\nLength: %d\nLocation: Row %d Column %d", max, row+1, col+1);
}