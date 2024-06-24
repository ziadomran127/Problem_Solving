#include<iostream>
using namespace std ;
int main()
{
    int t ;
   cin>>t;
    while(t>0)
   {

        int n , k ; 
    cin>>n>>k ;
    int a[30] , b[30] ;

    for(int i=0 ; i<n ;i++)
    {
        cin>>a[i] ;
    }

    for(int i=0 ; i<n ; i++)
    {
        cin>>b[i] ;
    }

    while(true)
    {
        int max = 0 ; int min = 31 ; int minindex ; int maxindex ;

    for(int i=0 ; i<n ; i++)
    {
        if(min>a[i])
        {
            min=a[i] ;
            minindex = i ;
        }
    } 

    for(int i=0 ; i<n ; i++)
     {
            if(max<b[i])
            {
                max = b[i] ;
                maxindex=i ;
            }
        } 

        if(k>0 && max>min)
        {
            a[minindex] = max ;
            b[maxindex] = min ;
            k--;
        }
        else
        break;
    }

    

      int sum=0 ;

      for(int i=0 ; i <n ; i++)
      {
        sum+=a[i] ;
      }
    
cout<< sum << '\n';
t-- ;

    }


}