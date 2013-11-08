#include <stdio.h>

int main(void)


{
	printf("\n--- Portfolio Program 4 ---\n\n");
	
	/*Declare a int variable called int_size which is assigned the value of the size of an int, etc*/
	int int_size = sizeof(int);  
	int char_size = sizeof(char); 
	int float_size = sizeof(float);
	int double_size = sizeof(double);

	/*Declare an integar array named 'three' with three elements, etc*/
	int three[3]; 
	char four[4]; 
	float five[5]; 
	double six[6]; 
	
	/* find the size of the int array named 'three', etc*/
	int size_of_int = sizeof(three); 
	int size_of_char = sizeof(four); 
	int size_of_float = sizeof(five);
	int size_of_double = sizeof(six);

	/*print the variables to the command prompt screen, etc*/
	printf("%d\n",int_size); 
	printf("%d\n",char_size);
	printf("%d\n",float_size);
	printf("%d\n",double_size);
	printf("%d\n",size_of_int);
	printf("%d\n",size_of_char);
	printf("%d\n",size_of_float);
	printf("%d\n",size_of_double);

return 0;

}		
