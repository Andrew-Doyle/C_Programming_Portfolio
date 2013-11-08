#include <stdio.h>

int main(void)
{
	printf("\n--- Portfolio Program 5 ---\n\n");
	
	char buffer[ 20 ];   							/*set up an array called buffer with 20 spaces for characters*/
	printf("What's your favourite colour?\n"); 		/*ask the user for input */
	scanf("%19s", buffer );    						/*scan what`s in the buffer, one space LESS than what you specified*/
	printf("\nYou said: %s\n", buffer); 				/*print whats in quotes and then the contents of 'buffer'*/
	
	return 0;
}