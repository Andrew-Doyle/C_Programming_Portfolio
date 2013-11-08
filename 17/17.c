/* 	17.c: 						Write a program that asks the user to enter a word; use a for loop to count how many characters the user input
* 	Author: 					Andrew Doyle
* 	Last Modified:				19/12/2012 - Formatted

***/

#include <stdio.h>

int main(void)

{
   printf("\n\n--- Portfolio Program 17 ---\n\n");
	
   int count;								 /* declare counter */
   char input[30];				
   
   printf("\nPlease enter a word: \n\n");			 /* ask user to enter a word */
   scanf("%29s", input);
  
   /* start the counter; condition: check that null character '\0' is not found in the input; add 1 to count */
    for (count=0; input[count]!='\0'; count++);	 
	
    printf("\nNumber of letters in %s: %d\n",input, count);   /* loop not required as action carried out in for statement */
	
    return 0;
}

	
	
	
	
