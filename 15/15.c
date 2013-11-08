/* 	15.c: 						This program creates a program with a char variable
* 	Author: 					Andrew Doyle
* 	Last Modified:				19/12/2012 - formatted. 
								
* QUESTION:  
* When you run this program, look at the output, does the final printf output 10000, or 999 (or something else) ? Why?
* ANSWER: 
* The program keeps on running through the numbers.This is because the ASCII character set defines 128 characters (0 - 127 decimal)
***/

#include <stdio.h>

int main(void)
{

	char hello;
	hello = 0;					/* char variable hello given a VALUE of 0..NOT the '0' character */

	/* question asks to loop 10,000 times, but testing it at 129 as an experiment as it still demonstrates ASCII set limitation */
	while (hello < 129)         

	{
		hello = hello +1;           /* add 1 to hello */
		printf("%d\n", hello);		/* print new value of hello */
		
	}

	printf("Total: %d\n", hello);   /* prints the new value of hello (the total). will only work when while condition is (hello < 127).or lower..*/


	
	
	
	return 0;
}