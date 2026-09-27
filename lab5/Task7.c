#include<stdio.h>

int main() {
    float confidence;
    float threshold;

    printf("Enter model confidence score (0-100): ");
    scanf("%f", &confidence);

    printf("Enter required confidence threshold (0-100): ");
    scanf("%f", &threshold);

    if (confidence >= 90.0) {
        printf("Confidence Level : Very High\n");
    } else if (confidence >= 75.0) {
        printf("Confidence Level : High\n");
    } else if (confidence >= 50.0) {
        printf("Confidence Level : Moderate\n");
    } else {
        printf("Confidence Level : Low\n");
    }

    if (confidence >= threshold && confidence >= 50.0) {
        printf("Prediction Status: ACCEPTED\n");
    } else {
        printf("Prediction Status: REJECTED\n");
    }

    return 0;
}