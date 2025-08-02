// Problem Name : UVA 11799 - Horror Dash
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2899
// Vjudge.net  	: https://vjudge.net/problem/UVA-11799
// Verdict      : Accepted
// Language     : C++
// Solved on    : 2016-02-28

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    int n,i;
    i=1;
    cin>>n;

    while(n--)
    {
        int N,j,m,k;
        int ara[100];
        cin>>N;
        for(j=0; j<N; j++)
        {
            cin>>ara[j];
        }

        m=ara[0];

        for(k=0; k<N; k++)
        {
            if(ara[k]>=m)
            {
                m=ara[k];
            }
        }

        printf("Case %d: %d\n",i,m);
        i++;
    }
    return 0;
}
