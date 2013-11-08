//YOUTUBE LINKLIST

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "37header.h"	/* didnt make diff to errors not to include header file seperately */


/*
struct students {
	int num;					//a number to signify the number in the list 
	int studentnumber;
	int phonenumber;
	char firstname[namemax];
	char surname[namemax];
	struct students *next;
	
};  */


void removeReturn (char *name);  /* function to remove \n when using fgets */

int main(int argc, const char *argv[])
{
    struct students *head, *tail, *current;     /* head is the first list, tail is the last list */

	head = NULL;  		/* no memory created yet to store memory inside the structs, all we have is pointers
							to point to one; but not actually created yet. */
	
	int i; /* incrementer variable */
	/* creating a for loop to create 3 different instances of struct students */
	
	for (i = 1; i<=3; i++) 
	{
		current = malloc(sizeof(struct students));  /* footnote 1-2 */
		current -> num = i;							/* footnote 3 */
		printf("Enter your first name:" );
		fgets(current -> firstname, namemax, stdin); /* stores user input of firstname */
		removeReturn(current -> firstname);			/* calling the function to remove \n from fgets */
		
		/* condition to get head pointer to point to the first thing in the list */
		
		if (head == NULL)						
			head = current;  /* head will get what current pointer is pointing to, now both are pointing to the same thing */
		else
			tail -> next = current;  /* allows execution the second time through the loop 
										tail`s next pointer is going to get the value of current pointer*/
			
		tail = current;		/* tail is always what the current pointer is ; its always the last thing in the list */
		tail -> next = NULL;  /* must be NULL, nothing to point to! */
	
	}
	
	/* current pointer starts with head; when current is not equal to NULL (as in tail); 
		current pointer now gets the value of current`s next! */
	
	for (current = head; current != NULL; current = current -> next)
	
	{ 	
		printf("%d: ", current -> num);
		printf("%s\n", current -> firstname);
	
	}
    return 0;
}

/*function to remove \n from fgets..##check if char*name is ok!! */
void removeReturn (char *name) {
	int length = strlen(name);
	name[length - 1] = '\0';
}

/* FOOTNOTES */

/*
1. sizeof will get the size of struct students in terms of bytes
	It will return bytes information to malloc
2. Malloc will allocate enough space for struct students. It returns
	the address of the struct and gives that address to the current pointer. 
3. Current pointer is now pointing to the struct students.
	can change the value it points to with ->

*/
	
	