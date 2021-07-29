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

/*Function to calculate string length*/

int customstrlen(char* str) {

    int count=0;
    for(int i = 0; i < str[i] != '\0'; i++)
    {
	count++;
    }
    return count;
}


/* Function to find the rightmost occurrence of string 't' in string 's'
 *
 * parameter
 * s: main string
 * t: substring
 *
 * return
 * index value of rightmost occurence of t is s.
 */


void rightmost_occur(char* s, char* t) {

    int index = 0;
    int count = 0;
    int j = 0;
    for(int i = 0; s[i] != '\0'; i++) {
     
        if(s[i] == t[j]) {
	
	    count++;
	    j++;
	}
	if(count == customstrlen(t)) {
	   j = 0;
       count=0;
       index = i;
	   
	}
    
    }
    int temp = customstrlen(t)-1;
    printf("index  : %d",index-temp);
}


int main() {

   char s[100];
   char t[100];

   printf("Enter first string (s) : ");
   scanf("%s",s);
   printf("Enter second string (t) : ");
   scanf("%s",t);

   rightmost_occur(s,t);

   return 0;

}
