#include<stdio.h>
#include<stdlib.h>
int main()
{
    int c ; 
    for(int i=1 ; i<=26 ; i++)
    {
        scanf("%d" , &c);
        char result = 'a'+c-1 ;
        printf("%c" , result) ;
    }
}