/* Program to illustrate string library function strncpy, strncat, strncmp
 *
 * Compilation: gcc -o func 14_string_library_func.c
 * Execution: ./func
 *
 * @Ujjwal, 1910991390, 28/07/2021
 * Assignment 1 (C_Foundations)
 */

#include <stdio.h>
#include <string.h>

void a_strncpy(char* s, char* t, int n)
{
    for(int i = 0; i < n; i++)
    {
        s[i] = t[i];
    }
    s[n] = '\0';
}

void a_strncat(char* s, char* t, int n)
{
    int k = 0;
    int len = strlen(s);
    for(int i = len; i < len + n; i++)
    {
        s[i] = t[k];
	k++;
	if(k>=n) {
	
	     break;
	}
    }

   s[len+n] = '\0';
}

void a_strncmp(char* s, char* t, int n)
{
    int value;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == t[i])
	{
            value = 0;
	}
	if(s[i] > t[i])
	{
	    value = 1;
	}
        else
	{
	    value = -1;
	}
    }
    if(value == 0) {
    
        strcpy(s,"According to ASCII values, String 1 (s) is equal to String 2 (t)");
    }
    else if(value > 0) {
    
        strcpy(s,"According to ASCII values, String 1 (s) is greater than String 2 (t)");
    }
    else {
    
        strcpy(s,"According to ASCII values, String 1 (s) is less than String 2 (t)");
    }
}

int main() {

   char s[100];
   char t[100];
   char temp1[100];
   char temp2[100];
   int n;

   printf("Enter a string (s): ");
   scanf("%s",s);
   printf("Enter another string (t): ");
   scanf("%s",t);
   printf("Enter how many characters you want to copy : ");
   scanf("%d",&n);
   
   strcpy(temp1,s);
   strcpy(temp2,s);

   if(n<=strlen(t))
   {
       a_strncpy(s,t,n);
       a_strncat(temp1,t,n);
       a_strncmp(temp2,t,n);

       printf("After strncpy : %s\n",s);
       printf("After strncat : %s\n",temp1);
       printf("After strncmp : %s\n",temp2);
   }
   else
   {
       printf("INVALID VALUES");
   }

   return 0;
}
