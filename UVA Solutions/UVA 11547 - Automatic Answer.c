/*
Problem Name	: UVA 11547 - Automatic Answer
Problem Link    : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2542
Language	    : C
Solved on   	: 2016-02-28
*/

#include<stdio.h>

int main()

{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int n;
        int ans,r;

        scanf("%d",&n);
        ans=(n*567)/9 + 7492;
        ans= (ans* 235)/47 - 498;

        if(ans<0)
        {
            ans= ans* (-1);
        }

        if(ans<100)
        {
            r=ans/10;
        }

        else if(ans>=100)
        {
            ans=ans/10;
            r=ans%10;
        }

        printf("%d\n",r);
    }
    return 0;
}

