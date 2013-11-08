/* 	29.c: 		
* 	Author: 					Andrew Doyle
* 	Last Modified:				20/12/2012 - Formatted
*   Note:						To execute, type 29 5 x 5 etc
*   
***/

#include <stdio.h>

/* use the second main 
*  the argc variable contains the number of items typed at the command prompt
*  the argv variable is declared as a pointer array, this is the same as an array of strings
* it represents what was typed at the command prompt*/

int main(int argc, char *argv[])			

{

int numbers[2];
int sum[1];
char operator;

printf("\n\n--- Portfolio Program 29 ---\n\n");

/* scan the users first input argv[1] which will be a number, argv[2] is operator. 
starting with argv[1] as argv[0] is always the name of the program being run itself */
	
	sscanf(argv[1], "%9d", &numbers[0]);	
	sscanf(argv[2], "%c", &operator);
	sscanf(argv[3], "%9d", &numbers[1]);
	
	
	if(operator=='+')													
	{
	sum[0]=numbers[0]+numbers[1];
		
	printf("The sum of the two numbers is: %d\n", sum[0]);
	}
	
	else if(operator=='-')
	{
	sum[0]=numbers[0]-numbers[1];
		
	printf("The second number subtracted from the first number is: %d\n", sum[0]);
	}
	
	else if(operator=='x') 
	{
	sum[0]=numbers[0]*numbers[1];
		
	printf("The first number multiplied by the second number is: %d\n", sum[0]);
	}
	
	else if(operator=='/')
	{
	sum[0]=numbers[0]/numbers[1];
		
	printf("The first number divided by the second number is: %d\n", sum[0]);
	}

	
	return 0;
}