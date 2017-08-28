#include<stdio.h>
void main()
{
	char alfa;

	printf("Enter an Alphabet : ");
	scanf("%c",&alfa);

	switch( alfa ) //switching a chracter
        {

	        case 'a' :
		case 'e' :
		case 'i' :
		case 'o' :
		case 'u' :
		           printf("Yes Enterd Alphabet is a vowel");
		           break;
		default :
		          printf("No Enterd Alphabet is Not vowel");
        }
} 
