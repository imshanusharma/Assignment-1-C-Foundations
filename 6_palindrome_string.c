/* Program to check a given string is palindrome or not
 *
 * Compilation: gcc -o palindrome 6_palindrome_string.c
 * Execution: ./palindrome
 *
 * @Ujjwal, 1910991390, 25/07/2021
 * Assignment 1 (C_Foundations)
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* Function to reverse the string for checking if it is palindrome or not
 * 
 * Paramaters
 * s : A string passed by reference
 *
 * Return 
 * Reverse of given String
*/

void check_palindrome(char* s) {

    int length;
    char *start;
    char *end;
    char temp;

    length = customstrlen(s);
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

/*Function to calculate string length*/

int customstrlen(char* str) {

    int count=0;
    for(int i = 0; i < str[i] != '\0'; i++)
    {
	count++;
    }
    return count;
}

/*Function to compare two strings*/

int customstrcmp(char *s1, char *s2)
{
    int value = 0;
    while( ( *s1 != '\0' && *s2 != '\0' ) && *s1 == *s2 )
    {
        s1++;
        s2++;
    }

    value = (*s1 ==*s2)?0:(*s1 >*s2)?1:-1;
    return value;
}

/*Function to copy a string to another*/

void customstrcpy(char *s, char *t) {

       while (*t) {
         *s = *t;
          s++;
          t++;
         }
        *s = *t;
}

int main() {

    char str[100];
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

    customstrcpy(str_temp,str);
    check_palindrome(str);

    value = customstrcmp(str,str_temp);
    
    printf("Result: "); 

    if(value == 0) {
    
        printf("True");
    }
    else {
    
        printf("false");
    }
    
    return 0;
}
