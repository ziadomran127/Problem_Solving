#include<stdio.h>
int main()
{
    int a,b,c ;
    scanf("%d %d %d" , &a , &b , &c);
    if(a>b)
    printf("Takahashi") ;
    else if(b>a)
    printf("Aoki");
    else 
    {
        if(c==1)
        printf("Takahashi");
        else if (c==0)
        printf("Aoki") ;
    }
}