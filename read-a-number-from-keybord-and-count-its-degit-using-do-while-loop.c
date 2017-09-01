#include<stdio.h>
void main()
{
    int Number,counter;

    printf(" Enter a number ");
    scanf("%d",&Number);

    counter = 0;

    do
     {
        counter++;
        Number = Number / 10;

     }while( Number != 0 );
     
     printf(" Number of degits are %d.",counter);
}