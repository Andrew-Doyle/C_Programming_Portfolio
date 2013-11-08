/* 	32.c: 						
*************************************************************************************************************
*** Write a program that can copy a text file:

FileCopy inputfile outputfile

Hints: Remember to use getc() and putc(). Also recall that you will need to use the
correct file modes – “r” for reading the file, and “w” for writing the file..***

* 	Author: 					Andrew Doyle
* 	Last Modified:				02/12/2012
*   Problems: Have done this as shown in a book example, but not using getc() and putc()
*   
***/

#include <stdio.h>


int main(void)
{
 /*Step 2: declare two file pointers, a character array variable, and an integer variable*/
 FILE *orig_ptr;
 FILE *copy_ptr;
 char buffer[100];
 int num;
 
 /*Step 3: attempt to open an existing local file to read, and another file to write to*/
 
 orig_ptr = fopen("test.txt","r");
 copy_ptr = fopen("copy.txt", "w");
 
 /*Step 4 Test that both files were successfully opened */
 
 if ( (orig_ptr != NULL) && (copy_ptr != NULL) )
 {
  /*Step 5: In the if block read the contents from the orginal file into the character array
   ,counting each object read, then write the contents of the array into the second file */
   
  num = fread (buffer, 1, 100, orig_ptr); /*arguments: char variable where text stored, size of chunk of text to read or write (usually 1), total number of charcters to read or write, and a file pointer to the file to work with */
  fwrite( buffer, 1 , num, copy_ptr);

/*Step 6: Close both text files upon completion */

  fclose( orig_ptr);
  fclose( copy_ptr);
  
/*Step 7: Output a confirmation, including the object count, and return the required zero integer value */

printf("Done: test.txt copied to copy.txt");
printf("\n%d objects copied.\n", num);
return 0;
 
 }
 
/*Step 8: Add an alternative message if the attempt should fail */

else
{
 if(orig_ptr == NULL)printf("Unable to open original.txt\n");
 if(copy_ptr == NULL)printf("Unable to open copy.txt\n");
 return 1;
}

 
}

	
	
	
	
