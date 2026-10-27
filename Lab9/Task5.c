#include <stdio.h>

void printSensorData(void *data, char type) {
    if (type == 'f' || type == 'F') {
        float *temp = (float *)data;
        printf("Temperature Sensor: %.2f deg C\n", *temp);
    } else if (type == 'i' || type == 'I') {
        int *motion = (int *)data;
        if (*motion == 1) {
            printf("Motion Sensor     : Motion Detected\n");
        } else {
            printf("Motion Sensor     : No Motion\n");
        }
    } else if (type == 'c' || type == 'C') {
        char *door = (char *)data;
        if (*door == 'O' || *door == 'o') {
            printf("Door Sensor       : Door Open\n");
        } else if (*door == 'C' || *door == 'c') {
            printf("Door Sensor       : Door Closed\n");
        } else {
            printf("Door Sensor       : Unknown State\n");
        }
    } else {
        printf("Invalid Sensor Data Type!\n");
    }
}

int main(void) {
    float temperature;
    int motionState;
    char doorStatus;

    printf("\t\tSMART HOME IOT SENSOR CONTROLLER\n\n");

    // Input 1: Temperature
    printf("Enter Temperature Reading (in Celsius) : ");
    scanf("%f", &temperature);

    // Input 2: Motion Sensor State
    printf("Enter Motion State (1 = Motion Detected, 0 = No Motion): ");
    scanf("%d", &motionState);

    // Input 3: Door Lock Status
    printf("Enter Door Status (O = Open, C = Closed): ");
    scanf(" %c", &doorStatus); // Notice leading space to consume leftover newline

    printf("\n--- SENSOR READINGS DISPLAY (via Void Pointers) ---\n");
    printSensorData(&temperature, 'f');
    printSensorData(&motionState, 'i');
    printSensorData(&doorStatus, 'c');

    return 0;
}
