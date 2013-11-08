#include <stdio.h>

int main(void)
{
   int num1,num2,result;
   char operator;
 
   do
   {
    
        printf("Please enter a function (+,-,*,/,q) and press enter:\n");
        operator = getchar();
    
       if (operator!='q')
       {
            printf ("Please enter a number and press enter:\n");
            scanf("%9d",&num1);
            printf ("Please enter a second number and press enter:\n");
            scanf("%9d",&num2);
       
           result = 0;
           if (operator=='+') result = num1+num2;
           if (operator=='-') result = num1-num2;
           if (operator=='*') result = num1*num2;
           if (operator=='/') result = num1/num2;
           
           printf("%d %c %d = %d\n", num1, operator, num2, result);
           getchar();
        }
    } while (operator!='q');
       
    return 0;
}