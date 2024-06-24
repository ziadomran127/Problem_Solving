#include<iostream>
#include<cmath>
using namespace std ;
int main()
{
    int a[10][10] ;
   // int n = 5 ;
    for(int i=1 ; i<=5 ; i++)
    {
        for(int j=1 ; j<=5 ; j++)
        {
            cin>>a[i][j] ; 
        }
    }

    int r , c ;

     for(int i=1 ; i<=5 ; i++)
    {
        for(int j=1 ; j<=5 ; j++)
        {
            if(a[i][j]==1)
            {
                r = i ;
                c=j ;
                 break; 
            }
           
        }
    }

    int count = abs(r-3)+abs(c-3) ;
    cout<<count ;

    


}