#include<stdio.h>
void main()
{
    int i,N,r;

    printf("Enter a number:");
    scanf("%d",&N);
    
    i = 1;
     
    do
    {
        r = i*i;
        printf("Square of %d is %d.\n",i,r); // or printf("Square of %d is %d.\n",i,i*i);
        i++;
    }while( i <= N );
}