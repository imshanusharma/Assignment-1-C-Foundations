/* Program to find the rightmost occurence of string 't' is string 's'
 *
 * Compilation : gcc -o rightmost 12_rightmost_string.c
 * Execution : ./rightmost
 *
 * @Ujjwal, 1910991390, 27/07/2021
 * Assignment 1 (C_Foundations)
 */

#include <stdio.h>
#include <string.h>

/* Function to find the rightmost occurrence of string 't' in string 's'
 *
 * parameter
 * s: main string
 * t: substring
 *
 * return
 * index value of rightmost occurence of t is s.
 */


void leftmost_occur(char* s, char* t) {

    int index;
    int count = 0;
    int j = 0;
    for(int i = 0; i < strlen(s); i++) {
     
        if(s[i] == t[j]) {
	
	    count++;
	    j++;
	}
	if(count == strlen(t)) {
	   j = 0;
	   index = i;
	}
    }
    printf("index  : %d",index+1);
}


int main() {

   char s[100];
   char t[100];

   printf("Enter first string (s) : ");
   scanf("%s",s);
   printf("Enter second string (t) : ");
   scanf("%s",t);

   leftmost_occur(s,t);

   return 0;

}
