/* Program to reverse a given array
 *
 * Compilation: gcc -o reverse 4_reverse_an_array.c
 * Execution: ./reverse
 *
 * @Ujjwal, 1910991390, 24/07/2021
 * Assignment 1 (C_Foundations)
 */

#include <stdio.h>

/* Function to reverse the given array
 *
 * parameters:
 * arr[] = integer array
 * size = size of the array
 *
 * return
 * reversed array
 */

void reverse(int arr[], int size) {
    
    int temp;
    int start = 0;
    int end = size - 1;
    while(start < end) {
    
        temp = arr[start];
	arr[start] = arr[end];
	arr[end] = temp;
	start++;
	end--;
    }

    for(int i = 0; i < size; i++) {
    
        printf("%d ",arr[i]);
    }
}

int main() {

    int size;

    printf("Enter the size of Array:");
    scanf("%d",&size);

    int arr[size];
    
    for(int i = 0; i < size; i++) {
    
        scanf("%d",&arr[i]);	    
    }
    
    reverse(arr,size);
    
    return 0;
}
