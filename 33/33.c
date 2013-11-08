/* 	33.c: 						Similiar to question 31 and 33, but read 20 words from a file which the user will guess**
* 	Author: 					Andrew Doyle
* 	Last Modified:				20/12/2012 - Formatted
*   Problems:  
*   
***/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    printf("\n\n--- Portfolio Program 33 ---\n\n");
	
	printf("This program has 20 secret words.\nYou must guess them one word at a time consecutively.\n");
	printf("You will only get three attempts at each word - best of luck!\n");
	
	FILE*pinktxt;					/* declare the file pointer called pinktxt */
	const char SECRET[10];			/* declare a constant char named SECRET*/
	char guess[30];					/* array to store the users guess of the secret word */
	char count = 0,ch, ans[20][10];	/* declare a counter, character, and a two dimensional character array */
							
	int i,z;
	
	pinktxt=fopen("pink.txt","r");	/* open pink.txt for reading */
	
	/* check to see that file opened */
	if ( pinktxt == NULL)									
	{
	printf("\nWarning: Cannot open pink.txt for reading \n");
	exit(0) ; /* Terminate program! */
	}
	
	i=0;			
	
	z=0;
	
	/* while the end of file is not reached , execute the following*/
	while(ch!=EOF)							
	
	{
	
	fscanf(pinktxt,"%10s", &SECRET);	/* scan the first line in the file and store it in SECRET */	
	strcpy(ans[i],SECRET);				/* copy the value of SECRET into first element of ans */
					
	/* increment i so that on next iteration next word stored in next element of ans[]*/
	i++;							
		
	ch=getc(pinktxt);
				
	}
	fclose(pinktxt);						/* close the file */
  
/* z is the counter for ans , while z is less than or equal to 19(20 lines with words), increment z by one */
	 
 for (z=0; z <= 19; z++)					
  {

	for (count=0; count<3;)															 
    {
	   		 				
	printf("\nGuess the Secret Word: \n");	
	scanf("%s", guess);					
	printf("\nYou guessed: " "%s \n", guess); 
	
	/* if first element of SECRET and guess ARE equal, execute the following... */		
	 if(strcmp(ans[z],guess)==0)										
	 { 
				
	  printf("\nCorrect guess - well done\n\n");
	  printf("____________________________________\n"); /*formatting to seperate correct guesses */
	  break;				  /* if user gets answer correct, exit this loop and user will be asked to guess next word */
	  }
	 else					/* otherwise execute the following... */
			
	 {
	  printf("Sorry %s is not the secret word\n\n");			
	  count++;
				
	  }		
	}
		
	if (count >= 3)
	break;		
  }
	
    return 0;
}

	
	
	
	
