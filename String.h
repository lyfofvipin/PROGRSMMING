void copy( char x[] , char y[])
{
    int i;

    for( i = 0 ; x[i] != 0 ; i++ )
    {
        y[i] = x[i];
    }
    y[i] = 0;
}
int length( char x[] )
{
    int i;

    for( i = 0 ; x[i] != 0 ; i++ );
    // This ';' will show that we are not writting anything in for loop     

    return --i;
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
void revers_in_another( char x[] , char y[])
{
    int i,j;

    for ( i = 0 ; x[i] != 0 ; i++ );
     
    i -= 1; // because we are not taking NULL which was in last

    for ( j = 0 ; j <= i ; j++ )
        y[j] = x[i-j];

    y[j] = 0;

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
