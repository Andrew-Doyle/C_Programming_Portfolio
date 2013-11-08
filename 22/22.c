/* 	22.c: 						Write a program that asks the user to input any number of words. Replace all the
								vowels with the ‘$’ symbol. Display the result back to the user.
* 	Author: 					Andrew Doyle
* 	Last Modified:				20/12/2012 - formatted
*   Problems: 
*   
***/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
printf("\n\n--- Portfolio Program 22 ---\n\n");

	char sentence[80];				/* declare a list of 80 characters called sentence */
	int i = 0,len;					/* declare 2 ints: i as a counter and len for the string length */


	printf("Enter a sentence:\n");  /* ask user to enter a sentence */
	fgets(sentence, 80, stdin);		/* scan user input, and store it in sentence */
	 
	len=strlen(sentence);			/* assign len the string length of sentence */
	 
	for(i=0;i<len;i++)				/* initialize counter, if i is less than len execute the loop,
									 * after the loop increment i by one BEFORE testing the condition again */
		{

		/* if a character in sentence is a vowel, then insert $ in lieu of the vowel */

		if (sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' || sentence[i] == 'o' || sentence[i] == 'u')
		 sentence[i] = '$';
		}

	printf("\nDollar signs instead of vowels:\n%s\n", sentence);	/* print out what sentence is now */
 
return 0;
}