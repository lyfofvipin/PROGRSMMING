#include<stdio.h>
void main()
{
	int i,x,y,power=1;

	printf("Enter  base\n");
           scanf("%d",&x);

	printf("Enter power\n");
           scanf("%d",&y);

   while( i <= y )
	{
           power = power*x;
           i = i+1;
	}
	printf(" x power y = %d where  %d  is x and  %d  is y",power,x,y);
}
