/* Program to multiply two given matrices
 *
 * Compilation: gcc -o matrices matrices.c
 * Execution: ./matrices
 *
 * @Ujjwal, 1910991390, 25/07/2021
 * Assignment 1 (C_Foundations)
 */

#include <stdio.h>

int main() {

    int size;
    int a[100][100];
    int b[100][100];
    int c[100][100];

    printf("Enter the size of matrices:");
    scanf("%d", &size);

    printf("Enter elements of first matrix:");
    for(int i = 0; i < size; i++) {
    
        for(int j = 0; j < size; j++) {
	
	    scanf("%d", &a[i][j]);
	}
    }
    printf("Enter elements of second matrix:");
    for(int i = 0; i < size; i++) {
    
        for(int j = 0; j < size; j++) {
	
	    scanf("%d", &b[i][j]);
	}
    }
    
    /*Multiplying first and second matrix*/

    for(int i = 0; i < size; i++) {
    
        for(int j = 0; j < size; j++) {
	    
	    c[i][j] = 0;
   	    
	    for(int k = 0; k < size; k++) {

                c[i][j]+=a[i][k]*b[k][j];
	    }	    
	}
    }

    printf("The final multiplied matrix is :\n");
    for(int i = 0; i < size; i++) {

        for(int j = 0; j < size; j++) {
	
	    printf("%d\t",c[i][j]);
	}
	printf("\n");
    }
    return 0;
}
