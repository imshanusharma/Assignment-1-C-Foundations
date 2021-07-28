/* Program to check whether a string(t) is present at the end of another string(s)
 * 
 * Compilation: gcc -o substring 13_substring_at_end.c
 * Execution: ./substring
 *
 * @Ujjwal, 1910991390, 26/07/2021
 * Assignment 1 (C_Foundations)
*/

#include <stdio.h>
#include <string.h>

/* Function to check a string(t) occurs at the end of another string(s)
 *
 * parameter
 * s : A string (s)
 * t : A string (t)
 *
 * result
 * return 1 if found else return 0
 */

void last_index(char* s, char* t) {

    int end = strlen(s);
    int count = 0;

    for(int i = end; i >= 0 ; i--) {
    
        for(int j = strlen(t); j > 0; j--) {
	
	    if(s[i] == t[j]) {
	    
	        count++;
		i--;
	    }
	    else {
	    
	       break;
	    
	    }
	
	}
    
    }
    if(count == strlen(t))
    {
        printf("1");
    }
    else {
        printf("0");
    }

}

int main() {

    char s[100];
    char t[100];

    printf("Enter first string (s) : ");
    scanf("%s",s);
    printf("Enter second string (t) : ");
    scanf("%s",t);

    last_index(s,t);

    return 0;
}
