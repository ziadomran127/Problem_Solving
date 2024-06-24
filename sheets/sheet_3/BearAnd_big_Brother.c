#include<stdlib.h>
#include<stdio.h>
int main()
{
    int a , b ;
    scanf("%d %d" , &a ,&b);
    int sum=0;
    while (a<=b)
    {
        a=a*3 ;
        b=b*2 ;
        sum++;
    }
    
    printf("%d" , sum) ;
}