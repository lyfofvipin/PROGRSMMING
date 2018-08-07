#include<stdio.h>
#include<string.h>
int main()
{
    char A[] = "Vipin is my name";
    char B[20] = "Empty :)";

    void copy( char [] , char [] );
    printf("Values before changes : \n\n");
    puts(A);
    puts(B);

    copy(A,B);

    printf("\nValues after changes : \n\n");
    puts(A);
    puts(B);

    return 0;
}
void copy( char x[] , char y[])
{
    int i;

    for( i = 0 ; x[i] != 0 ; i++ )
    // Here 0 condiction repersent NULL
    {
        y[i] = x[i];
    }
    y[i] = 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
    char A[] = "Vipin is my name";
    int length_of_String;

    int length( char [] );
    
    length_of_String = length( A );

    printf("Length of A is : %d.\n",length_of_String);

    return 0;
}
int length( char x[] )
{
    int i;

    for( i = 0 ; x[i] != 0 ; i++ );
    // This ';' will show that we are not writting anything in for loop     
    return --i;
}



#include<stdio.h>
#include<string.h>
int main()
{
    char A[] = "Vipin is my name";
    int number_or_vowels;

    int count_vowel( char [] );
    
    number_or_vowels = count_vowel( A );

    printf("Numbers of vowels in A is : %d.\n",number_or_vowels);

    return 0;
}
int count_vowel( char x[] )
{
    int i;
    int count;

    for( i = 0, count = 0 ; x[i] != 0 ; i++ )
    // Here 0 condiction repersent NULL
    {
        if ( x[i] == 'a' || x[i] == 'e' || x[i] == 'i' || x[i] == 'o' || x[i] == 'u' )
            count++;
    }
    
    return count;
}



#include<stdio.h>
#include<string.h>
int main()
{
    char A[50] = "my name is ";
    char B[]   = " Kumar Vipin Yadav";
 
    void concate_string( char [] , char[] );
    
    printf("Value of A before calling our function : \n\n");
    puts( A );

    concate_string( A , B );

    printf("Value of A after calling our function : \n\n");
    puts( A );

    return 0;
}
void concate_string( char x[] ,char y[] )
{
    int i;
    int len;

    for( i = 0 ; x[i] != 0 ; i++ );

    len = --i;

    for ( i = 0 ; y[i] != 0 ; i++ )
        x[len+i] = y[i];

    x[len+i] = 0;
    // here we add NULL in last of array A
}


#include<stdio.h>
#include<string.h>
int main()
{
    char A[50] = "my name is Vipin";
    int words;
 
    int counting_words( char[] );
    
    words = counting_words( A );

    printf("Number of word in our String is %d.\n",words );

    return 0;
}
int counting_words( char y[] )
{
    int i;
    int count;

    for ( i = 0, count = 0 ; y[i] != 0 ; i++ )
    {
        if ( y[i] == ' ' )
            count++;
    }
    return ++count;
}


#include<stdio.h>
#include<string.h>
int main()
{
    char A[50] = "my name is Vipin";
 
    void print_alphabets_spaces_digites_symboles( char [] );
    
    print_alphabets_spaces_digites_symboles( A );

    return 0;
}
void print_alphabets_spaces_digites_symboles( char y[] )
{
    int i;
    int space,alphabets,digit,symoble;

    space = 0 , alphabets = 0 , digit = 0 , symoble = 0 ;

    for ( i = 0 ; y[i] != 0 ; i++ )
    {
        if ( y[i] == ' ' )
            space++;
        else if ( y[i] >= 'a' && y[i] <= 'z' || y[i] >= 'A' && y[i] <= 'Z' )
            alphabets++;
        else if ( y[i] >= '0' && y[i] <= '9' )
            digit++;
        
        else
            symoble++;
        
    }
    printf("Alphabets = %d, Digit = %d, Space = %d and Symbole = %d.",alphabets,digit,space,symoble);
}



#include<stdio.h>
#include<string.h>
int main()
{
    char A[50] = "My Name Is VIPIN";
 
    void lower( char [] );
    
    lower( A );

    puts( A );

    return 0;
}
void lower( char y[] )
{
    int i;

    for ( i = 0 ; y[i] != 0 ; i++ )
    {
        if ( y[i] >= 'a' && y[i] <= 'z' || y[i] == ' ')
            continue;
        else
            y[i] = y[i] + 32 ;
            // because ASCII value of upper case alphabets are 32 less then uppercase.
    }
}


