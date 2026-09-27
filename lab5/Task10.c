#include<stdio.h>
#include<math.h>

int main(void) {
    float accuracy, confidence, size;
    int role, status;
    int permission;

    printf("Enter model accuracy (0-100): ");
    scanf("%f", &accuracy);
    printf("Enter model confidence (0-100): ");
    scanf("%f", &confidence);
    printf("Enter model size (in GB): ");
    scanf("%f", &size);
    printf("Enter model status (1: ready, 2: testing, 3: training): ");
    scanf(" %d", &status);
    printf("Enter user role (1: admin, 2: developer, 3: researcher): ");
    scanf(" %d", &role);

    if(role == 1) {
        permission  = 15; // 1111 (full permissions)
    } else if(role == 2) {
        permission = 7; // 0111 (limited permissions)
    }  else if(role == 3) {
        permission = 3; // 0011 (minimal permissions)
    } else {
        permission = 0; // 0000 (no permissions)
    }

    if(accuracy >= 80.0 && confidence >= 75.0 && size >= 1000 && status == 1 && (permission & 8)) {
        printf("\nModel is ready for deployment");
    }
    else if(status == 2) {
        printf("\nModel is currently being tested, model is not ready for deployment");
    }
    else if(status == 3) {
        printf("\nModel is currently being trained, model is not ready for deployment");
    } else {
        printf("\nModel is not ready for deployment");
    }

    printf("\nModel Score: %.2f", average(accuracy, confidence));

    if(role == 1 && (permission & 8)) {
        printf("\nUser role: Admin, user can deploy, test, train, and view the model");
    } else if(role == 2 && (permission & 4)) {
        printf("\nUser role: Developer, user can test, train, and view the model");
    } else if(role == 3 && (permission & 3)) {
        printf("\nUser role: Researcher, user can view and test the model");
    } else {
        printf("\nUser role: Unknown");
    }

    return 0;
}