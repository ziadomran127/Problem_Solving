#include<stdlib.h>
#include<stdio.h>
int main()
{
    int a , b ;
    scanf("%d %d" , &a , &b) ;
    int mul = a*b ;
    int sub = a-b ;
    int add = a+b ;
    if (mul > add && mul>sub)
    {
        printf("%d" , mul) ;
    }
    else if(add>mul && add>sub)
    printf("%d" , add) ;
    else
    printf("%d" , sub) ;
    
}