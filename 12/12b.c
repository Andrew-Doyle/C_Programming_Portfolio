
#include <stdio.h>

int main(void)
{
	printf("\n--- Portfolio Program 12 ---\n\n");
	printf("\n-- SIMPLE CALCULATOR PROGRAM --\n\n");
	printf("\n-- WHAT OPERATION DO YOU WISH TO PERFORM ON THE NUMBERS? --\n\n");
	
	int numbers[2];			/* declaring an int array called numbers with two elements */
	int sum[1];		    	/* declaring an int variable to record the sum */
	int operator;		    /* declaring an char variable called operator for *+-/ */
	
	while(operator != 0)
	{
	printf("0)  Quit\n");
	printf("1)  Addition\n");
	printf("2)  Subtraction\n");
	printf("3)  Multiplication\n");
	printf("4)  Division\n");
	
	scanf("%d", &operator);
	
		switch(operator)  
		{
		case 0:
		default:					//ensures program exits if user enters a random character
			printf("Goodbye...\n");
			operator = 0;
			break;
		case 1:											// if the operator ="0", ie. addition, carry out the following loop..
			printf("\nEnter the first number:\n");		// ask the user to enter the first number 
			scanf("%9d", &numbers[0]);					// scan input and store it in first element of array "numbers" 
			printf("\nEnter the second number:\n");
			scanf("%9d", &numbers[1]);
			sum[0]=numbers[0]+numbers[1];
			printf("\nThe sum of the two numbers is: %d\n\n", sum[0]);
			break;
		case 2:
			printf("\nEnter the first number:\n");
			scanf("%9d", &numbers[0]);
			printf("\nEnter the second number:\n");
			scanf("%9d", &numbers[1]);
			sum[0]=numbers[0]-numbers[1];
			printf("\nThe second number subtracted from the first number is: %d\n\n", sum[0]);
			break;
		case 3:	
			printf("\nEnter the first number:\n");
			scanf("%9d", &numbers[0]);
			printf("\nEnter the second number:\n");
			scanf("%9d", &numbers[1]);
			sum[0]=numbers[0]*numbers[1];
			printf("\nThe first number multiplied by the second number is: %d\n\n", sum[0]);
			break;
		case 4:
			printf("\nEnter the first number:\n");
			scanf("%9d", &numbers[0]);
			printf("\nEnter the second number:\n");
			scanf("%9d", &numbers[1]);
			sum[0]=numbers[0]/numbers[1];
			printf("\nThe first number divided by the second number is: %d\n\n", sum[0]);
			
		}
	
	}
	
	
	
	/*
	
	printf("What operation do you wish to perform on the numbers?\n");	/* ask the user what operation they wish to perform on numbers
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
	
	*/
	return 0;
}