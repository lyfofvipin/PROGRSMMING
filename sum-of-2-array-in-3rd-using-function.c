    #include<stdio.h>
    int main()
    {
        int a[] = {1,2,3,4,5};
        int b[] = {1,2,3,4,5};

    // Declaring function sum and telling it that we give 2 arrays as arguments
        void sum ( int [] , int []);

    // Calling sum function
        sum(a,b);
        return 0;
    }
    // Here we have defining our function
    void sum( int x[] , int y[] )
    {
        int i;

        for( i = 0 ; i < 5 ; i++ )
            printf("%d  ", x[i]+y[i] );
    }
