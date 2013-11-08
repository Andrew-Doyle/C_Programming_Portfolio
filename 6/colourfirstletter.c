#include <stdio.h>

int main(void)
{
	printf("\n--- Portfolio Program 6 ---\n\n");
	char buffer[10]; 							/*set up an array with space for 10 characters called'buffer'*/
	printf("What's your favourite colour?\n");  /*print whats in quotes*/
	scanf("%9s",buffer); 						/*scan user input and store it in buffer*/
	printf("%c\n",buffer[0]);   				/*output the first letter of colour inputted by user*/	
	
	return 0;
	
}