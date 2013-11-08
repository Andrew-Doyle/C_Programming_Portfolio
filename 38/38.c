/* 	38.c: 						
*************************************************************************************************************
*** Create a structure that has 3 member variables: name, phone, student number. 

Write a function that allows the user to enter their name, phone number and student number
and store it in the structure. 

The function should take 1 parameter: a pointer to a structure where it will store the input. 

Create two other functions, one to write the structure to disk, and one to read the structure from disk. 

When the user runs the program, it should give them an option of reading the person's info from disk, or enter
new information and save it to disk.

***************************************************************************************************************
Portfolio Program 38
Expand on program 37 by allowing it to process more than 1 student.
***************************************************************************************************************

* 	Author: 					Andrew Doyle
* 	Last Modified:				02/12/2012
*   Problems: 
*   Comments: 					
***/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct students{		
	int num;
	char studentnumber[15];
	char phonenumber[15];
	char firstname[15];
	char surname[20];
	
};

/* Input Function */

void input_string (struct students* andrewdoyle);  

/* Function to write the structure to disk */

void write_structure (struct students* andrewdoyle);

/* Function to read the structure from disk */

void read_structure (struct students* andrewdoyle);



int main(int argc, const char *argv[])
{
	int operator=1;
	int c,z;

	/*an array of structs allows us to process more than 1 student*/
	struct students andrewdoyle[20]; 
	
	
	while(operator != 0)
	{
	printf("\n-- Portfolio Program 38 - Student information Structure (MULTIPLE) --\n\n");
	printf("\n-- MENU SELECTION --\n\n");
	printf("0) Quit\n");
	printf("1) Insert Student Information\n");
	printf("2) Read Student Information\n");
	
	scanf("%d", &operator);
	
		switch(operator)  
		{
		case 0:
		default:
			printf("Goodbye...\n");
			operator = 0;
			break;
		case 1:
			printf("You chose to insert information\n");
			input_string(andrewdoyle);  /* calling new function */
			write_structure(andrewdoyle);
		case 2:
			printf("The information contained in the file is as follows:\n");
			read_structure(andrewdoyle);
			
		}
	
	}
		
    return 0;
}

/* USER INPUT FUNCTION */

void input_string (struct students* andrewdoyle)
{
		
	int z=0;
	
	
	printf("Enter your first name\n");
	scanf("%15s", &andrewdoyle[z].firstname); /* stores user input of firstname */

	
	printf("Enter your surname\n");
	scanf("%20s",&andrewdoyle[z].surname); /* stores user input of surname */
	
	
	printf("Enter your student number\n");
	scanf("%15s",&andrewdoyle[z].studentnumber); /* stores user input of student number */

	printf("Enter your phone number\n");
	scanf("%15s",&andrewdoyle[z].phonenumber); /* stores user input of phone number */

}

/* ***FUNCTION TO WRITE STRUCTURE TO DISK*** */

void write_structure (struct students* andrewdoyle)
{
	FILE *write;
	write = fopen("students.txt", "a");
	
	int i=0;
	
	fprintf(write,"%s\n",andrewdoyle[i].firstname);
	fprintf(write,"%s\n",andrewdoyle[i].surname);
	fprintf(write,"%s\n",andrewdoyle[i].studentnumber);
	fprintf(write,"%s\n",andrewdoyle[i].phonenumber);
	
}


/* ***FUNCTION TO READ STRUCTURE FROM DISK*** */
void read_structure (struct students* andrewdoyle)

{
	FILE *read;
	read = fopen("students.txt", "r");
	

	int j;
	
	for (j=0; j < 5; j++)
	{
		
	fscanf(read,"%s\n",andrewdoyle[j].firstname);
	printf("%s\n",andrewdoyle[j].firstname);
	fscanf(read,"%s\n",andrewdoyle[j].surname);
	printf("%s\n",andrewdoyle[j].surname);
	fscanf(read,"%s\n",andrewdoyle[j].studentnumber);
	printf("%s\n",andrewdoyle[j].studentnumber);
	fscanf(read,"%s\n",andrewdoyle[j].phonenumber);
	printf("%s\n",andrewdoyle[j].phonenumber);
	
	}


}




	
	