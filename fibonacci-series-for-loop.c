#include<stdio.h>
void main()
{
	int  number1 , number2 , number3 , number4;

	printf( " Enter your number : \n ");

	scanf( "%d" , &number1 );

	for( number2=0 , number3=1 , number4=0  ;  number1 >= 1 ;  number1-- )
		{
               printf("%d\n",number2);
		               number4=number2+number3;
                       number2=number3;
		               number3=number4;
		}
}
