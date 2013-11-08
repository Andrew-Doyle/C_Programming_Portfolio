/*Program 5 modified as an experiment for program 7

STEPS 1 - 6:

Results in dialog box popping up: "Colour7.exe has stopped working, windows is looking for a solution"
Changes to: "A problem caused the program to stop working correctly
			 Windows will close the program and notify you if a solution is available"
			 
However it does print the first 19 characters entered. 

Step 7:

Works without crashing. 
*/


#include <stdio.h>

int main(void)
{
	printf("\n--- Portfolio Program 7 ---\n\n");
	
	char buffer[ 3 ];   							/** Modified to be a small array**/
	printf("What's your favourite colour?\n"); 		
	scanf("%19s", buffer );    						/** Modified to %s instead of %19s**/
	printf("You said: %s\n", buffer); 				
	
	return 0;
}