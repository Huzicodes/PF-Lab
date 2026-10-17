#include <stdio.h>

int main(void) {
    int shifts[4][3];
    int target_row;
    int new_shifts[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter 3 shift production counts for Workstation%d (seperated via spaces): ", i + 1);
        scanf(" %d %d %d", &shifts[i][0], &shifts[i][1], &shifts[i][2]);
    }

    printf("\n\t\t--- INITIAL PRODUCTION GRID ---\n");
    for (int i = 0; i < 3; i++) {
        printf("Workstation %d: ", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("%d ", shifts[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter target row index for emergency insertion (0 to 3): ");
    scanf("%d", &target_row);

    if (target_row < 0 || target_row > 3) {
        printf("Invalid row index! Must be between 0 and 3.\n");
        return 1;
    }

    printf("Enter 3 production shift values for the new workstation (seperated via spaces): ");
    scanf(" %d %d %d", &new_shifts[0], &new_shifts[1], &new_shifts[2]);


    for (int i = 3; i > target_row; i--) {
        for (int j = 0; j < 3; j++) {
            shifts[i][j] = shifts[i - 1][j]; // Copy previous row down
        }
    }

    for (int j = 0; j < 3; j++) {
        shifts[target_row][j] = new_shifts[j];
    }

    printf("\n\t--- UPDATED PRODUCTION GRID (4x3 Matrix) ---\n");
    for (int i = 0; i < 4; i++) {
        printf("Workstation %d: ", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("%d ", shifts[i][j]);
        }
        printf("\n");
    }

    return 0;
}