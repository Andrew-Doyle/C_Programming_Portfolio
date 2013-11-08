/* 	34.c: 						
* 	Author: 					Andrew Doyle
* 	Last Modified:				20/12/2012 - Formatted
*   Comments:					Works by typing in command line: 34 test.txt result.txt
*   
***/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	 printf("\n\n--- Portfolio Program 34 ---\n\n");
	
	FILE *fp1, *fp2;
	char fname1[20], fname2[20];
	char operator;
	int ca, cb;						
	
	/* scan the second argument entered by the user, store it in fname1*/
	sscanf(argv[1], "%19s", fname1); 
	sscanf(argv[2], "%19s", fname2); /* scan third argument(other file) */
	
	printf("Name of 1st file: %s\n",fname1);
	printf("Name of 2nd file: %s",fname2);
	
	
	fp1 = fopen( fname1, "r" ); /* open for reading */
	fp2 = fopen( fname2, "r" ); /* open for reading */
	
	/* check do files exist */
	if ( fp1 == NULL ) 
	{
	printf("\nCannot open %s for reading \n", fname1 );
	fclose(fp1); /* terminate program */
	}
	
	else if ( fp2 == NULL )
	{
	printf("\nCannot open %s for reading \n", fname2 );
	fclose(fp2); /* terminate program */
	}
    
	
	else /* both files opened successfully */
	{
		ca = getc( fp1 ) ;  /*get the first character from the first file */
		cb = getc( fp2 ) ;
		
		/* while not the end of the file and while both characters match*/
		while ( ca != EOF && cb != EOF && ca == cb )
		{		
		/* ca is assigned the next character, loop will now test it */
			ca = getc( fp1 ) ;
			cb = getc( fp2 ) ;
		}
		
		/* the loop will finish at either last character or where characters didn`t match
          if the characters are now equal, tell user that the files are identical*/
		if ( ca == cb )
			printf("\n\nFiles are identical \n");
		else if ( ca != cb )
			printf("\n\nFiles differ \n" );
		
		/* close the files */
		fclose ( fp1 );
		fclose ( fp2 );
	}
    return 0;
}

	
	
	
	
