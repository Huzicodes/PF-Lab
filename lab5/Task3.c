#include<stdio.h>

int main(void) {
    char category, sub_category;

    printf("Enter category of image (A: animal, V: vehicle: F: food, H: human): ");
    scanf("%c", &category);

    switch(category) {
        case 'A': {
            printf("\nEnter sub-category of animal-image (B: bird, C: cat, D: dog): ");
            scanf(" %c", &sub_category);
            return 0;
        }
        case 'V': {
            printf("\nEnter sub-category of vehicle-image (C: car, B: bus, b: bike): ");
            scanf(" %c", &sub_category);
            return 0;
        }
        case 'F': {
            printf("\nEnter sub-category of food-image (P: pizza, B: burger, b: biryani): ");
            scanf(" %c", &sub_category);
            return 0;
        }
        case 'H': {
            printf("\nEnter sub-category of human-image (M: male, F: female, C: child): ");
            scanf(" %c", &sub_category);
            return 0;
        }
        default: {
            printf("\nInvalid input");
            return 0;
        }
    }
}