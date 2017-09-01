#include<stdio.h>
void main()
{
	int N,i,sum;
	float avg;

	avg = sum = 0;

        i=1;
	while( i <= 10 )
	   {
		   printf("Enter value of N :");
	              scanf("%d",&N);

		printf("%d\n",N*i);
                i = i+1;
	   }
}
