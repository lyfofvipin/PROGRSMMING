#include<stdio.h>
void main()
{
    int i ;

    for ( i = 1 ; i <= 10 ; i++ )
       printf( " Now the value of i is %d .\n ",i );

    /*  OR
     i = 1 ;
     for( ; i <= 10 ; )
       {
           printf("Now the value of i is %d.\n ",i);
           i++;
       }
       */
}
/* Here i = 1 is initialization 
   and i <= 10 is condinitiona; part and 
   i++ is expression part.
   they run accroding to there flow as we explaine in last blog.
*/