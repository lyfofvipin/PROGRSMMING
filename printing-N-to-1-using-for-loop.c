#include<stdio.h>
void main()
{
    int i,N ;

    printf("Enter a number : ");
    scanf("%d",&N);

    for ( i = N ; i >= 1 ; i-- )  // or for( ; N >= 1 ; N--)
       printf( "  %d \n ",i );
}

// I hope now you will able to understend for loop in C.