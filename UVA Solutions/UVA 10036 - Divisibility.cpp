/*
DP - Recursive
Problem Name	: UVA 10036 - Divisibility
Problem Link    : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=977
Vjudge.net  	: https://vjudge.net/problem/UVA-10036
Verdict	        : Accepted
Language	    : C++11
Solved on   	: 2018-05-27
*/

#include<bits/stdc++.h>
using namespace std;
#define LL long long int
LL n,ara[10005],k,dp[10005][105];

LL divisibility(LL cur,LL remainder)
{
    remainder = remainder%k;

    if(cur==n)
    {
        if(remainder%k==0) return 1;
        else return 0;
    }

    LL &ret = dp[cur][remainder];
    if(ret!=-1) return ret;

    ret=0;
    ret = ret | divisibility(cur+1, remainder+ara[cur+1]);
    ret = ret | divisibility(cur+1, remainder-ara[cur+1]);

    return ret;
}

int main()
{
    LL tc,ans;
    scanf("%lld",&tc);
    while(tc--)
    {
        memset(dp,-1,sizeof(dp));
        scanf("%lld %lld",&n,&k);
        for(int i=1;i<=n;i++)
        scanf("%lld",&ara[i]);
        ans= divisibility(1,ara[1]);
        if(ans)
            printf("Divisible\n");
        else printf("Not divisible\n");

    }
}
