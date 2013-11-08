/* 	23.c: 						19 is altered to use a function
* 	Author: 					Andrew Doyle
* 	Last Modified:				20/12/2012 - Formatted
*   Problems: 
*   
***/

#include <stdio.h>

void guess(char* array); 			/* declare a custom function prototype */

int main(void)
{
    printf("\n\n--- Portfolio Program 23 ---\n\n");
	
	const char SECRET[]="pink";		/* declare a constant char named SECRET with a value of "pink"*/
	char input[30];					/* array to store the users guess of the secret word */
	char count = 0;					/* declare a counter */
	
	printf("Guess the Secret Word.\n\n");	/* ask the user to guess the secret word */
    printf("WARNING: You will only have 3 attempts at guessing the word.\n");
	printf("Your first guess:\n");
	guess(input);					/* call the function, thereby storing the users input in input */
   
   if(strcmp(SECRET,input)==0)
	{
    printf("\nCorrect guess - well done\n");
	}
   
   /* start the counter; condition: if SECRET and guess are NOT equal AND count <=3 execute loop
	* after the loop increment count by one BEFORE testing the condition again */
   
   for (count=0; strcmp(SECRET,input)!=0&&count<=3; count++)	
   
   {
	
    printf("\nGuess the Secret Word:\n");						
    guess(input);						 /* call the custom function, thereby storing the users input */
   
   if(strcmp(SECRET,input)==0)			/* if SECRET and guess ARE equal, execute the following... */
	{
	    
		printf("\nCorrect guess - well done\n");
              
        
    }
	else								/* otherwise execute the following... */
	
	{
		
		count++;
		
	}
	
}	

    return 0;
}

	/* After the main function block, define the custom function declared by the prototype */
	void guess(char* array)						
														
	{													
	/* scan user input and store it in array....
	   this is what will happen when the function is called in the main function block */
	scanf("%29s", array);		
	}													
	
	
	
