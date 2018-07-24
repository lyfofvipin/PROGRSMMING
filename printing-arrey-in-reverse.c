#include<stdio.h>
void main()
{
  int a[5],i;
  char x;
	printf("Enter your arrey : ");
   for (i = 0; i < 5; i++)
     {
       printf("Enter a number :");
	     scanf("%d",&a[i]);
     }

	for ( i = 4 ; i >= 0 ; i-- )
        printf("%d \n",a[i]);

}
