#include<stdio.h>
#include<stdlib.h>
#define const 20
int i;
int main()
{
    int A[const] = {0};
    int p;
    p = -1;
//  Insert functions
    void append_last( int , int [] , int *);
    void append_beg( int , int [] , int *);
    void insert( int , int , int [] , int *);
//  Delete function
    void delete_last( int [] , int *);
    void delete_beg( int [] , int *);
    void delete( int , int [] , int *);

    void is_Array_full( int );
    void output(int [], int);
    void is_Array_empety( int );

    append_last(1,A,&p);
    append_last(2,A,&p);
    append_last(4,A,&p);
    append_last(6,A,&p);
    append_beg (0,A,&p);
    insert(3,3,A,&p);
    insert(5,5,A,&p);
    insert(7,7,A,&p);
    insert(8,8,A,&p);
    insert(9,9,A,&p);
    output(A,p);

    delete_last( A , &p );
    delete_beg ( A , &p );
    delete ( 2 , A , &p );
    output(A,p);

    return 0;
}

void is_Array_empety( int p )
{
    if ( p == -1 )
    {
        printf("Array is empety");
        exit(1);
    }
}   

void is_Array_full( int p )
{
   if  ( p == const-1 )
   {
       printf("Array is not Empety.");
       exit(1);
   }
}
void output(int A[], int p )
{
    for ( i = 0 ; i < p ; i++ )
        printf("%d  ",A[i]);
    printf("\n");
}


void append_last( int element , int A[], int *p)
{
   is_Array_full( *p );
   *p = *p+1 ;
   A[*p] = element;
}

void append_beg( int element , int A[] , int *p)
{
    is_Array_full( *p );
    *p = *p + 1;
    for( i = *p ; i > 0 ; i--)
        A[i] = A[i-1];
    A[0] = element;
}

void insert( int element , int pos , int A[] , int*p )
{
    is_Array_full( *p );
    if ( index > *p || index < 0 )
        {
            printf("Index not found that's why terminating program.");
            exit(1);
        }
    *p = *p + 1;
    for( i = *p ; i > pos ; i-- )
        A[i] = A[i-1];
    A[i] = element;
}

void delete_last( int A[] , int *p )
{
    is_Array_empety( *p );
    A[*p] = 0;
    *p = *p - 1;
}

void delete_beg( int A[] , int *p )
{
    is_Array_empety( *p );
    *p = *p - 1;
    for ( i = 0 ; i < *p ; i++ )
        A[i] = A[i+1];
}

void delete( int index , int A[] , int *p )
{
    is_Array_empety( *p );
    if ( index > *p || index < 0 )
        {
            printf("Index not found that's why terminating program.");
            exit(1);
        }
    for ( i = index ; i < *p ; i++ )
        A[i] = A[i+1];
    *p = *p - 1;
}
