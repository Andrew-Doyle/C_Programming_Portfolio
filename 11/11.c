#include <stdio.h>

int main(void)
{
	printf("\n--- Portfolio Program 11 ---\n\n");
	
	char word[10];
	char c;
	
	printf("enter a word: ");
	scanf("%9s", word);
	
	printf("enter any character: ");
	c = getchar();
	
	
	
    while(c =='\n')
	{								
	c=getchar();
	printf("warning: char c contains a newline\n");
	
	}
	
	
	printf("\nYou entered the word: %s\nYou entered the character: %c\n", word, c);
	
		
	return 0;
}


