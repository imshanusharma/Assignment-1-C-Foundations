/*
 * Program to swap two numbers without using third variable
 *
 * Compilation: gcc -o swap 1_swap.c
 * Execution: ./swap
 *
 * @Ujjwal, 1910991390, 23/07/2021
 * Assignment 1 (C Foundations)
 * 
 */

#include <stdio.h>

/*
 * Function to swap two numbers
 *
 * Parameters
 * number1 : first number
 * number2 : second number
 *
 * return : Print two numbers after swapping
 */

void swap(int number1,int number2) {
    
    number1 = number1 - number2;
    number2 = number1 + number2;
    number1 = number2 - number1;

    printf("After Swapping:-\nFirst Number: %d Second Number: %d", number1, number2);
}

int main() {
    
    int number1;
    int number2;

    printf("Enter first number:");
    scanf("%d", &number1); 
    printf("Enter second number:");
    scanf("%d", &number2);

    printf("Before Swapping:-\nFirst Number: %d Second Number: %d\n", number1, number2);
    swap(number1, number2);

    return 0;
}
