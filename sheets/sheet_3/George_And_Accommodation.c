#include<stdlib.h>
#include<stdio.h>
int main()
{
    int n ;
    int sum = 0;
    scanf("%d" , &n) ;
    for(int i=0 ; i<n ; i++)
    {
        int a ,  b ;
        scanf("%d %d" , &a , &b);
        if(b-a>=2)
        sum++ ;

    }
    printf("%d" , sum);
}