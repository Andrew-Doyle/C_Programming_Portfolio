/* 	28.c:

* 	Author: 					Andrew Doyle
* 	Last Modified:				20/12/2012 - Formatted
*   Problems:  
*   Comments: 					Memory address changes when you remove malloc..but the array has an address
								In C, arrays and pointers are the same thing. 
***/


#include <stdio.h>
#include <stdlib.h>


int main(void)
{

 printf("\n\n--- Portfolio Program 28 ---\n\n");
	
 //char *mem; //P27									/* declare a pointer to mem, program works without this */
 
		  									    	/* malloc allocation not used in this program */
 char input[50];									/* declare a character array called input */
 
 printf("Enter some words:\n");					    /* ask user to enter words */
 fgets(input,50,stdin);								/* store user input in input */
 
 /* if input is not equal NULL, i.e. if there is enough memory available, execute the following.. */
 if (input !=NULL)									
 {
  /* display memory location and contents of the character array */
  printf("\nThe character array starting from memory location %p contains: %s\n", input, input); 
 }
 else												/* otherwise do the following.. */	
 
 {printf("!!! Insufficient memory\n"); return 1;}   /* tell user there is insufficient memory and exit the program */
 
	//free(mem); //P27
	return 0;
}