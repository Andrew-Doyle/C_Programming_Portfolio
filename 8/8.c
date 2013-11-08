#include <stdio.h>

int main(void)
{
	printf("\n--- Portfolio Program 8 ---\n\n");
	
	int num1;								/* declaring int variables for 2 numbers and 2 sums */
	int num2;
	int sum1;
	int sum2;
	
	printf("Enter the first number:\n");	/* ask the user to enter a number */
	scanf("%9d", &num1);				    /* store their input in num1, allowing for a number 9 digits long with %9d */	
	
	printf("Enter the second number:\n");
	scanf("%9d", &num2);
	
	sum1=num1+num2;							/* assigning sum1 the value of: num1 added to num2 */
	sum2=num1-num2;							/* assigning sum2 the value of: num2 subtracted from num1 */
	
	/* display the numbers entered by the user */
	printf("\nThe numbers you entered were %d and %d.\n\n", num1, num2);						
	printf("The sum of the two numbers is: %d\n", sum1);								/* display the value of sum1 */
	printf("The sum of the second number subtracted from the first is: %d\n", sum2);	/* display the value of sum2 */
	
	
	return 0;
}