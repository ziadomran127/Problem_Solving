#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a , b ;
    scanf("%d %d" , &a , &b );
    if(a>0 && b==0)
    printf("Gold") ;
    else if(b>0 && a==0)
    printf("Silver") ;
    else
    printf("Alloy") ;

}