#include<stdio.h>
void main()
{
	int i,N,largest,smallest;

	i = 1;

	printf("Enter a number\n");
           scanf("%d",&N);

	largest = smallest = N;

   while( i <= 9 )
	{
           printf("Enter a number\n");
           scanf("%d",&N);

		if( N > largest )
		   largest = N;
		if( N < smallest )
		   smallest = N;
           i = i+1;
	}
	printf("largest Number is = %d \n and smallest Number = %d",largest,smallest);
}
