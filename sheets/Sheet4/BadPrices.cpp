#include<iostream>
using namespace std ;
int main()
{
    int n ;
    int sum =0 ;
    int a[100] ;
    cin>>n ;
    
    for(int i=0 ; i<n ; i++)
    {
        cin>>a[i] ;
    }

    for(int i=0 ; i<n ;i++)
    {
        for(int j=i+1 ; j<n ; j++)
        {
            if( a[i] > a[j])
            {
                sum++ ;
               break;
            }

        }
    }
    cout<<sum ;
}