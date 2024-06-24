#include<stdio.h>
#include<stdlib.h>
int main()
{
    int c1=0 , c2=0 , c3=0  , c4=0 ;
    int s ;

    int n ;
    scanf("%d" , &n) ;

    for(int i=0 ; i<n ; i++)
    {

        scanf("%d" , &s);

        if(s==1)
        {
        c1++;
        }

        else if (s==2)
        {
            c2++ ;
        }

        else if (s==3)
        {
            c3++;
        }

        else 
        {
            c4++;
        }
        
        
    }
    int ans = 0;
    ans+=c4; 
    c4=0;     

    if(c3>c1)
    {
     ans+=c3 ; 
    c3=0 ; c1=0 ;
    }
    else
    {
        ans+=c3 ; 
        c1-=c3 ;
        c3=0 ;
    }
    ans += ((c2*2)+c1)/4 ;
    if(((c2*2)+c1)%4 !=0)
    ans++;

    printf("%d" , ans) ;   
}