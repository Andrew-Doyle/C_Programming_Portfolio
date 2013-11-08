/* 	31.c:  Based on Program 19 (3 chances to guess a word), write a program that reads the
secret word from a text file. 
* 	Author: 					Andrew Doyle
* 	Last Modified:				20/12/2012 - Formatted
*   Problems:  
*   
***/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("\n\n--- Portfolio Program 31 ---\n\n");
	
    FILE*pinktxt;							/* declare the file pointer called pinktxt */
	const char SECRET[5];					/* declare a constant char named SECRET with a value of "pink"*/
	char guess[30];							/* array to store the users guess of the secret word*/
	char count = 0;							/* declare a counter */
	
	pinktxt=fopen("pink.txt","r");			/* open pink.txt for reading */
	if ( pinktxt == NULL)					/* check to see that file opened */
	{
	printf("\nWarning: Cannot open pink.txt for reading \n");
	exit(0) ; /* Terminate program! */
	}
	
	fscanf(pinktxt,"%5s", &SECRET);			/* scan the file and store the result in SECRET */
	fclose(pinktxt);						/* close the file */
    
	printf("Guess the Secret Word.\n\n");	
    printf("WARNING: You will only have 3 attempts at guessing the word.\n");
	printf("Your first guess:\n");
    scanf("%29s", guess);					/* scan the user input, and store it in the variable "guess" */
   
    if(strcmp(SECRET,guess)==0)             /* ensures well done message displayed on first answer */
	{
    printf("\nCorrect guess - well done\n");
	}
   
   /* start the counter; condition: if SECRET and guess are NOT equal AND count <=3 execute loop
   * after the loop increment count by one BEFORE testing the condition again */
   
   for (count=0; strcmp(SECRET,guess)!=0&&count<=3; count++)		
   {
	
    printf("\nGuess the Secret Word:\n");	/* ask the user to guess the secret word again */
    scanf("%29s", guess);					/* scan the user input, and store it in the variable "guess" */
   
   if(strcmp(SECRET,guess)==0)				/* if SECRET and guess ARE equal, execute the following... */
	{
	    
		printf("\nCorrect guess - well done\n");
              
        
    }
	else									/* otherwise execute the following... */
	
	{
		
		count++;
		
	}
	
	}	

    return 0;
}

	
	
	
	
