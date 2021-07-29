/* Program to remove each character of string 't' from string 's'
 *
 * Compilation: gcc -o squeeze 10_squeeze_string.c
 * Execution: ./squeeze
 *
 * @Ujjwal, 1910991390, 29/07/2021
 * Assignment 1 (C_Foundations)
 */

#include <stdio.h>

/* Function to remove each character of string 't' from string 's'
 *
 * parameters:
 * s: Main String
 * t: sub string
 * 
 * return
 * squeezed string
 */
 
void squeeze(char* s,char* t)
{
	int i,j,k;
	for(i = 0; t[i] != '\0'; i++)
	{
		for(j = k = 0; s[j] != '\0'; j++)
		{
			if(s[j] != t[i])
				s[k++] = s[j];
		}
		s[k] = '\0';
	}
}

int main()
{
	char s[100];
    char t[100];
	printf("Enter string 1:");
	scanf("%s",s);
	printf("Enter string 2:");
	scanf("%s",t);

	squeeze(s,t);

	printf("%s\n",s);

	return 0;
}

