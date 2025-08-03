/*
Problem Name : CDF-609B-The Best Gift
Problem Link : https://codeforces.com/problemset/problem/609/B
Vjudge.net   : https://vjudge.net/problem/CodeForces-609B
Language     : C++
Verdict      : ACCEPTED
Solved On    : 2016-10-13
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,ara[11];
    while(scanf("%d %d",&n,&m)==2)
    {
        memset(ara,0,sizeof(ara));
        int num;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&num);
            ara[num]++;
        }


        int sum=0;
        for(int i=1;i<=m;i++)
        {
            for(int j=i+1;j<=m;j++)
            {
                sum+=ara[i]*ara[j];
            }
        }
        printf("%d\n",sum);

    }
}
