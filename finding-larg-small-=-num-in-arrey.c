#include<stdio.h>
int main()
{
  int a[10],i,b,l,s,e;
    s=e=l=0;

	printf("Enter a number with which you want to compare Arrey elements : ");
	scanf("%d",&b);

   for ( i = 0 ; i < 10 ; i++ )
     {
       printf("Enter a number :");
	     scanf("%d",&a[i]);

	     if(a[i]==b)
					e++;

	     if(a[i]<b)
					s++;

	     if(a[i]>b)
		 			l++;
     }
    printf("Large number are %d, Small number are %d and Equal are %d",l,s,e);
		return 0;
}
