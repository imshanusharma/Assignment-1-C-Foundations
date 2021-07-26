/* Program to check a given string is palindrome or not
 *
 * Compilation: gcc -o palindrome palindrome_string.c
 * Execution: ./palindrome
 *
 * @Ujjwal, 1910991390, 25/07/2021
 * Assignment 1 (C_Foundations)
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>



void check_palindrome(char* s) {

    int length;
    char *start;
    char *end;
    char temp;

    length = strlen(s);
    start = s;
    end = s + length - 1;
    
    for(int i = 0; i < length/2; i++) {
    
        temp = *end;
	*end = *start;
	*start = temp;

	start++;
	end--;
    }    
}

void remove

int main() {

    char str[100];
    int length;
    char str_temp[100] = " ";
    int value = 0;

    printf("Enter the string:");
    scanf("%[^\n%*c]",str);

    /*To make whole string lowercase*/

    int k = 0;
    char ch;

    printf("The Entered String is: ");

    while(str[k]) {
    
        ch = str[k];
        str[k] = putchar(tolower(ch));
	k++;
    }

    /*To Remove spaces from string*/

    int i = 0;
    int j = 0;
    
    while(str[i]) {
        if(str[i] != ' ')
            str[j++] = str[i];
	i++;
    }
    str[j] = '\0';

    strcpy(str_temp,str);
    check_palindrome(str);

    value = strcmp(str,str_temp);
    
    printf("Result: "); 

    if(value == 0) {
    
        printf("True");
    }
    else {
    
        printf("false");
    }
    
    return 0;
}
