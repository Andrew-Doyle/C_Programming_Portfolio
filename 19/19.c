/* 	19.c: 						Modified from programme 18 so the user only gets 3 guesses.
*								Using a for loop.
* 	Author: 					Andrew Doyle
* 	Last Modified:				20/12/2012 - Formatted
								
*   Problems: 
*   
***/

#include <stdio.h>


int main(void)

{
	printf("\n\n--- Portfolio Program 19 ---\n\n");
	
	const char SECRET[]="pink";		/* declare a constant char named SECRET with a value of "pink" */
	char guess[30];					/* array to store the users guess of the secret word */
	char count = 0;					/* declare a counter */
	
	printf("Guess the Secret Word.\n\n");	
    printf("WARNING: You will only have 3 attempts at guessing the word.\n");
	printf("Your first guess:\n");
	scanf("%29s", guess);					/* scan the user input, and store it in the variable "guess" */
    if(strcmp(SECRET,guess)==0)				/* ensures well done message displayed on first answer */
	{
    printf("\nCorrect guess - well done\n");
	}
   
   /* start the counter; condition: if SECRET and guess are NOT equal AND count <=3 execute loop, 
    * after the loop increment count by one BEFORE testing the condition again */
   for (count=0; strcmp(SECRET,guess)!=0&&count<=3; count++)        
   {
	
    printf("\nGuess the Secret Word:\n");			
    scanf("%29s", guess);							
	
 /* if SECRET and guess ARE equal, execute the following... */  
  if(strcmp(SECRET,guess)==0)								
	{
	    
		printf("\nCorrect guess - well done\n");
              
        
    }
 /* otherwise execute the following... */
	else													
	
	{
		
		count++;
		
	}
	
}	

    return 0;
}

	
	
	
	
