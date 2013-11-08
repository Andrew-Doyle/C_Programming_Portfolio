/* 	35.c: 						

* 	Author: 					Andrew Doyle
* 	Last Modified:				20/12/2012 - Formatted
*   Problems: 					
*   Comments
***/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	printf("\n\n--- Portfolio Program 35 ---\n\n");
	
	FILE *fp;
	char operator;
	char fname[10];
	int linecount;
	int c;
	linecount = 0;
	
	sscanf(argv[1], "%19s", fname);
	printf("Name of file is: %s\n\n",fname);
	
	fp = fopen( fname, "r" ); /* open for reading*/
	
	if ( fp == NULL ) /* check does file exist etc */
	{
	printf("Cannot open %s for reading \n", fname );
	fclose(fp); /* terminate program */
	}
	//STEP 1: read character from file

	c = getc(fp);  
	
	//STEP 2: while not end of file and user not finished execute the loop
	
	while (c !=EOF) 
	
	{
		//display character
		
		putchar(c);  
		
		//if character is newline then linecount = linecount + 1;
		if ( c =='\n')
		{
		 linecount++;	
		}
		//if linecount == 20 then linecount = 0 ;
		
		if (linecount == 20)
		{
			
			linecount = 0;
			//Prompt user and get reply;
			printf("\nPress q to quit or return to display the next 20 lines:\n");
			
			operator = getchar();
    
			if (operator=='q')
			return 1;
		}
		
		//read next character from file
		c = getc(fp);						
		//end
		
	}
		fclose ( fp );
    
    return 0;
}

	
	
	
	
