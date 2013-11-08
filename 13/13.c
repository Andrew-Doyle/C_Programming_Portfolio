/* 	13.c 

* 	Author: 					Andrew Doyle
* 	Last Modified:				10/12/2012 - comments added and program tested
*   Problems: 
*   
***/


#include <stdio.h>

int main(void)

{

int numbers[2];
int sum[1];
char operator;

printf("\n--- Portfolio Program 13 ---\n\n");
printf("\n-- SIMPLE CALCULATOR PROGRAM --\n\n");
printf("\n-- WHAT OPERATION DO YOU WISH TO PERFORM ON THE NUMBERS? --\n\n");

do  			/*while true, carry out the following loop...*/
{	
	
	/* ask user what operation they wish to carry out */
	printf("+ Addition\n- Subtraction\n* Multiplication\n/ Division\nq Quit\n\n");		
	operator = getchar();	/* assign operator to getchar() i.e. the single character read from user input */																
	
	
	if(operator != 'q')
	{			
		printf("\nEnter the first number:\n");		/* ask user to enter first number */
		scanf("%9d", &numbers[0]);					/* scan user input and store it in the first element of the int array named numbers */
				
		printf("\nEnter the second number:\n");
		scanf("%9d", &numbers[1]);
				
		if(operator=='+')							/* if the operator is equal to + the sum is numbers[0] = numbers [1] */
		{
		sum[0]=numbers[0]+numbers[1];
					
		printf("\nThe sum of the two numbers is: %d\n\n", sum[0]);
		}
				
		else if(operator=='-')
		{
		sum[0]=numbers[0]-numbers[1];
					
		printf("\nThe second number subtracted from the first number is: %d\n\n", sum[0]);
		}
				
		else if(operator=='x' || operator =='*') 
		{
		sum[0]=numbers[0]*numbers[1];
					
		printf("\nThe first number multiplied by the second number is: %d\n\n", sum[0]);
		}
				
		else if(operator=='/')
		{
		sum[0]=numbers[0]/numbers[1];
					
		printf("\nThe first number divided by the second number is: %d\n\n", sum[0]);
		}
		getchar();																	
	}
} while (operator!='q');			/* this is the condition which determines whether the do-while loop is executed */
	
	
	return 0;
}

