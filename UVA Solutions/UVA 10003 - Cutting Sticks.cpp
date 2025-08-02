/*
DP - recursive
Problem Name	: UVA 10003 - Cutting Sticks
Problem Link    : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=944
Vjudge.net  	: https://vjudge.net/problem/UVA-10003
Verdict	        : Accepted
Language	    : C++11
Solved on   	: 2018-06-03
*/


#include<bits/stdc++.h>
using namespace std;
#define LL long long int
LL n,ara[60],L;
LL dp[60][60];

LL call(LL i,LL j)
{
    if(j-i==1) return 0;

    LL &ret = dp[i][j];

    if(ret!=-1) return ret;

    ret= INT_MAX;
    LL cost;

    for(int p=i+1;p<j;p++)
    {
        cost = ara[j]-ara[i] + call(i,p) + call(p,j);
        ret= min(cost,ret);
    }
    return ret;
}



int main()
{
    //freopen("input.txt","r+",stdin);
    while(cin>>L)
    {
        if(L==0) break;

        memset(dp,-1,sizeof(dp));
        cin>>n;

        for(LL i=1;i<=n;i++)
        cin>>ara[i];

        ara[0]=0;
        ara[n+1]=L;

        cout<<"The minimum cutting is "<<call(0,n+1)<<"."<<endl;
    }
}
