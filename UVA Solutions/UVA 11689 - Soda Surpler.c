/*
Problem Name	: UVA 11689 - Soda Surpler
Problem Link    : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=27362
Language	    : C
Solved on   	: 2016-02-29
*/

#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int a,b,c,j,m;
        scanf("%d %d %d",&a,&b,&c);
        j=0;
        m=a+b;

        while(m>=c)
        {
            j++;
            m=m-c+1;
        }
        printf("%d\n",j);
    }
    return 0;
}
