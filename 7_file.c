/* Program to print lines of a file which are greater than 80 characters.
 *
 * Compilation: gcc -o file file.c
 * Execution: ./file
 *
 * @Ujjwal, 1910991390, 07/08/2021
 * Assignment 1 (C_Foundations)
 */

#include <stdio.h>

int customstrlen(char* str) {

    int length = 0;

    for(int i = 0; str[i] != '\0'; i++)
    {
	length++;
    }
    
    return length;
}

int main() {

    FILE* fp;
    char line[200];

    fp = fopen("7_a.txt", "r");

    if(fp == NULL)
    {
	printf("File is empty!");
	return 0;
    }

    while(fgets(line,200,fp))
    {
	if(customstrlen(line) > 80)
	{
	    printf("%s", line);
	}
    }

    fclose(fp);
    return 0;
}
