#include <stdio.h>

int main(void) {
    float sensor_data[3][4];
    int del_col;

    for (int r = 0; r < 3; r++) {
        printf("Enter 4 sensor readings for Day %d: ", r + 1);
        scanf("%f %f %f %f", &sensor_data[r][0], &sensor_data[r][1], &sensor_data[r][2], &sensor_data[r][3]);
    }

    printf("\n\t\t--- INITIAL SENSOR DATA ---\n");
    for (int r = 0; r < 3; r++) {
        printf("Day %d: ", r + 1);
        for (int c = 0; c < 4; c++) {
            printf("%.2f ", sensor_data[r][c]);
        }
        printf("\n");
    }

    printf("\nEnter defective sensor column index to remove (0 to 3): ");
    scanf("%d", &del_col);

    if (del_col < 0 || del_col > 3) {
        printf("Invalid column index! Must be between 0 and 3.\n");
        return 1;
    }

    for (int r = 0; r < 3; r++) {
        for (int c = del_col; c < 3; c++) {
            sensor_data[r][c] = sensor_data[r][c + 1];
        }
    }

    printf("\n\t--- UPDATED SENSOR DATA ---\n");
    for (int r = 0; r < 3; r++) {
        printf("Day %d: ", r + 1);
        for (int c = 0; c < 3; c++) { // Only 3 columns remaining!
            printf("%.2f ", sensor_data[r][c]);
        }
        printf("\n");
    }

    return 0;
}