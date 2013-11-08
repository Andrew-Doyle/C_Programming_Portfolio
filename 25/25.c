/* 	25.c: 						
* 	Author: 					Andrew Doyle
* 	Last Modified:				20/12/2012 - Formatted
***/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
	
	printf("\n\n--- Portfolio Program 25 ---\n\n");
	printf("--- This program counts the letters in the words you enter ---\n\n");
	int i = 0, j = 0, count = 0;	/* declare int variables for the letters,the user input, and a counter */		


	char inputs[25];
	char letters[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

	printf("Please enter any number of words\n");
	fgets(inputs,25,stdin);

	/* for loop to set everything to zero */
	for (i=0; i<26; i++)
	{
		while(inputs[j] != '\n')
		/* loop to count occurence of each character in input array */
		{
			if(letters[i] == inputs[j])
			
			{ 
			count++;
			}
		  
			j++;
		
		}
		
		printf("%s%c%s%d%s\n","\n", letters[i], " = ", count, "\n");
		
		j=0;  
		
		count=0;
		
		
		
	}
	

	return 0;
}