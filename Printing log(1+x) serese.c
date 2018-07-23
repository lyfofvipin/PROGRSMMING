//Printing e^x serese.
  // 1+x+(x^2/2!)+(x^3/3!)+(x^4/4!)+(x^5/5!)+(x^6/6!)+(x^7/7!)...
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
        int i,pow;

        int power( int ,int );

        double res = 0.0;
        for ( i = 1 ; i <= n ; i++ )
        {
            pow = power(x,i);
            res = res + pow/(double)i;
        }
        return res;
    }

    int power ( int x , int n)
    {
        int i,pow = 1;

        for ( i = 1 ; i <= n ; i++ )
            pow = pow*x;

        return pow;
    }
