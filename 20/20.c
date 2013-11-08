/* 	20.c: 						
* 	Author: 					Andrew Doyle
* 	Last Modified:				14/11/2012
								08/12/2012 comments added and program tested
								
*   What is happening here:     Programme asks the user to enter a sentence..
*								when user enters the sentence the programme returns
*								what the user entered after "You input":
*   The difference:				20 prints an extra blank line, 20b does not since scanf() doesn`t process new lines.
***/

#include <stdio.h>

const int SENTENCE_LENGTH=100;					/* a constant int declaring the size of the character array*/

int main(void)
{
	printf("\n\n--- Portfolio Program 20 ---\n\n");
	
	char sentence[SENTENCE_LENGTH];				/* declare a character array with a size equal to the const int named SENTENCE_LENGTH */
	
	printf("Enter a sentence: ");				/* ask user to enter a sentence */
	
	/* fgets 3 parameters: character array called sentence, int representing size of character array, and input file */
	fgets(sentence, SENTENCE_LENGTH, stdin);  
	printf("You input: %s\n", sentence);	
	
	return 0;
}