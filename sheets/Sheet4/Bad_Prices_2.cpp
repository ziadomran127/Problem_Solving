#include<iostream>
using namespace std ;  
int a[150000] ;
int main()
{
    int t; 
    cin>>t;
    while(t>0)
    {
       
   
    int n ; 
    cin>>n ;

    for(int i=0 ; i<n ; i++)
    {
        cin>>a[i] ;
    }
    int cnt=0 ;
    int best_Price = 10000000;

    for(int i=n-1 ; i>=0 ; i--)
    {
        if(a[i]>best_Price)
        cnt++ ;

        else if(best_Price > a[i])
        best_Price = a[i] ;
    }
    cout<<cnt++<<'\n';

    t--;
    }


   

} 