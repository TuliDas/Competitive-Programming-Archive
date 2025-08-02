/*
Problem Name	: UVA 12149 - Feynman
Problem Link    : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=3301
Language	: C++
Solved on   	: 2016-03-04
*/

#include<stdio.h>

int main()
{
    while(true)
    {
        int n,c,i,j,k;
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        c=0;
        for(i=1; i<=n; i++)
        {
            for(j=i; j<=n; j++)
            {
                for(k=i; k<=n; k++)
                {
                    c++;
                }
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
