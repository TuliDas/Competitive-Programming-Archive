/*
Problem Name	: UVA 11764 - Jumping Mario
Problem Link    : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2864
Language	: C++
Solved on   	: 2016-02-28
*/

#include<stdio.h>

int main()

{
    int n,i;
    scanf("%d",&n);
    i=1;
    while(n--)
    {
        int ara[50];
        int j,N,high,low;
        scanf("%d",&N);
        for(j=0; j<N; j++)
        {
            scanf("%d",&ara[j]);
        }
        high=0;
        low=0;

        for(j=0; j<N-1; j++)
        {
            if(ara[j]<ara[j+1])
            {
                high++;
            }
            if(ara[j]>ara[j+1])
            {
                low++;
            }
        }

        printf("Case %d: %d %d\n",i,high,low);
        i++;
    }
    return 0;
}
