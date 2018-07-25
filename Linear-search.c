    #include<stdio.h>
    int main()
    {
        int a[5], i, c , b = -1;

        int search (int [],int);

            printf("Enter your array :\n");
            for (i = 0; i < 5; i++)
            {
                printf("Enter a number :");
	            scanf("%d",&a[i]);
            }
	    printf("Enter a number u want to search :");
	    scanf("%d",&c);

	    b = search (a,c);

    	if( b == -1 )
		    printf("Element is not prsent in array.\n");
        else
    		printf("Element is prsent in array at %d.\n",b);
        return 0;
    }
    int search (int a[] , int b )
    {
        int i;

        for (i = 0; i < 5; i++)
    	{
		    if( b == a[i] )
        		return i;
    	}
    }
