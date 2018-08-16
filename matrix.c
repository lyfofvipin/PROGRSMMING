#include<stdio.h>
int main()
{
    int a[3][3];
    int b[3][3];
    int c[3][3];

    void input( int [][3] );

    void output( int [][3] );

    void sum( int [][3] , int [][3] , int [][3] );

    void subtruction( int [][3] , int [][3] ,int [][3] );

    void multiply( int [][3] , int [][3], int [][3] );

    printf("Taking input in first Array : \n");
    input(a);

    printf("Value in a : \n");
    output(a);

    printf("Taking input in first Array : \n");
    input(b);

    printf("\nValue in b : \n");
    output(b);

    printf("Adding a and b :\n");
    printf("\nvalue of sum of a and b:\n");
    sum(a,b,c);
    output(c);

    printf("Substracting a and b :\n");
    printf("\nvalue of substraction of a and b:\n");
    subtruction(a,b,c);
    output(c);

    printf("multipliying a and b :\n");
    printf("value of multiplecation of a and b :\n");
    multiply(a,b,c);
    output(c);
}

void input( int a[][3] )
{
    int i ,j;

    for( i = 0 ; i < 3 ; i++ )
    {
        for( j = 0 ; j < 3 ; j++ )
        {
            printf("Enter [%d][%d] element of array : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
}

void output( int a[][3] )
{
    int i,j;
    for( i = 0 ; i < 3 ; i++ )
    {
        for( j = 0 ; j < 3 ; j++ )
        {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
}

void sum( int x[][3] , int y[][3], int z[][3] )
{
    int i,j;

    for( i = 0 ; i < 3 ; i++ )
    {
        for( j = 0 ; j < 3 ; j++ )
        {
            z[i][j] =  x[i][j] + y[i][j];       
        }
    }
}

void subtruction( int x[][3] , int y[][3], int z[][3] )
{
    int i,j;

    for( i = 0 ; i < 3 ; i++ )
    {
        for( j = 0 ; j < 3 ; j++ )
        {
            z[i][j] =  x[i][j] - y[i][j];       
        }
    }
}

void multiply( int x[][3] , int y[][3], int z[][3] )
{
    int i,j,k;

    for( i = 0 ; i < 3 ; i++ )
    {
        for( j = 0 ; j < 3 ; j++ )
        {
            z[i][j] = 0 ;
            for( k = 0 ; k < 3 ; k++ )
                z[i][j] = z[i][j] + ( x[i][k] * y[k][j] );
        }
    }
}
