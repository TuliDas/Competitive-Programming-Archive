/*
DP - Iterative
Problem Name : LOJ-1232-Coin Change (II)
Problem Link : https://lightoj.com/problem/coin-change-ii
Language     : C++ 11
Verdict      : ACCEPTED
Solved On    : 2018-05-27
*/

#include<bits/stdc++.h>
using namespace std;
#define LL long long int
#define mod 100000007
LL n,coin[105],k,dp[10005];



int main()
{
    LL tc;
    scanf("%lld",&tc);

    for(LL cs=1;cs<=tc;cs++)
    {
        memset(dp,0,sizeof(dp));
        scanf("%lld %lld",&n,&k);
        for(LL i=1;i<=n;i++)
            scanf("%lld",&coin[i]);

        dp[0]=1;
        for(LL i=1;i<=n;i++)
        {
            for(LL j=coin[i];j<=k;j++)
            {
                dp[j]+= dp[j-coin[i]];
                dp[j]%=mod;
            }
        }
        cout<<"Case "<<cs<<": "<<dp[k]<<endl;
    }
}
