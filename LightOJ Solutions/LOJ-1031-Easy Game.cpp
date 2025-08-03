
/*
DP -Recursive
Problem Name : LOJ-1031-Easy Game
Problem Link : https://lightoj.com/problem/easy-game
Language     : C++11
Verdict      : ACCEPTED
Solved On    : 2018-06-03
*/

#include<bits/stdc++.h>
using namespace std;
#define LL long long int
LL n,ara[105];
LL dp[105][105];

LL call(int i,int j)
{
    if(i==j) return ara[i];
    if(i>j || j<i) return 0;

    if(dp[i][j]!=-1)return dp[i][j];

    LL temp=0;
    LL diff= -INT_MAX;

    for(int p=i;p<=j;p++)
    {
        temp+=ara[p];
        diff=max(diff, temp - call(p+1,j));
    }
    temp=0;
    for(int p=j;p>=i;p--)
    {
        temp+=ara[p];
        diff=max(diff, temp - call(i,p-1));
    }
    return dp[i][j] = diff;
}

int main()
{
    int tc;
   // freopen("input.txt","r+",stdin);
     //freopen("output.txt","w+",stdout);
    cin>>tc;
    for(int cs=1;cs<=tc;cs++)
    {
        memset(dp,-1,sizeof(dp));
        cin>>n;
        for(int i=0;i<n;i++) cin>>ara[i];
        cout<<"Case "<<cs<<": "<<call(0,n-1)<<endl;
    }
}
