#include<stdio.h>

int main(void) {
    int array[8]; // array declaration
    
    int used_capacity = 0; // variable to keep track of the number of elements in the array
    for(int i = 0; i<8; i++) { // array population
        printf("Enter element %d: ", i+1);
        scanf("%d", &array[i]);
        used_capacity++;
        int choice;
        printf("Do you want to enter another element? (1 for yes, 0 for no): ");
        scanf("%d", &choice);
        if(choice == 0) {
            break;
        }
    }

    printf("\nYour array is: ");
    for(int j = 0; j<used_capacity; j++) { // printing the array
        printf("%d ", array[j]);
    }
    
    int largest = array[0];
    int smallest = array[0];
    for(int k = 0; k<used_capacity-1; k++) { // determining the largest and smallest elements in the array
        if(array[k+1] > largest) {
            largest = array[k+1];
        }
        else if(array[k+1] < smallest) {
            smallest = array[k+1];
        }
    }
    printf("\n\nLargest element: %d", largest);
    printf("\nSmallest element: %d", smallest);

    int target;
    printf("\n\nEnter a number from the array to find its index: "); // searching for an element in the array
    scanf("%d", &target);
    for(int l = 0; l<used_capacity; l++) {
        if(array[l] == target) {
            printf("The index of %d is %d", target, l);
            break;
        }
        else if(l == 7) {
            printf("The number %d is not in the array.", target);
        }
    }

    printf("\n\nEnter a number to insert into your array: ");
    scanf("%d", &target);
    int index;
    printf("Enter the index where you want to insert the number: ");
    scanf("%d", &index);

    if(index>=0 && index < 8) { // inserting an element into the array at a specific index
        if(used_capacity < 8) {
            for(int m = used_capacity-1; m>=index; m--) {
                array[m+1] = array[m];
            }
        array[index] = target;
        used_capacity++;
        printf("%d has been inserted at index %d.", target, index);
        }
        else {
        printf("Array is full.");
        }    
    } else {
        printf("Invalid index.");
    }
    
    printf("\n\nEnter the index where you want to delete the number: ");
    scanf("%d", &index);

    if(index>=0 && index<8) {
        for(int n = index+1; n<used_capacity; n++) {
            array[n-1] = array[n];
        }
        printf("The number at index %d has been deleted.", index);
        array[used_capacity-1] = 0;
        used_capacity--;
    }
    else {
        printf("Invalid index.");
    }

    printf("\nYour final array is: ");
    for(int x = 0; x<used_capacity; x++) { // printing the array
        printf("%d ", array[x]);
    }

    return 0;

}