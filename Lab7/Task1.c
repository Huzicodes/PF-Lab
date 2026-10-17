#include<stdio.h>

void input_names(char (*names) [50]);
void input_marks(int (*marks) [3], char (*names) [50]);
int avg_marks(int (*marks) [3], int r);

int main(void) {
    char student_names[3][50];
    int marks[3][3];

    input_names(student_names);
    input_marks(marks, student_names);

    printf("\nAverage marks:");
    for(int r = 0; r<3; r++) {
        printf("\n%s: %d", student_names[r], avg_marks(marks, r));
    }
    return 0;
}

void input_names(char (*names) [50]) {
    for(int r = 0; r<3; r++) {
        printf("Enter name of student%d: ", r+1);
        scanf("%[^\n]%*c", names[r]);
    }
}

void input_marks(int (*marks) [3], char (*names) [50])  {
    for(int r = 0; r<3; r++) {
        printf("\nFor %s:\n", names[r]);
        for(int c = 0; c<3; c++) {
            printf("Enter marks of subject%d: ", c+1);
            scanf("%d%*c", &marks[r][c]);
        }
    }
}

int avg_marks(int (*marks) [3], int r) {
    int sum = 0;
    for(int c = 0; c<3; c++) {
        sum += marks[r][c];
    }
    return sum/3;
}