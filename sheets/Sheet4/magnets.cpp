#include<iostream>
using namespace std ;
int main()
{
    int n ; 
    int cnt = 1 ;
    cin>>n ;
    int a[n] ;

    for(int i=0 ; i<n ; i++)
    {
        cin>>a[i] ;
    }

    for(int i=0 ; i<n-1 ; i++)
    {
        if(a[i] != a[i+1])
        cnt++ ;

    }
    cout<<cnt ;
}