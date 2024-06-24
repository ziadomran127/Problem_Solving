#include<iostream>
using namespace std ;
int main()
{
    int arr[100] ;
    int sum =0 ;
    int n ; 
    cin>>n ;
    for(int i=0 ; i<n-1 ; i++)
    cin>>arr[i] ;

  int a , b ;
  cin>>a>>b ;

  for(int i=a-1 ; i<b-1 ; i++ )
  {
    sum=sum+arr[i];
  }

  cout<<sum ;


    

}