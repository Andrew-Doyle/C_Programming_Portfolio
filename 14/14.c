/* 	14.c: 						This program creates an unsigned integer
* 	Author: 					Andrew Doyle
* 	Last Modified:				19/12/2012 - tested and additional comment added.
								
* 	What value is displayed: 	10 digit number - 4294967295
*	Why?:						Unsigned Integers contain positive numbers only
*/



#include <stdio.h>

int main(void)
{
	printf("\n--- Portfolio Program 14 ---\n\n");

	unsigned int t = 1;		/* unisgned integer variable created with a value of 1 */
	printf("%u\n", t);
	
	t = t - 2;				/* subtract 2 from the variable */
	printf("%u\n", t);
	
	return 0;
}