/* DP
Problem Name : UVA 10130 - SuperSale
Problem Link : https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1071
Vjudge.net    : https://vjudge.net/problem/UVA-10130
Verdict	    : Accepted
Language	 : C++11
Solved on     : 2018-05-26
*/

#include<bits/stdc++.h>
using namespace std;
#define LL long long int
LL cost[1005],weight[1005],cap,n,g;
LL dp[1005][40];

LL maximum_profit(LL i,LL w)
{
    if(i>n) return 0;
    if(dp[i][w]!=-1) return dp[i][w];
    LL profit1,profit2;

    if(w+weight[i]<=cap)
    profit1= cost[i] + maximum_profit(i+1,w+weight[i]);
    else profit1=0;

    profit2=maximum_profit(i+1,w);

    return dp[i][w] = max(profit1,profit2);
}

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        cin>>n;

        for(int i=1;i<=n;i++)
            cin>>cost[i]>>weight[i];

            cin>>g;
            LL temp,ans=0;

            while(g--)
            {
               cin>>temp;
               cap=temp;
               memset(dp,-1,sizeof(dp));
               ans+=maximum_profit(1,0);
            }
            cout<<ans<<endl;
    }
}
