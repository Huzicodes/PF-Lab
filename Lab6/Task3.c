#include<stdio.h>

int main(void) {
	int present = 0, absent = 0, input;
	int array[15];
	
	for(int i = 1; i<=15; i++) {
		printf("Is student%d present (1) or absent (0): ", i);
		scanf("%d", &array[i-1]);
	}
	for(int j = 1; j<=15; j++) {
		if(array[j-1]) {
			present++;
		}
		else {
			absent++;
		}
	}
	printf("\nTotal presentees: %d", present);
	printf("\nTotal absentees: %d", absent);
	
	return 0;
}
