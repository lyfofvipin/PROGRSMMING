#include<stdio.h>
void main()
{
	int N,i;

	     printf("Enter value of N :");
	     scanf("%d",&N);
        i=1;
	while( i <= N )
	   {
		if( i%2 == 0 )
		   printf("%d\n",i);
                i = i+1;
	   }
}
