#include<stdlib.h>
#include<stdio.h>
int main()
{
    int n ;
    int k ;
    scanf("%d %d" , &n , &k) ;

    for(int i=0 ; i<k ; i++)
    {
        if(n%10 !=0)
        n--;
        else if(n%10 == 0)
        {
            n=n/10;
        }
        
    }
    printf("%d" , n) ;
}