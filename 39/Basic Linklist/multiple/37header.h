/* header file for struct for program 37*/

#define namemax 20   /* set a character length and type namemax instead of actual number*/

struct students {
	int num;					/*a number to signify the number in the list */
	int studentnumber;
	int phonenumber;
	char firstname[namemax];
	char surname[namemax];
	struct students *next;
	
};