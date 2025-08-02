/*
Problem Name	: UVA 11805 - Bafana Bafana
Problem Link    : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2905
Language	    : C
Solved on   	: 2016-02-28
*/

#include<stdio.h>

int main()

{
    int n,j;
    j=1;
    scanf("%d",&n);
    while(n--)
    {
        int i,N,K,P;
        scanf("%d %d %d",&N,&K,&P);

        for(i=0; i<P; i++)
        {
            if(K<N)
            {
                K++;
            }

            else if(K>=N)
            {
                K=1;
            }
        }
        printf("Case %d: %d\n",j,K);
        j++;
    }
    return 0;
}
