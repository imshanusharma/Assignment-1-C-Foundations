/* Program to count vowels and consonents in a given string
 *
 * Compilation: gcc -o vc vowels_and_consonents.c
 * Execution: ./vc
 *
 * @Ujjwal, 1910991390, 24/07/2021
 * Assignment 1 (C_Foundations)
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* Function to count vowels and consonents in a given string
 *
 * parameter
 * str[] : A string
 * length: Integer value length of string
 *
 * Return
 * Print the number of vowels and consonents in the given string
 */

void count_vowels_and_consonents(char str[], int length) {

    int vowels = 0;
    int consonents = 0;    

    for(int i = 0; i < length; i++) {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
    
            vowels++;	    
        }
	else if(isspace(str[i])) {
	
	    continue;
	}
        else {

            consonents++;
        }
    }

    printf("Vowels : %d Consonents: %d",vowels,consonents);

}
int main() {

    char str[100];
    int length;
    
    printf("Enter the String:");
    scanf("%[^\n]%*c", str);

    length = strlen(str);

    count_vowels_and_consonents(str,length);

    return 0;
}
