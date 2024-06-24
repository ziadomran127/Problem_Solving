#include<stdio.h>
#include<stdlib.h>
int main()
{
    int k , x ;
    scanf("%d %d" , &k , &x) ;
    int n = k*500 ;
    if(n>=x)
    printf("Yes");
    else
    printf("No") ;
}