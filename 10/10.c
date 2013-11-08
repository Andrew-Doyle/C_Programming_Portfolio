#include <stdio.h>

int main(void)
{
	printf("\n--- Portfolio Program 10 ---\n\n");
	
	/* declaring three int variables to store 3 seperate numbers */
	int numberone, numbertwo, numberthree;
	
	printf("Please enter your first number.\n");
	
	/* scanning user input (up to 5 digits) and storing it in numberone, etc */
	scanf("%5d",&numberone);											
	printf("Please enter your second number.\n");
	scanf("%5d",&numbertwo);
	printf("Please enter your third number.\n");
	scanf("%5d",&numberthree);
	
	/* if numberone > numbertwo AND numberone > numbertwo, do the following... */
	if ((numberone > numbertwo) && (numberone > numberthree))		
	{
		printf("\nThe largest number is:%3d\n",numberone);             /* print biggest number is numberone (if condition is true) */
	}
	
	/* if previous condition is false, do the following.. (if condition true) */
	else if ((numbertwo > numberone) && (numbertwo > numberthree))  
	{
		printf("\nThe largest number is:%3d\n",numbertwo);				/* execute this statement if condition true */
	}
	else if ((numberthree > numberone) && (numberthree > numbertwo)) 
	{
		printf("\nThe largest number is:%3d\n",numberthree);			/* execute this statement if condition true */
	}
	
	
	return 0;
}