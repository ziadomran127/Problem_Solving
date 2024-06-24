#include<stdio.h>
#include<stdlib.h>
int main()
{

    int n  ;
    scanf("%d" , &n) ;
    int first = n%10;     
    n = n / 10 ;           
    
    int last = n/10 ;

    if(first == last)
    printf("Yes") ;
    else
    printf("No") ;
}