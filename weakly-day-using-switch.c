#include<stdio.h>
void main()
{
	int number;
	printf("Enter a Nummber : ");
	scanf("%d",&number);

  switch(number)
	{
		case 1:
		             printf("\n\n\n\n\n   SUNDAY     \n\n\n\n");

		case 2:
			     printf("\n\n\n\n\n   MONDAY     \n\n\n\n");

		case 3:
			     printf("\n\n\n\n\n   TUESDAY     \n\n\n\n");

		case 4:
 			     printf("\n\n\n\n\n   WEDNESDAY   \n\n\n\n");

		case 5:
			     printf("\n\n\n\n\n   THURSDAY    \n\n\n\n");

		case 6:
			     printf("\n\n\n\n\n   FRIEDAY    \n\n\n\n");

		case 7:
			     printf("\n\n\n\n\n   SATURDAY   \n\n\n\n");

	        default:
			printf("\n\n\n   Invalid Number  \n\n\n");
	}
}
