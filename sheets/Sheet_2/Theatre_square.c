#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n  ;
    int m  ;
    int a  ;
    scanf("%d %d %d" , &n , &m , &a);
int result = ceil(1.0*n/a);
int result2 = ceil(1.0*m/a) ;
printf("%d" , result*result2) ;

}


