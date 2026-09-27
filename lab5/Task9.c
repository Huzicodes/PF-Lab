#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double num1, num2, result;

    printf("1. Square Root\n");
    printf("2. Power\n");
    printf("3. Absolute Value\n");
    printf("4. Floor\n");
    printf("5. Ceiling\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter a number (>= 0): ");
            scanf("%lf", &num1);

            if (num1 < 0) {
                printf("Error: Square root of a negative number is undefined in real numbers.\n");
                return 0;
            } else {
                result = sqrt(num1);
                printf("sqrt(%f) = %f\n", num1, result);
                return 0;
            }
            break;

        case 2:
            printf("Enter base: ");
            scanf("%lf", &num1);
            printf("Enter exponent: ");
            scanf("%lf", &num2);

            result = pow(num1, num2);
            printf("%f ^ %f = %f\n", num1, num2, result);
            break;

        case 3:
            printf("Enter a number: ");
            scanf("%lf", &num1);

            result = fabs(num1); // fabs() is used for floating-point absolute values
            printf("|%f| = %f\n", num1, result);
            break;

        case 4:
            printf("Enter a number: ");
            scanf("%lf", &num1);

            result = floor(num1);
            printf("floor(%f) = %f\n", num1, result);
            break;

        case 5:
            printf("Enter a number: ");
            scanf("%lf", &num1);

            result = ceil(num1);
            printf("ceil(%f) = %f\n", num1, result);
            break;

        default:
            printf("Error: Invalid menu choice! Please select an option between 1 and 5.\n");
            break;
    }

    return 0;
}