#include<stdio.h>
#include<string.h>
int main()
{
    char A[50] = "My Name Is VIPIN";
 
    void upper( char [] );
    
    upper( A );

    puts( A );

    return 0;
}
void upper( char y[] )
{
    int i;

    for ( i = 0 ; y[i] != 0 ; i++ )
    {
        if ( y[i] >= 'A' && y[i] <= 'Z' || y[i] == ' ')
            continue;
        else
            y[i] = y[i] - 32 ;
            // because ASCII value of lower case alphabets are 32 greater then uppercase.
    }
}


#include<stdio.h>
#include<string.h>
int main()
{
    char A[] = "My Name Is VIPIN";
    char B[] = "My Name Is VIPIN";
    int res;
    int compare( char [] , char [] );
    
    res = compare( A , B );

    if ( res == 0 )
        printf("Both strings are equale.");
    else if ( res > 0 )
        printf("Strings A is greater.");
    else
        printf("Strings B is greater.");

    return 0;
}
int compare( char x[] , char y[])
{
    int i;

    for ( i = 0 ; x[i] != 0 || y[i] != 0 ; i++ )
    {
        if ( x[i] != y[i] )
            return x[i]-y[i];
    }
    return 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
    char A[] = "My Name Is VIPIN";
    char B[50];

    void revers_in_another( char [] , char [] );
    
    revers_in_another( A , B );

    puts(A);

    puts(B);

    return 0;
}
void revers_in_another( char x[] , char y[])
{
    int i,j;

    for ( i = 0 ; x[i] != 0 ; i++ );
     
    i -= 1; // because we are not taking NULL which was in last

    for ( j = 0 ; j <= i ; j++ )
        y[j] = x[i-j];

    y[j] = 0;

}


#include<stdio.h>
#include<string.h>
int main()
{
    char A[] = "My Name Is VIPIN";
    char B[50];

    void revers_in_itself( char [] );
    
    printf("A before calling function. \n\n");
    puts(A);

    revers_in_itself( A );

    printf("A after calling function. \n\n");
    puts(A);
 
    return 0;
}
void revers_in_itself( char x[])
{
    int i,j,temp;

    for ( i = 0 ; x[i] != 0 ; i++ );

    i -= 1;

    for( j = 0 ; j <= i ; j++, i-- )
    {
        temp = x[j];
        x[j] = x[i];
        x[i] = temp;
    }

}


#include<stdio.h>
#include<string.h>
int main()
{
    char A[] = "VIPIN";
    int res;

    int palandrome( char [] );

    res = palandrome( A );

    if ( res == 1 )
        printf("Yes String is palandrome.\n");
    else
        printf("No String is not palandrome.\n");
 
    return 0;
}
int palandrome( char x[])
{
    int i,j;

    for ( i = 0 ; x[i] != 0 ; i++ );

    i -= 1;

    for( j = 0 ; j <= i ; j++, i-- )
    {
        if ( x[i] != x[j] )
            return 0;
    }

    return 1;

}


#include<stdio.h>
#include<string.h>
int main()
{
    char A[] = "Mohan Das Karam Chand Gandhi";

    void abbrivation( char [] );

    abbrivation( A );
 
    return 0;
}
void abbrivation( char x[] )
{
    int i,j;

    i = 0 , j = 0 ;
    do
    {
        if ( x[i] == ' ' )
        {
            printf("%c. ", x[j]);

            j = i+1;
        }
        
        i++;

    }while( x[i] != 0 );
    for ( ; x[j] != 0 ; j++ )
        printf("%c",x[j]);
}



#include<stdio.h>
#include<string.h>
int main()
{
    char A[] = "My Name Is Vipin";

    void remove_vowels( char [] );

    printf("A before calling function\n");
    puts(A);

    remove_vowels( A );
 
    printf("\nA after calling function\n");
    puts(A);

    return 0;
}
void remove_vowels( char x[] )
{
    int i,j;

    for ( i = 0 ; x[i] != 0 ; i++ )
    {
        if( x[i] == 'a' || x[i] == 'e' || x[i] == 'i' || x[i] == 'o' || x[i] == 'u' )
        {
            for ( j = i ; x[j] != 0 ; j++ )
                x[j] = x[j+1];
            
            i--;
        }
    }
}
