/* Program to reverse a given array
 *
 * Compilation: gcc -o reverse 4_reverse_an_array.c
 * Execution: ./reverse
 *
 * @Ujjwal, 1910991390, 24/07/2021
 * Assignment 1 (C_Foundations)
 */

#include <stdio.h>

void reverse(int *num) {
	
    printf("%d ",*num);
}

int main() {

    int size;
    int arr[size];

    printf("Enter the size of Array:");
    scanf("%d",&size);
    
    for(int i = 0; i < size; i++) {
    
        scanf("%d",&arr[i]);	    
    }
    for(int i = size-1; i >= 0; i--) {

        reverse(&arr[i]);
    
    }
    
    return 0;
}
