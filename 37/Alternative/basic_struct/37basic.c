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
*   Comments: 					This program is a basic struct with information assigned in the program itself
***/

#include <stdio.h>
#include <string.h>

#include "37header.h"	
/*
struct students {
	int studentnumber;
	int phonenumber;
	char firstname[15];
	char surname[20];
	
};  */


int main(int argc, const char *argv[])
{
    struct students andrewdoyle;
	
		
	strcpy(andrewdoyle.firstname, "Andy");
	strcpy(andrewdoyle.surname, "Doyle");
	//andrewdoyle.firstname = "Andy"; //ERRORSd
	//andrewdoyle.surname = "Doyle";  //ERRORS
	andrewdoyle.studentnumber = 2388;
	andrewdoyle.phonenumber = 2103; //did not allow 8
	
	
	printf("\nANDREW DOYLE\n\n%s %s\nStudent number: %d\nPhone number: %d\n", andrewdoyle.firstname, andrewdoyle.surname,
			andrewdoyle.studentnumber, andrewdoyle.phonenumber);
	
	
	
    return 0;
}



	
	