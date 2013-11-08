/* 	26.c: 						
* 	Author: 					Andrew Doyle
* 	Last Modified:				20/12/2012 - Formatted
								
***/


#include <stdio.h>


int main(int argc, char *argv[])
{

	printf("\n\n--- Portfolio Program 26 ---\n\n");
	
	int i;
	
	printf("You supplied %d arguments\n", argc);
	
	for (i = 0; i < argc; i++)
	printf("argument %d = %s\n", i, argv[i]);

	return 0;
}