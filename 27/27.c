/* 	27.c: 				
* 	Author: 					Andrew Doyle
* 	Last Modified:				20/12/2012 - Formatted
*   Problems:  
*   
***/


#include <stdio.h>
#include <stdlib.h>

const int bytes = 50;

int main(void)

{
 printf("\n\n--- Portfolio Program 27 ---\n\n");
	
 char memory, *mem;								/* declare a char variable called memory and a pointer to mem */
 
 mem = malloc(bytes);							/*allocate a block of memory 50 bytes in size */
 
 printf("Enter some words:\n");				/* ask user to enter words */
 fgets(mem,bytes,stdin);						/* store user input in mem */
 
 /* if mem is not equal NULL, i.e. if there is enough memory available, execute the following.. */
 if (mem !=NULL)									
 {
  /* display memory location and contents of the character array */
  printf("The character array starting from memory location %p contains:\n%s\n", mem, mem);  
 }
 
 /* printf does not print the contents of the array twice as the first call to mem (%p) is for the memory location */
 
 else									
 
 {printf("!!! Insufficient memory\n"); return 1;}   /* tell user there is insufficient memory and exit the program */
 
	

	
	free(mem);
	return 0;
}