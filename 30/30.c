/* 	30.c: 		

* 	Author: 					Andrew Doyle
* 	Last Modified:				20/12/2012 - Formatted
*   Problems:
*   
***/


#include <stdio.h>
#include <stdlib.h>

int main(void)

{

 printf("\n\n--- Portfolio Program 30 ---\n\n");

 char *word, *ptr;						/* declare two char pointers */

 word = (char*)malloc(50);				/* allocate 50 characters to to a character aray named word using malloc */
 
 printf("Enter some words: ");			/* ask the user to enter words */
 fgets(word,50,stdin);					/* store user input in word */
	
 ptr = &word[1];						/* make ptr point to the second character in the array named word */
 
 ptr[1] = '_';							/* change the second element in ptr to be an underscore */
 ptr[3] = '$';							/* change the fourth element in ptr to be a dollar sign */
 
 printf("%s", word); 

 return 0;
}