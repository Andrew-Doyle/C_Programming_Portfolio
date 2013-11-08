
#include <stdio.h>
#include <stdlib.h>		//allows the exit() function to be implemented

int main(void)
{
	printf("\n--- Portfolio Program 12 ---\n\n");
	
	int numbers[2];			/* declaring an int array called numbers with two elements */
	int sum[1];		    	/* declaring an int variable to record the sum */
	char operator;		    /* declaring an char variable called operator for *+-/ */
	
		
	// ask the user what operation they wish to perform on numbers
	printf("\n-- SIMPLE CALCULATOR PROGRAM --\n\n");
	printf("\n-- WHAT OPERATION DO YOU WISH TO PERFORM ON THE NUMBERS? --\n\n+ Addition\n- Subtraction\n* Multiplication\n/ Division\n\n");	
	operator = getchar();												
	
	printf("\nEnter the first number:\n");	// ask the user to enter the first number 
	scanf("%9d", &numbers[0]);				// scan input and store it in first element of array "numbers" 
	
	printf("\nEnter the second number:\n");	// ask the user to enter the second number 
	scanf("%9d", &numbers[1]);				// scan input and store it in second element of array "numbers" 
	
	if(operator=='+')						// if the operator = "+", carry out the following loop... 
	{
	sum[0]=numbers[0]+numbers[1];
		
	printf("\nThe sum of the two numbers is: %d\n", sum[0]);
	}
	
	else if(operator=='-')					// or if the operator = "-", carry out the following loop...				
	{
	sum[0]=numbers[0]-numbers[1];
		
	printf("\nThe second number subtracted from the first number is: %d\n", sum[0]);
	}
	
	else if(operator=='x' || operator =='*')// or if the operator = "x" or '*', carry out the following loop...
	{
	sum[0]=numbers[0]*numbers[1];
		
	printf("\nThe first number multiplied by the second number is: %d\n", sum[0]);
	}
	
	else if(operator=='/')					// or if the operator = "/", carry out the following loop...
	{
	sum[0]=numbers[0]/numbers[1];
		
	printf("\nThe first number divided by the second number is: %d\n", sum[0]);
	}
	
	
	
	return 0;
}