/*
DP - Recursive
Problem Name : LOJ-1033-Generating Palindromes
Problem Link : https://lightoj.com/problem/generating-palindromes
Language     : C++11
Verdict      : ACCEPTED
Solved On    : 2018-05-31
*/

#include<bits/stdc++.h>
using namespace std;
#define LL long long int
string s;
LL dp[105][105];

LL call(LL i,LL j)
{
    if(i>j) return 0;
    if(dp[i][j]!=-1) return dp[i][j];

    LL ret1,ret2,ret3;
    ret1=ret2=ret3=INT_MAX;

    if(s[i]!=s[j])
    {
        ret1= 1+ call(i+1,j);
        ret2= 1+ call(i,j-1);
    }
    else
    {
        ret3=call(i+1,j-1);
    }
    return dp[i][j]= min(ret3, min(ret1,ret2));

}

int main()
{
    int tc;
    cin>>tc;
    for(int cs=1;cs<=tc;cs++)
    {
        memset(dp,-1,sizeof(dp));
        cin>>s;
        cout<<"Case "<<cs<<": "<<call(0,s.size()-1)<<endl;
    }
}
