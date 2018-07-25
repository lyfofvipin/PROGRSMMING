    #include<stdio.h>
    int main()
    {
        int a[] = {1,2,3,4,5};
        int b[5],i;

    // Declaring function copy and telling it that we give 2 arrays as arguments
        void copy ( int [] , int []);

    // Calling copy function
        copy(a,b);
      for( i = 0 ; i < 5 ; i++ )
          printf("%d  ",b[i] );

        return 0;
    }
    // Here we have defining our function
    void copy( int x[] , int y[] )
    {
        int i;

        for( i = 0 ; i < 5 ; i++ )
            y[i] = x[i];
    }
