#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n ;
    int n1 ; 
    scanf("%d" , &n) ;
    n1 = n/100 ;            // n1 = 0
    int rem = n%100 ;       //rem = 43

   int n2 = rem/20 ;       // n2 = 2 
   rem = rem %20 ;        //rem = 3 

   int n3 = rem/10 ;      //n3 = 0
   rem = rem%10 ;       //rem = 3

   int n4 = rem /5 ;    //n4 = 0
   rem = rem%5 ;      //rem = 3

   int n5 = rem/1 ;  // n5=3 
   rem = rem%1 ;     //rem =0

   printf("%d" , n1+n2+n3+n4+n5);


}