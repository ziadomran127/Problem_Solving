#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n ;
    int lvl =0;
    scanf("%d" , &n) ;
    for(int i= 1 ;  ; i++)
    { 
        int  cubes_for_nxt_lvl =i*(i+1)/2 ;
        if(n >=  cubes_for_nxt_lvl)
        {
       n-=cubes_for_nxt_lvl ;
        lvl++;
        }
       else
        break;



    }
    printf("%d" , lvl) ;
}