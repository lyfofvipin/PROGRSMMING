#include<stdio.h>
int main()
{
  int a[5],b[5],i;
  char x;

    printf("select a opperaction form +,-,* and / :- ");
        scanf("%c",&x);

	printf("Enter first array :\n");
    for (i = 0; i < 5; i++)
     {
       printf("Enter a number : ");
	     scanf("%d",&a[i]);
     }
	printf("\nEnter secand array :\n");
	for (i = 0; i < 5; i++)
     {
       printf("Enter a number : ");
	     scanf("%d",&b[i]);
     }

	switch(x)
		{
		case '+':
		{
			for (i = 0; i < 5; i++)
                printf("%d \n",a[i]+b[i]);
			break;
		}
		case '-':
		{
			for (i = 0; i < 5; i++)
                printf("%d \n",a[i]-b[i]);
			break;
		}
		case '*':
			{
			for (i = 0; i < 5; i++)
                printf("%d \n",a[i]*b[i]);

			break;
		}
		case '/' :
			{
			for (i = 0; i < 5; i++)
                printf("%.2f \n",(float)a[i]/b[i]);
			break;
		}
		default:
			printf("invalid slection \n");
		}
    return 0;
}