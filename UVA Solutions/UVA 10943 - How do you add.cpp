/*
Combinatorics
Problem Name	: UVA 10943 - How do you add?
Problem Link    : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1884
Vjudge.net  	: https://vjudge.net/problem/UVA-10943
Verdict	        : Accepted
Language	    : C++11
Solved on   	: 2018-05-27
*/

#include<bits/stdc++.h>
using namespace std;
#define LL long long int
#define mod 1000000

LL dp[205][105];

LL nCr(LL n,LL r)
{
    if(n==r) return 1;
    if(r==0) return 1;
    if(r==1) return n;

    if(dp[n][r]!=-1) return dp[n][r];

    dp[n][r] = (nCr(n-1,r)%mod + nCr(n-1,r-1)%mod)%mod;
    return dp[n][r]%mod;

}

int main()
{
    LL N,K;
    while(scanf("%lld %lld",&N,&K)==2)
    {
        if(N==0 && K==0) break;
        memset(dp,-1,sizeof(dp));
        cout<<nCr(N+K-1,K-1)%mod<<endl;
    }
}
