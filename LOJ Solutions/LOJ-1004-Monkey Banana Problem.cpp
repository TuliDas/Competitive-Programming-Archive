/*
DP - Rock Climbing
Problem Name : LOJ-1004-Monkey Banana Problem
Problem Link : https://lightoj.com/problem/monkey-banana-problem
Language     : C++ 11
Verdict      : ACCEPTED
Solved On    : 2018-05-27
*/

#include<bits/stdc++.h>
using namespace std;
#define LL long long int
LL n,temp;
LL dp[200][105];
vector<LL> v[200];


LL call(LL r,LL c)
{
    if(c<0) return 0;
    if(v[r].size() <= c ) return 0;
    if(r==(2*n -1)) return v[r][0];


    if(dp[r][c]!=-1) return dp[r][c];

    LL ret=0;
    if(r<n)
    {
        ret = max(ret , v[r][c] + call(r+1,c));
        ret = max(ret , v[r][c] + call(r+1,c+1));
    }

    if(r>=n)
    {
       ret = max(ret , v[r][c] + call(r+1,c-1));
       ret = max(ret , v[r][c] + call(r+1,c));
    }

    return dp[r][c] = ret;
}


int main()
{
    LL tc;
    scanf("%lld",&tc);
    for(LL cs=1;cs<=tc;cs++)
    {
        for(LL i=1;i<=200;i++)
            v[i].clear();
        memset(dp,-1,sizeof(dp));

        LL temp;
        scanf("%lld",&n);
        for(LL i=1;i<=n;i++)
        {
            for(LL j=1;j<=i;j++)
            {
                scanf("%lld",&temp);
                v[i].push_back(temp);
            }
        }

        LL test=n+1;
        for(LL i=n-1;i>=1;i--)
        {
          for(LL j=i;j>=1;j--)
            {
                scanf("%lld",&temp);
                v[test].push_back(temp);
            }
            test++;
        }

        cout<<"Case "<<cs<<": "<<call(1,0)<<endl;

    }
}
