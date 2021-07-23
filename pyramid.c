/*
 * Program to swap two numbers without using third variable
 *
 * Compilation: gcc -o pyramid pyramid.c
 * Execution: ./pyramid
 *
 * @Ujjwal, 1910991390, 23/07/2021
 * Assignment 1 (C Foundations)
 *
 */

#include <stdio.h>

int main() {

    int height;
    int space;

    printf("Enter the height of pyramid:");
    scanf("%d",&height);
    
    space = height;

    for(int i = 0; i < height; i++) {
    
        for(int j = 0; j < space; j++) {
	
	    printf(" ");
	}
	for(int j = 0; j <= i; j++) {
	
	    printf("# ");
	}

        printf("\n");
        space--;	
    } 

    return 0;   
}

