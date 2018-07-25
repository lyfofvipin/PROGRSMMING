	#include<stdio.h>
	int main()
	{
	  int a[5],i,b,c = -1;
	
	  int search (int [],int,int);
    printf("Enter your array : \n");
   	for (i = 0; i < 5; i++)
     	{
       	printf("Enter a number :");
	     	scanf("%d",&a[i]);
     	}
		printf("Enter a number you want to search :");
		scanf("%d",&b);
    i=i-1;
		c = search (a,b,i);

		if( c != -1 )
			printf("Element is prsent in array. \n");
        	else
			printf("Element is not prsent in array. \n");
  	}
	int search(int a[],int b,int h)
	{
    	int i,m,l;
			l=0;
			while ( l <= h )
			{
				m = (l+h)/2;
				if( m == b )
				  return 1;
				else if( b > m )
				  l = m+1;
				else if( b < m )
				  h = m-1;
			}
		return 0;
	}
