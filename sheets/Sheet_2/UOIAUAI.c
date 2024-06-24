#include<stdio.h>
#include<stdlib.h>
int main()
{
    char c ;
    scanf("%c" , &c) ;
    if ( c == 'a' || c=='e'  || c=='i' || c=='o'  || c=='u')
    printf("vowel");
    else
    printf("consonant");
}