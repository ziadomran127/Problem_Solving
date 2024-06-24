#include<iostream>
using namespace std;
int main ()
{
    int arr[100] ;
    int sum=0 ;
    int n , k ;
    cin>>n>>k;

    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i] ;
    }

    for(int i =0 ; i<n ; i++)
    {
        if(arr[i]>0)
        {
            if (arr[k-1] <= arr[i])
        sum++;
        }
        
    }

    cout<<sum ;

}