#include<stdio.h>

int main(void) {
    char problemtype;
    char sub_problemtype;

    printf("\nEnter problem type (C: classification, R: regression, c: clustering, V: computer vision): ");
    scanf("%c", &problemtype);

    switch(problemtype) {
        case 'C': {
            printf("\nChoose:\nL: logistic regression\nD: decision tree\nK: KNN\n");
            scanf(" %c", &sub_problemtype);
            switch(sub_problemtype) {
                case 'L': {
                    printf("\nlogistic regression is selected");
                    return 0;
                }
                case 'D': {
                    printf("\ndecision tree is selected");
                    return 0;
                }
                case 'K': {
                    printf("\n KNN is selected");
                    return 0;
                }
                default: {
                    printf("\nInvalid input");
                    return 0;
                }
            }
        }
        case 'R': {
            printf("\nChoose:\nL: linear regression\nP: polynomial regression\nS: SVR\n");
            scanf(" %c", &sub_problemtype);
            switch(sub_problemtype) {
                case 'L': {
                    printf("\nlinear regression is selected");
                    return 0;
                }
                case 'P': {
                    printf("\npolynomial regression is selected");
                    return 0;
                }
                case 'S': {
                    printf("\nSVR is selected");
                    return 0;
                }
                default: {
                    printf("\nInvalid input");
                    return 0;
                }
            }
        }
        case 'c': {
            printf("\nChoose:\nK: K-means\nH: Hierarchical clustering\nD: DBSCAN\n");
            scanf(" %c", &sub_problemtype);
            switch(sub_problemtype) {
                case 'K': {
                    printf("\nK-means is selected");
                    return 0;
                }
                case 'H': {
                    printf("\nHierarchical clustering is selected");
                    return 0;
                }
                case 'D': {
                    printf("\nDBSCAN is selected");
                    return 0;
                }
                default: {
                    printf("\nInvalid input");
                    return 0;
                }
            }
        }
        case 'V': {
            printf("\nChoose:\nC: CNN\nY: YOLO\nR: R-CNN\n");
            scanf(" %c", &sub_problemtype);
            switch(sub_problemtype) {
                case 'C': {
                    printf("\nCNN is selected");
                    return 0;
                }
                case 'Y': {
                    printf("\nYOLO is selected");
                    return 0;
                }
                case 'R': {
                    printf("\nR-CNN is selected");
                    return 0;
                }
                default: {
                    printf("\nInvalid input");
                    return 0;
                }
            }
        }
    }
}