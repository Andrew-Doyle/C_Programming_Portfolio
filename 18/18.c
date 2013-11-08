/* 	18.c: 						Guess the word. Your programme knows a secret word. This word should be defined as a constant variable
*								Loop asking the user to guess a word until they get it right.
* 	Author: 					Andrew Doyle
* 	Last Modified:				20/12/2012 - Formatted
						 
*   Problems: 					
***/

#include <stdio.h>


int main(void)
{
	printf("\n\n--- Portfolio Program 18 ---\n\n");
	
    /* declare a constant char named SECRET with a value of "pink"  (constant means does not change)*/
	const char SECRET[]="pink";		
	
	/* declare an array of 30 characters called "guess", which will be used to store the users guess of the secret word */
	char guess[30];					 

  /* while SECRET and guess are NOT equal, execute the following....*/   
   do         	   
   {
		   
		printf("\nGuess the Secret Word: \n");		   /* ask the user to guess the secret word again */	
		scanf("%29s", guess);						   /* scan the user input, and store it in the variable "guess" */
   
		   if(strcmp(SECRET,guess)==0)                 /* if SECRET and guess ARE equal, execute the following... */
			{
				
			printf("\nCorrect guess - well done\n");  /* print correct guess message */
					  
				
			}
			else									    /* otherwise execute the following... */
			
			{	
			/* tell the user the word they entered (%s..taken from guess) is incorrect */
			printf("\nSorry %s is not the secret word\n"); 
			
			}
	
    }while(strcmp(SECRET,guess)!=0);

    return 0;
}

	
	
	
	
