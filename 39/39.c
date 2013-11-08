/* 	39.c: 						
*************************************************************************************************************
*** 

***************************************************************************************************************
Portfolio Program 39
Expand on program 38 by making the programme use a linked list to store a list of student structures (any number of students)
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
	struct students *next;
	
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
	//38**struct students andrewdoyle[20]; 
	struct students *head, *tail, *current;
	head = NULL;
	
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
	int z;
	int y;
	/* ask the user how many records they wish to add */
	printf("How many records do you wish to add to the list of students\n");
	scanf("%d", &z);
		
	struct students *head, *tail, *current;
	for (y=0; y < z; y++)
	{
	int i;
	/* ALLOCATING MEMORY
	 * sizeof will get the size of struct students in terms of bytes
	 * It will return the bytes information to malloc
	 * malloc will allocate enough space for struct students. It returns 
	   the address of the struct and gives that address to the current pointer */
	
	current = malloc(sizeof(struct students));
	current -> num = y; /*current pointer is now pointing to the struct students */
	printf("Enter your first name\n");
	//scanf("%15s", &andrewdoyle[y].firstname); /* stores user input of firstname */
	scanf(current -> firstname, 15, stdin);
	
	printf("Enter your surname\n");
	//scanf("%20s",&andrewdoyle[y].surname); /* stores user input of surname */
	scanf(current -> surname, 20, stdin);
	
	printf("Enter your student number\n");
	//scanf("%15s",&andrewdoyle[y].studentnumber); /* stores user input of student number */
	scanf(current -> studentnumber, 15, stdin);

	printf("Enter your phone number\n");
	//scanf("%15s",&andrewdoyle[y].phonenumber); /* stores user input of phone number */
	scanf(current -> phonenumber, 15, stdin);	
	
		if (head == NULL)						
			head = current;  /* head will get what current pointer is pointing to, now both are pointing to the same thing */
		else
			tail -> next = current;  /* allows execution the second time through the loop 
										tail`s next pointer is going to get the value of current pointer*/
			
		tail = current;		/* tail is always what the current pointer is ; its always the last thing in the list */
		tail -> next = NULL;  /* must be NULL, nothing to point to! */
	
	
	
	}
}

/* ***FUNCTION TO WRITE STRUCTURE TO DISK*** */

void write_structure (struct students* andrewdoyle)
{
	FILE *write;
	write = fopen("students.txt", "a");
	
	int i;
	int h;
	
	/* ask the user to confirm how many records they wish to write to the file */
	printf("To confirm, how many records entered do you wish to write to the file\n");
	scanf("%d", &h);
	struct students *head, *tail, *current;
	for (i=0; i < h; i++)
	{
	current -> num = i;
	
	fprintf(write,"%s\n",current -> firstname);
	fprintf(write,"%s\n",current -> surname);
	fprintf(write,"%s\n",current -> studentnumber);
	fprintf(write,"%s\n",current -> phonenumber);
	
		if (head == NULL)						
			head = current;  /* head will get what current pointer is pointing to, now both are pointing to the same thing */
		else
			tail -> next = current;  /* allows execution the second time through the loop 
										tail`s next pointer is going to get the value of current pointer*/
			
		tail = current;		/* tail is always what the current pointer is ; its always the last thing in the list */
		tail -> next = NULL;  /* must be NULL, nothing to point to! */
		
	}
}


/* ***FUNCTION TO READ STRUCTURE FROM DISK*** */
void read_structure (struct students* andrewdoyle)

{
	FILE *read;
	read = fopen("students.txt", "r");
	

	int j;
	int k;
	
	/* ask the user to confirm how many records they wish to read from the file */
	printf("To confirm, how many records entered do you wish to read from the file\n");
	scanf("%d", &k);
	
	struct students *head, *tail, *current;
	for (j=0; j < k; j++)
	{
	current -> num = j;
	
	fscanf(read,"%s\n",current -> firstname);
	printf("%s\n",current -> firstname);
	fscanf(read,"%s\n",current -> surname);
	printf("%s\n",current -> surname);
	fscanf(read,"%s\n",current -> studentnumber);
	printf("%s\n",current -> studentnumber);
	fscanf(read,"%s\n",current -> phonenumber);
	printf("%s\n",current -> phonenumber);
	
		if (head == NULL)						
			head = current;  /* head will get what current pointer is pointing to, now both are pointing to the same thing */
		else
			tail -> next = current;  /* allows execution the second time through the loop 
										tail`s next pointer is going to get the value of current pointer*/
			
		tail = current;		/* tail is always what the current pointer is ; its always the last thing in the list */
		tail -> next = NULL;  /* must be NULL, nothing to point to! */
	
	}


}




	
	