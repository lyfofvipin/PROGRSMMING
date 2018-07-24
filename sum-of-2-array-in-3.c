#include<stdio.h>
int main()
{
  float a[5],b[5],c[5];
  int i;
  printf("Enter first Array :\n");
   for (i = 0; i < 5; i++)
     {
        printf("Enter a float number :");
	    scanf("%f",&a[i]);
     }
    
  printf("\nEnter second Array :\n");
   for (i = 0; i < 5; i++)
     {
        printf("Enter a float number :");
	    scanf("%f",&b[i]);
     }
   //Adding of both Array
    for (i = 0; i < 5; i++)
     {
       c[i] = a[i]+b[i];
     }
    printf("Sum of both array is :\n");
    for (i = 0; i < 5; i++)
     {
       printf("%.2f\t",c[i]);
     }     
}
