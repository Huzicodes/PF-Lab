#include <stdio.h>

int main(void) {
    int image[3][3];
    int (*ptr)[3] = image; // Pointer to an array of 3 integers

    printf("\t\tDIGITAL IMAGE BRIGHTNESS PROCESSING\n");
    printf("Enter 9 pixel values for the 3x3 image matrix:\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Pixel [%d][%d]: ", i, j);
            scanf("%d", *(ptr + i) + j); // Equivalent to &image[i][j]
        }
    }

    // Double pixel intensity using pure pointer arithmetic
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            *(*(ptr + i) + j) *= 2;
        }
    }

    printf("\n\t\tBRIGHTENED IMAGE MATRIX (3x3)\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%5d ", *(*(ptr + i) + j));
        }
        printf("\n");
    }

    return 0;
}
