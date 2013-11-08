#include <stdio.h>

int main(void)
{ 
	printf("\n--- Portfolio Program 9 ---\n\n");

	int numbers[2];								/* an array which will be used to store the users input */
	int sum[1];									/* an array which will be used to store sum of the two numbers */
	int subtraction[1];							/* an array which will be used to store the subtraction calculation */
	
	printf("Enter the first number:\n");
	/* scan the users input and storing it in the first element of the int array named numbers */
	scanf("%9d", &numbers[0]);					
	
	printf("Enter the second number:\n");
	/* scanning the users input and storing it in the second element of the int array named numbers */
	scanf("%9d", &numbers[1]);					
	
	/* assigning the first (and only) element of sum the value of: num[0] added to num[1], etc */
	sum[0]=numbers[0]+numbers[1];				
	subtraction[0]=numbers[0]-numbers[1];		
	
	printf("\nThe sum of the two numbers is: %d\n", sum[0]);										/*printing sum[0]*/
	printf("The sum of the second number subtracted from the first is: %d\n", subtraction[0]);  /*printing subtraction[0]*/
	
	
	return 0;
}