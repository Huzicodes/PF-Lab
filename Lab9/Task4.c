#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

int findMax(int a, int b) {
    return (a > b) ? a : b;
}

int compute(int a, int b, int (*op)(int, int)) {
    return op(a, b);
}

int main(void) {
    int num1, num2;

    printf("\t\tFUNCTION POINTER DEMO\n");
    printf("Enter two integers: (num1 num2)");
    scanf("%d %d", &num1, &num2);

    int sumResult  = compute(num1, num2, add);
    int prodResult = compute(num1, num2, multiply);
    int maxResult  = compute(num1, num2, findMax);

    printf("\n\t\tCOMPUTATION RESULTS\n");
    printf("Sum      : %d\n", sumResult);
    printf("Product  : %d\n", prodResult);
    printf("Maximum  : %d\n", maxResult);

    return 0;
}
