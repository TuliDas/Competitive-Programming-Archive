/*
DP
Problem Name : LOJ-1231-Coin Change (I)
Problem Link : https://lightoj.com/problem/coin-change-i
Language     : C++ 11
Verdict      : ACCEPTED
Solved On    : 2018-05-26
*/


#include<bits/stdc++.h>
using namespace std;
#define LL long long int
#define mod 100000007
LL n,coin[55],taken[55],make;
LL dp[55][1005];

LL call(LL i,LL amount)
{
    if(i>=n)
    {
        if(amount==make)return 1;
        return 0;
    }

    if(dp[i][amount]!=-1) return dp[i][amount];

    LL ret1=0;

    for(LL j=1; j <= taken[i]; j++)
    {
        if(amount + (coin[i] * j) <=make)
            ret1+=call(i+1, (amount+coin[i]*j))%mod;
        else break;
    }
    ret1 += call(i+1,amount)%mod;

    return dp[i][amount]= ret1%mod;
}


int main()
{
    int tc;
    cin>>tc;


    for(int cs=1; cs<=tc; cs++)
    {
        memset(dp,-1,sizeof(dp));
        cin>>n>>make;

        for(int i=0; i<n; i++)
            cin>>coin[i];

        for(int i=0; i<n; i++)
            cin>>taken[i];

        cout<<"Case "<<cs<<": "<<call(0,0)%mod<<endl;
    }

}
