// Printing x+(x/2)+(x/3)+(x/4)+(x/5)...(x/n) serese.
#include<stdio.h>
int main()
{  
    int n,x;
    double result;

    double serese ( int ,int );

    printf("Enter value of x : ");
    scanf("%d",&x);

    printf("Enter value of n : ");
    scanf("%d",&n);

    result = serese(x,n);
    printf("Resilt is  : %.3lf",result);
    return 0;
}
double serese ( int x, int n )
{
    int i;
    double res = 0.0;
    for ( i = 1 ; i <= n ; i++ )
        res = res + x/(double)i;
    return res;
}
