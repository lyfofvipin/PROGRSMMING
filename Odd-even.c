#include<stdio.h>
void main()
{
	int number;
	printf("Enter Your Number :");
	scanf("%d",&number);

	number%2==0 ? printf("Enterd number is EVEN") : printf("Enterd number is ODD");
}
