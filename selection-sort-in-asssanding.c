#include<stdio.h>
int main()
{
  int A[5] = {5,2,1,4,3};
  int i;

  void Short( int [] );

  Short(A);

  for( i = 0 ; i < 5 ; i++ )
      printf("%d  ",A[i]);

  return 0;
}

void Short( int a[] )
{
  int i,j,pos,min,temp;

  for( j = 0 ; j < 4 ; j++)
  {
		pos = j;

    for( i = j ; i < 5 ; i++ )
      {
        if ( a[pos] > a[i] )
          pos = i;
      }
			temp = a[j];
      a[j] = a[pos];
      a[pos] = temp;
  }
}
