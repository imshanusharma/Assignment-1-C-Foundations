/* Program to reverse a given string
 *
 * Compilation: gcc -o reverse reverse_string.c
 * Execution: ./reverse
 *
 * @Ujjwal, 1910991390, 25/07/2021
 * Assignment 1 (C_Foundations)
 *
 */

#include <stdio.h>
#include <string.h>

/* Function to reverse a given string
 * 
 * paramaters
 * s: a string
 * 
 * return
 * reversed string
 */

void reverse_string(char* s) {

    int length;
    char *start;
    char *end;
    char temp;

    length = strlen(s);
    start = s;
    end = s + length - 1;

    for(int i = 0; i < length/2 ; i++) {
    
        temp = *end;
	*end = *start;
	*start = temp;

	start++;
	end--;
    }
    
}

int main() {

    char str[100];
    int length;

    printf("Enter a string:");

    scanf("%[^\n%*c]",str);
    
    length = strlen(str);

    reverse_string(str);
    printf("%s", str);
    return 0;
}
