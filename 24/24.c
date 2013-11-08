/* 	24.c: 						Write a program that asks the user to input any number of words. Reverse the order of the letters in each word 
*								and print them back out to the user. Use a function.
* 	Author: 					Andrew Doyle
* 	Last Modified:				20/12/2012 - Formatted
***/

#include <stdio.h>

 

 void swap_characters_in_word(char *input, int i); 					/* declare a custom function prototype */

 int main(void)
{
	printf("\n\n--- Portfolio Program 21 ---\n\n");
	
	char input[100];          					/* declare a list of 100 characters */
	int i = 0; 									/* declare a counter i */
	char word[20];								/* declare a list of 20 characters called word */	
	int j = 0;									/* declare a counter j */
	
	printf("Enter a sentence:\n");				/* ask user to enter a sentence */
	swap_characters_in_word(input,i);			/* call the custom function, thereby storing the users input */
 
	printf("\nThe words you entered in reverse order are as follows:\n");
	
	/*while the counter i in input does NOT find the null character execute the following...*/
	while(input[i] != '\0') 
	{
		/* if the counter i in input does NOT encounter a space OR newline character..do the following*/
		if ((input[i] != ' ')&&(input[i] !='\n'))
		{
			word[j] = input[i]; 							/*take whatever in input i and put in word j...*/
			i++;											/*increment counter i in input...*/
			j++;   											/*increment counter j in word..*/
														
		}
	 
		else												/* otherwise do the following */
		

		{
			/*while counter j is >= 0 do the following...j is now the space between the two words 
			 *(or the new line character if its the last word...*/
			while (j >= 0) 									

			{
				printf("%c",word[j-1]);	/*print the last character in the first word input (j-1...i.e. 3) */
				j--;  					/*decrement j by 1 to go to previous character in word..then loop starts again, 
										you print j - 1	ie the previous character in word..*/
			}

			j = 0;						/*reset j to zero for next iteration */
															
			i++; 						/*skips space and goes onto next word..J is now zero again*/
		}
	}
	printf("\n");  /* print blank line for formatting purposes */
	
 return 0;
}
void swap_characters_in_word(char *input, int i) 					/* After the main function block, define the custom function declared by the prototype */

{
fgets(input, 100, stdin);														/* scan input using fgets and store it in character array called sentence(80 characters long),
																				* this is what will happen when the function is called in the main function block*/
}