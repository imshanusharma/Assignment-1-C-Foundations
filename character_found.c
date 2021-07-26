/* Program to find index of character in string A that matches character in string B
 *
 * Compilation: gcc -o found character_found.c
 * Execution: ./found
 *
 * @Ujjwal, 1910991390, 26/01/2021
 * Assignment 1 (C_Foundations)
 */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void any(char* str1, char* str2) {

    int i;
    int j;
    char temp[100];
    int flag;
    bool found = false;
    for(i = 0; i < strlen(str1); i++) {
    
        for(j = 0; j < strlen(str2); j++) {
	
	    if(str1[i] == str2[j]) {
	    
	        flag = i;
		found = true;
	    }
	}
	if(found == true)
		break;
    }
    if(found == true){
    printf("%d",flag);
    }
    else{
    printf("-1");
    }
}

int main() {

    char str1[100];
    char str2[100];

    printf("Enter String A :");
    scanf("%s", str1);
    printf("Enter String B :");
    scanf("%s", str2);

    any(str1, str2);

    return 0;
}
