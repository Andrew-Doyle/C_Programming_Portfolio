/* 	20b.c: 						
* 	Author: 					Andrew Doyle
* 	Last Modified:				20/12/2012 - Formatted
								
*   What is happening here:     Programme asks the user to enter a word..
*								when user enters the word the programme returns
*								what the user entered after "You input":
*  The difference:              20 prints an extra blank lines, 20b does not since scanf() doesn`t process the newline.
*   
***/

#include <stdio.h>




int main(void)
{
	printf("\n\n--- Portfolio Program 20b ---\n\n");
	
	char input[30];
	
	printf("please enter a single word: ");	/* ask user to enter a sentence */
    scanf("%29s", input);					    /* scan user input and store it in char array named input */	
	printf("You input: %s\n", input);			/* print user input */
	
	return 0;
}