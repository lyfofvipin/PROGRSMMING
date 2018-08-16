1.
#include<stdio.h>
int main()
{
    int A;
    int B;
    int C;
    int *p;
    int *q;
    int *r;

    A = 10;
    B = 20;
    
    p = &A;
    q = &B;
    r = &C;

    *r  = *p * *q ;

    printf("Multiply of A and B is %d.",*r);

    return 0;
}
2.

#include<stdio.h>
int main()
{
    float P ;
    float R ;
    float T ;
    float S;

    float *p;
    float *q;
    float *r;
    float *SI;


    p =  &P;
    q =  &R;
    r =  &T;
    SI = &S;

    printf("Enter Principle : ");
    scanf("%f",p);   // Because <code>p</code> has address of <code>P</code>,
                    // So we can write <code>p</code> insted of <code>&P</code>.

    printf("Enter Rate : ");
    scanf("%f",q);

    printf("Enter Time : ");
    scanf("%f",r);


    *SI = (*p * *q * *r)/100; // or *SI = (*p**q**r)/100;

    printf("Simple Intrest is %.2f%%.",*SI);

    return 0;
}
3.
#include<stdio.h>
int main()
{
    int x = 90;
    int y = 67;
    int sum;

    void sum_of_2_number( int * , int * , int * );
    // In above statement we are talling that we give Address of variable as argument,
    // And receve them in pointers.

    sum_of_2_number( &x, &y, &sum );
    // Giving Address of variables.
    
    printf("Sum of x and y is %d.",sum);

    return 0;
}

void sum_of_2_number( int *a , int *b , int *c )
// Here we are reseving addresses in a, b and c.
{
    *c = *a + *b;
}
4.
#include<stdio.h>
int main()
{
    int x = 90;
    int y = 67;
    
    void swap( int * , int * );
    
    printf("Values of x and y before calling function : \nx = %d y = %d \n",x,y);
    
    swap( &x, &y );
    
    printf("Values of x and y after calling function : \nx = %d y = %d \n",x,y);

    return 0;
}

void swap( int *a , int *b )
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
5.
#include<stdio.h>
int main()
{
    float r;
    float area;

    void Area_of_circle( float * , float * );
    
    printf("Enter Radius of Circle : ");
    scanf("%f",&r);

    Area_of_circle( &r, &area );

    printf("Area of circle is %.3f.",area);

    return 0;
}

void Area_of_circle( float *a , float *b )
{
    *b = 3.14* *a * *a;
}
6.

#include<stdio.h>
int main()
{
    int a[5] = {23,54,56,67,78};

    int *p , i;

    p = a; // or p = &a[0];

    for ( i = 0 ; i < 5 ; i++ )
        printf("%d\n",*(p+i));

    return 0;
}
7.
#include<stdio.h>
int main()
{
    int a[5] = {23,54,56,67,78};

    int i;

    for ( i = 0 ; i < 5 ; i++ )
        printf("%d\n",*(a+i));

    return 0;
}
8.
#include<stdio.h>
int main()
{
    int a[5] = {23,54,56,67,78};

    int i , *p;

    for ( p = a ; p < a+5 ; p++ )
        printf("%d\n",*p);

    return 0;
}
9.
#include<stdio.h>
int main()
{
    int a[5] = {23,54,56,67,78};

    int *p , i;

    for ( i = 4, p = a ; i >= 0 ; i-- )
        printf("%d\n",*(p+i));

    return 0;
}
