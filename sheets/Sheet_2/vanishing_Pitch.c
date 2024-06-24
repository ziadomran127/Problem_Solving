#include<stdio.h>
#include<stdlib.h>
int main()
{
    int v , t , s ,d ;
    scanf("%d %d %d %d" , &v , &t , &s , &d);
    int tb = d/v ;
    //printf("%d" , tb);
    if(tb<t || tb>s)
    printf("Yes") ;
    else 
    printf("No") ;
}