#include<stdio.h>

int main(void) {
    char logs [3][30];

    printf("Enter entry in csv format (username,access_status,timestamp): ");
    scanf("%[^,\n]%*c%[^,\n]%*c%[^,\n]%*c", logs[0],logs[1],logs[2]);

    int count = 0;
    for(int r = 0; r<3; r++) {
        for(int c = 0; logs[r][c] != '\0'; c++) {
            if(logs[r][c] >= 65 && logs[r][c] <= 90) count++;
        }
    }

    printf("\nTotal uppercase characters: %u", count);

    return 0;
}