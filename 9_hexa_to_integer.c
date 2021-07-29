/* Program to compute integer value equivalent to given Hexadecimal string
 *
 * Compilation: gcc -o htoi 9_hexa_to_integer.c -lm
 * Execution: ./htoi
 *
 * @Ujjwal, 1910991390, 26/07/2021
 * Assignment 1 (C_Foundations)
 *
 * Refrences : stackoverflow
 */

#include <stdio.h>
#include <string.h>
#include <math.h>

/*Function to calculate string length*/

int customstrlen(char* str)
{
    int count=0;
    for(int i = 0; i < str[i] != '\0'; i++)
    {
	count++;
    }
    return count;
}


/*Function to convert hexadecimal to integer
 *
 * parameters
 * str : A string
 * 
 * return
 * An integer value equivalent to given hexadecimal string
 */


void hexa_to_int(char* str) {
    
    int int_value = 0;
    int digit;
    int temp;
    
    for(int i = (customstrlen(str)-1),p = 0; i >= 2; i--,p++){
    
        if(str[i] >='0' && str[i] <='9'){
	
	    digit = str[i] - '0';

	}
	else if((str[i] >= 'A' && str[i] <= 'F') || (str[i] >= 'a' && str[i] <='f')) {
	
	    switch(str[i]) {
	    
	        case 'A': case 'a': digit = 10; break;
		case 'B': case 'b': digit = 11; break;
		case 'C': case 'c': digit = 12; break;
		case 'D': case 'd': digit = 13; break;
		case 'E': case 'e': digit = 14; break;
		case 'F': case 'f': digit = 15; break;

	    }
	}
	int_value += digit*pow(16,p);
    }
    
    printf("Integer : %d",int_value);  

}

int main() {

    char str[100];

    printf("Enter the hexadecimal string in the format like (0x[value]) :");
    scanf("%s",str);

    hexa_to_int(str);

    return 0;
}
