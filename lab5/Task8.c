#include<stdio.h>

// Define permission bitmasks using bit shifts or power-of-2 constants
#define PERM_VIEW   1  // 0001 (1 << 0)
#define PERM_TRAIN  2  // 0010 (1 << 1)
#define PERM_TEST   4  // 0100 (1 << 2)
#define PERM_DEPLOY 8  // 1000 (1 << 3)

int main() {
    int user_perm;

    printf("Enter user permission value (0-15): ");
    scanf("%d", &user_perm);

    printf("\n--- Allowed Operations ---\n");

    if (user_perm & PERM_VIEW) {
        printf("- Viewing Model\n");
    }
    if (user_perm & PERM_TRAIN) {
        printf("- Training Model\n");
    }
    if (user_perm & PERM_TEST) {
        printf("- Testing Model\n");
    }
    if (user_perm & PERM_DEPLOY) {
        printf("- Deploying Model\n");
    }

    printf("\n--- Advanced Access Check ---\n");
    if ((user_perm & PERM_TRAIN) && (user_perm & PERM_DEPLOY)) {
        printf("Status: User has full pipeline access (Training + Deployment).\n");
    } else {
        printf("Status: User lacks full pipeline access.\n");
    }

    return 0;
}