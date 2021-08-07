/* Program to evaluate reverse polish expression from command line where each operator or operand is a separate argument.
 *
 * Compilation: gcc -o expr 15_expr.c
 * Execution: ./expr
 *
 * @UJJWAL, 1910991390, 31/07/2021
 * Assignment 1 (C_Foundations)
 */

#include <stdio.h>
#include <ctype.h>
#include <math.h>

// Defining global variables

#define size 80

int stack[size];
int top = 0;

/*Function to push element into the stack*/

void push(int value) {

    if(top == size)
    {
	printf("Stack Overflow!");
    }
    else
    {
	stack[top++] = value;
    }
}

/* Function to pop an element from stack */

int pop() {

    int element;
    
    if(top == 0)
    {
	printf("Stack Underflow!");
    }
    else
    {
	element = stack[top-1];
	top = top - 1;
	return element;
    }
}

int main() {

    char str[80];
    int digit1;
    int digit2;    

    printf("Enter the expression: ");
    scanf("%[^\n]%*c", str);

    for(int i = 0; str[i] != '\0'; i++)
    {
	if(isdigit(str[i]))
	{
	    push(str[i]-'0');
	}
	else if(str[i] == '/')
	{
            digit1 = pop();
	    digit2 = pop();
	    push(digit1+digit2);
	}
	else if(str[i] == '*')
	{
	    digit1 = pop();
	    digit2 = pop();
	    push(digit1 * digit2);
	}
	else if(str[i] == '+')
	{
	    digit1 = pop();
	    digit2 = pop();
	    push(digit1 + digit2);
	}
	else if(str[i] == '-')
	{
	    digit1 = pop();
	    digit2 = pop();
	    push(digit1 - digit2);
	}
	else if(str[i] = '^')
	{
	    digit1 = pop();
	    digit2 = pop();
	    push(pow(digit1,digit2));
	}
    }
    printf("Final answer is : %d",pop());

    return 0;
}
