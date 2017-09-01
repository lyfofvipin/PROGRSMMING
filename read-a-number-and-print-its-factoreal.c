#include<stdio.h>
void main()
{
	int i,Number,factorial;

	i = factorial = 1;

	printf("Enter your Number\n");
           scanf("%d",&Number);

   while( i <= Number )
	{
           factorial = factorial*i;
           i = i+1;
	}
	printf("Factorial of the number is %d",factorial);
}
