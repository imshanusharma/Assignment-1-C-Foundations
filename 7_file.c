/* Program to print lines of a file which are greater than 80 characters.
 *
 * Compilation: gcc -o file 7_file.c
 * Execution: ./file
 *
 * @Ujjwal, 1910991390, 07/08/2021
 * Assignment 1 (C_Foundations)
 */

#include <stdio.h>

/* Function to calculate the length of string*/

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

    /*Opening a file*/

    fp = fopen("7_a.txt", "r");

    /*Checking the file is empty or not*/

    if(fp == NULL)
    {
	printf("File is empty!");
	return 0;
    }

    /*fetching lines from file and printing which are greater than 80 characters*/

    while(fgets(line,200,fp))
    {
	if(customstrlen(line) > 80)
	{
	    printf("%s", line);
	}
    }

    /*Closing the file*/

    fclose(fp);
    return 0;
}
