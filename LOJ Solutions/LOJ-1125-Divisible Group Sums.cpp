/*
DP
Problem Name : LOJ-1125-Divisible Group Sums
Problem Link : https://lightoj.com/problem/divisible-group-sums
Language     : C++ 11
Verdict      : ACCEPTED
Solved On    : 2018-05-28
*/


#include<bits/stdc++.h>
using namespace std;
#define LL long long int
LL n,m,q,D,dp[205][200][15],coin[205];

LL call(LL i,LL amount,LL c_num)
{

    amount=amount%D;
    if(c_num == m)
    {

        if(amount==0) return 1;
        else return 0;
    }

    if(i>n)
    return 0;

    if(dp[i][amount][c_num]!=-1) return dp[i][amount][c_num];

    LL ret1,ret2;

        ret1= call(i+1,amount+coin[i],c_num+1);
        ret2= call(i+1,amount,c_num);

    return dp[i][amount][c_num]=ret1+ret2;

}




int main()
{
    LL tc;

    scanf("%lld",&tc);
    for(LL cs=1; cs<=tc; cs++)
    {
        cin>>n>>q;
        for(LL i=1; i<=n; i++)
            cin>>coin[i];

        for(LL i=1; i<=q; i++)
        {
            memset(dp,-1,sizeof(dp));
            cin>>D>>m;
            if(i==1)
                cout<<"Case "<<cs<<":"<<endl;

            cout<<call(1,0,0)<<endl;
        }
    }
}
