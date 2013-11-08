/* 	36.c: 						

* 	Author: 					Andrew Doyle
* 	Last Modified:				02/12/2012
*   Problems: 
*   Pseudo:

	Read File
	While != EOF, getchar
	initilize counter for brackets, i=0, j=0, z=0
***/

#include <stdio.h>

#include <string.h>

int main(int argc, char *argv[]) // is it better to have const char *argv[] ???
{
	printf("\n\n--- Portfolio Program 36 ---\n\n");
	
	FILE *fp1; 
	char fname1[20]; 
	int c;
	int i = 0; /* Initializer for { */
	int j = 0; /* Initializer for ( */
	int z = 0; /* Initializer for [ */
	
	int h = 0; /* Initializer for } */
	int k = 0; /* Initializer for ) */
	int y = 0; /* Initializer for ] */
	
	sscanf(argv[1], "%19s", fname1); 
	
		
	printf("\nName of file: %s\n\n",fname1);
	
	fp1 = fopen( fname1, "r" ); /* open for reading*/
	
	
	if ( fp1 == NULL ) /* check does file exist etc */
	{
	printf("\nCannot open %s for reading \n", fname1 );
	fclose(fp1); /* terminate program */
	}
	
	c = getc(fp1);
	
	while (c !=EOF)  /* while not the end of the file carry out the following */
		
	{
		if (c == '{')   /* if the character is { */
		i++;			/* increment i by one (the counter for {`s) */
		if (c == '(')
		j++;
		if (c == '[')
		z++;
		
		if (c == '}')
		h++;
		if (c == ')')
		k++;
		if (c == ']')
		y++;
		
	c = getc(fp1);		/* read the next character */
		
	}
	fclose ( fp1 );		/* close the file */
	
	if (i!=h || j!=k || z!=y)   /* if the counters for the opposing brackets are NOT equal, print a warning message */
	printf("WARNING: The amount of {,(,[`s does not match the amount of },),]`s\n\n");
	
	else						/* if the counters for the opposing brackets ARE equal, print a feel good message */
	printf ("YAY. The amount of {,(,[`s and },),]`s are equal\n\n");
	
	/* print out the amount of each bracket to the user for information purposes */
	
	printf("The number of { in the file is: %d\n", i);
	printf("The number of ( in the file is: %d\n", j);
	printf("The number of [ in the file is: %d\n", z);
	printf("The number of } in the file is: %d\n", h);
	printf("The number of ) in the file is: %d\n", k);
	printf("The number of ] in the file is: %d\n", y);
		
	
    return 0;
}


	
	
	
	
