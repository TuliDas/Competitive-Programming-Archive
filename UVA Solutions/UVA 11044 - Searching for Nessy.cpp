// Problem Name	: UVA 11044 - Searching for Nessy
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1985
// Verdict	: Accepted
// Language	: C++11
// Solved on   	: 2016-03-04

#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    while(a--)
    {
        int n,m,i,j,c;
        scanf("%d %d",&n,&m);
        c=0;
        for(i=3; i<=n; i=i+3)
        {
            for(j=3; j<=m; j=j+3)
            {
                c++;
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
