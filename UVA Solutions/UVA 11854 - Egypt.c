/*
Problem Name	: UVA 11854 - Egypt
Problem Link    : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2954
Language	    : C
Solved on   	: 2016-02-27
*/


#include<stdio.h>

int main()

{
    int n;
    while(n=1)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(a==0 && b==0 && c==0)
        {
            break;
        }

        if((a*a + b*b ==c*c) || (b*b+c*c==a*a) || (c*c+a*a==b*b))
        {
            printf("right\n");
        }
        else
        {
            printf("wrong\n");
        }
    }
    return 0;
}
