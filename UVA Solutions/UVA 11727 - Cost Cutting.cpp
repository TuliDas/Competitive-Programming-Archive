/*
Problem Name	: UVA 11727 - Cost Cutting
Problem Link    : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2827
Language	: C++
Solved on   	: 2016-02-07
*/

#include<stdio.h>
#include<algorithm>
using namespace std;



int main()
{
    int ara[3];
    int sz=3;
    int i,n,j;

    scanf("%d",&n);

    for(j=0; j<n; j++)
    {
        for(int i=0; i<sz; i++)
        {
            scanf("%d",&ara[i]);
        }

        sort(&ara[0],&ara[sz]);

        printf("Case %d: %d\n",j+1,ara[1]);
    }

    return 0;
}

