#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n ;
    scanf("%d" , &n);
    int sum = 0 ;

    for(int i=0 ; i<n ; i++)
    {
        int a , b , c ;
        scanf("%d %d %d" , &a , &b , &c);
        if( (a==1 && b==1) || (a==1 && c==1) || (b==1 && c==1) )
        sum++ ;
    }
    printf("%d" , sum);
}