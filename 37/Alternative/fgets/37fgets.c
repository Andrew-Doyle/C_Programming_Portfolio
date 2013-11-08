/* 	37.c: 						
*************************************************************************************************************
*** Create a structure that has 3 member variables: name, phone, student number. 

Write a function that allows the user to enter their name, phone number and student number
and store it in the structure. 

The function should take 1 parameter: a pointer to a structure where it will store the input. 

Create two other functions, one to write the structure to disk, and one to read the structure from disk. 

When the user runs the program, it should give them an option of reading the person's info from disk, or enter
new information and save it to disk.

* 	Author: 					Andrew Doyle
* 	Last Modified:				02/12/2012
*   Problems: 
*   Comments: 					writing to file does not work properly (cannot enter first name)
	when reading the file, firstname, surname missing, and answers are one step wrong..ie phone nr entered in student number
***/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct students{		//TRY THIS WITHOUT TYPEDEF
	int num;
	char studentnumber[15];
	char phonenumber[15];
	char firstname[15];
	char surname[20];
	
};



void removeReturn (char *name);  /* function to remove \n when using fgets */


/* New function */

void input_string (struct students* andrewdoyle);

/* ***NEW*** */
/* Function to write the structure to disk */

void write_structure (struct students* andrewdoyle);

/* Function to read the structure from disk */

void read_structure (struct students* andrewdoyle);



int main(int argc, const char *argv[])
{
	char operator;
	int c;


    struct students andrewdoyle;
	
	printf("To add information to file, enter w; to read the information enter a:\n");
	operator = getchar();
	
	if (operator=='w'){	
	input_string(&andrewdoyle);  /* calling new function */
	write_structure(&andrewdoyle);
	}
	
	else if (operator =='a')
	read_structure (&andrewdoyle);
	
	
	printf("\nANDREW DOYLE\n\n%s %s\nStudent number: %s\nPhone number: %s\n", andrewdoyle.firstname, andrewdoyle.surname,
			andrewdoyle.studentnumber, andrewdoyle.phonenumber);
	
	
	
	
    return 0;
}

/* New Function (1 Parameter) */

void input_string (struct students* andrewdoyle)
{
	printf("Enter your first name\n");
	fgets(andrewdoyle->firstname, 15, stdin); /* stores user input of firstname */
	removeReturn(andrewdoyle->firstname);	/* calling function to remove \n */
	
	printf("Enter your surname\n");
	fgets(andrewdoyle->surname, 20, stdin); /* stores user input of surname */
	removeReturn(andrewdoyle->surname);	/* calling function to remove \n */
	
	printf("Enter your student number\n");
	fgets(andrewdoyle->studentnumber, 15, stdin); /* stores user input of student number */
	removeReturn(andrewdoyle->studentnumber);	/* calling function to remove \n */
	
	printf("Enter your phone number\n");
	fgets(andrewdoyle->phonenumber, 15, stdin); /* stores user input of phone number */
	removeReturn(andrewdoyle->phonenumber);	/* calling function to remove \n */
}

/* ***NEW*** */

void write_structure (struct students* andrewdoyle)
{

/* ***NEW*** */
	FILE *write;
	write = fopen("students.txt", "w");
	
	fprintf(write,"%s\n",&andrewdoyle->firstname);
	fprintf(write,"%s\n",&andrewdoyle->surname);
	fprintf(write,"%s\n",&andrewdoyle->studentnumber);
	fprintf(write,"%s\n",&andrewdoyle->phonenumber);

}

/* ***NEW*** */
/* ***FUNCTION TO READ STRUCTURE FROM DISK*** */
void read_structure (struct students* andrewdoyle)

{
	/* ***NEW*** */
	FILE *read;
	read = fopen("students.txt", "r");
	
	fscanf(read,"%s\n",&andrewdoyle->firstname);
	fscanf(read,"%s\n",&andrewdoyle->surname);
	fscanf(read,"%s\n",&andrewdoyle->studentnumber);
	fscanf(read,"%s\n",&andrewdoyle->phonenumber);


}


/*function to remove \n from fgets..##check if char*name is ok!! */
void removeReturn (char *name) {
	int length = strlen(name);
	name[length - 1] = '\0';
}

	
	