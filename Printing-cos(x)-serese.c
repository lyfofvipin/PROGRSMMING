    // Printing cos(x) serese.
    // 1-(x^2/2!)+(x^4/4!)-(x^6/6!)+(x^6/6!)+(x^6/6!)-(x^8/8!)...
    #include<stdio.h>
    int main()
    {  
        int n,x;
        double result;

        double serese ( int ,int );
        int power ( int );
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
        int i,pow,fact,number;

        int power( int );
        int factorial( int );

        double res = 0.0;
        for ( i = 0 ; i <= n ; i++ )
        {
            number = 2*i ; // To bring odd number every time

            pow = power(number);

            fact = factorial(number);

            if ( i%2 != 0 )
                res = res + pow/(double)fact;
            else
                res = res - pow/(double)fact;
        }
        return res;
    }

    int power ( int x )
    {
        int i,pow = 1;

        for ( i = 1 ; i <= x ; i++ )
            pow = pow*x;

        return pow;
    }

    int factorial( int x)
    {
        int i,fact = 1;

        for  ( i = 1 ; i <= x ; i++ )
            fact = fact*i;

        return fact;
    }
