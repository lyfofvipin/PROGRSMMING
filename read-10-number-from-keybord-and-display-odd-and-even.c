#include<stdio.h>
void main()
{
	int i,N,odd,even;

	odd = even = 0, i = 1;

   while( i <= 10 )
	{
           printf("Enter a number\n");
           scanf("%d",&N);
		if( N%2 == 0 )
		   even = even+1;
		else
		   odd = odd+1;
           i = i+1;
	}
	printf("Odd number = %d \n and Even Number = %d",odd,even);
}
