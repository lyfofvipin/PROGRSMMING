#include<stdio.h>
void main()
{
	int number;
	printf("Enter a Nummber : ");
	scanf("%d",&number);

	switch(number) // switching a number
		{
		case 1:
			printf("\n\n\n\n\n   SUNDAY     \n\n\n\n");
			break;
		case 2:
			printf("\n\n\n\n\n   MONDAY     \n\n\n\n");
			break;
		case 3:
			printf("\n\n\n\n\n   TUESDAY     \n\n\n\n");
			break;
		case 4:
			printf("\n\n\n\n\n   WEDNESDAY   \n\n\n\n");
			break;
		case 5:
			printf("\n\n\n\n\n   THURSDAY    \n\n\n\n");
			break;
		case 6:
			printf("\n\n\n\n\n   FRIEDAY    \n\n\n\n");
			break;
		case 7:
			printf("\n\n\n\n\n   SATURDAY   \n\n\n\n");
			break; // here break is compusury if we not use break
			       // then default will also run.
		default:
			printf("\n\n\n   Invalid Number  \n\n\n");
			                          // IF VALUE DOES NOT
						 // MATCH TO ANY CASE THEN DEFAULT
						 // WILL RUN.
		}
}
