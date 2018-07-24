#include<stdio.h>
void main()
{
  int a[5],b[5],i,j;
  char x;
   for (i = 0; i < 5; i++)
    {
       printf("Enter a number :");
	     scanf("%d",&a[i]);
    }

	for (i=4,j=0;i>=0;j++,i--)
      b[j]=a[i];

	for (i = 0; i < 5; i++)
    printf("%d ",b[i]);
}
