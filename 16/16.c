/* 	16.c: 						Write a program that asks the user to enter a word; use a while loop to count how many characters the user input
* 	Author: 					Andrew Doyle
* 	Last Modified:				19/12/2012 - Formatted
								
*   Problems: 
* 
***/

#include <stdio.h>


int main(void)
{
	printf("\n\n--- Portfolio Program 16 ---\n\n");
	
    int count = 0;						/* declare counter */
	char input[30];
   
   printf("\nPlease enter a word: \n\n");	/* ask user to enter a word */
   scanf("%29s", input);				/* scan user input and store it in char array named input */
  
   /* while the null character '\0' is not found in the input, execute the loop...*/
    while (input[count]!='\0')			
	
	{

        count++;						/* add one to count */
        
    }
	/* print out new value of count (the nr of characters)..count will increment until null character is found */
	printf("\nNumber of letters in %s: %d\n",input, count);   

    return 0;
}

	
	
	
	
