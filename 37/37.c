/* 	37.c: 					


* 	Author: 					Andrew Doyle
* 	Last Modified:				02/12/2012
*   Problems: 
*   Comments: 					This works. If you use fgets instead of scanf it results in a dsyfunctional programme
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




/* New function */

void input_string (struct students* andrewdoyle);

/* ***NEW*** */
/* Function to write the structure to disk */

void write_structure (struct students* andrewdoyle);

/* Function to read the structure from disk */

void read_structure (struct students* andrewdoyle);



int main(int argc, const char *argv[])
{
	printf("\n\n--- Portfolio Program 37 ---\n\n");
	
	//char operator;
	int operator = 1;
	int c;


    struct students andrewdoyle;
	
	/* NEW OPTION INFORMATION */
	while(operator != 0)
	{
	printf("\n--Student information Structure --\n\n");
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
			printf("You chose to insert information\n\n");
			input_string(&andrewdoyle); 
			write_structure(&andrewdoyle);
		case 2:
			printf("The information contained in the file is as follows:\n\n");
			read_structure(&andrewdoyle);
			
		}
	
	}

	
	
	
    return 0;
}

/* New Function (1 Parameter) */

void input_string (struct students* andrewdoyle)
{
	printf("Enter your first name\n");
	scanf("%15s", &andrewdoyle->firstname); /* stores user input of firstname */

	
	printf("Enter your surname\n");
	scanf("%20s",andrewdoyle->surname); /* stores user input of surname */
	
	
	printf("Enter your student number\n");
	scanf("%15s",andrewdoyle->studentnumber); /* stores user input of student number */

	
	printf("Enter your phone number\n");
	scanf("%15s",andrewdoyle->phonenumber); /* stores user input of phone number */
	
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
	printf("%s\n",andrewdoyle->firstname);
	fscanf(read,"%s\n",&andrewdoyle->surname);
	printf("%s\n",andrewdoyle->surname);
	fscanf(read,"%s\n",&andrewdoyle->studentnumber);
	printf("%s\n",andrewdoyle->studentnumber);
	fscanf(read,"%s\n",&andrewdoyle->phonenumber);
	printf("%s\n",andrewdoyle->phonenumber);


}



	
	