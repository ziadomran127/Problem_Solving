#include<stdlib.h>
#include<stdio.h>
int main()
{
    int n , k ;
    int r ;
    scanf("%d %d" , &n , &k) ;
    if(n%2==0)
    {
        if(k<=(n/2))
        r = 2*k-1 ;
        else if (k>(n/2))
        {
            int e = k-(n/2) ;
            r = 2*e ;
        }
        
    
}
else
{
if (k<=(n/2+1))
r = 2*k-1 ;
else if (k>(n/2+1))
{
   int e = k-(n/2+1) ;
   r = 2*e ;
}


}
printf("%d" , r) ;
    }