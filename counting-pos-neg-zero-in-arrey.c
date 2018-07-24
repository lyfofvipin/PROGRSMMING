#include<stdio.h>
int main()
{
  int a[10],z,p,n,i;
	z=p=n=0;
   for (i = 0; i < 10; i++)
     {
       printf("Enter a number : ");
	     scanf("%d",&a[i]);

	     if(a[i]>0)
					p++;
	     if(a[i]<0)
					n--;
	     if(a[i]==0)
		 		z++;
     }
    printf("Positive numbers are %d, Negtive number are %d and zeros are %d.",p,n,z);

		return 0;
}
