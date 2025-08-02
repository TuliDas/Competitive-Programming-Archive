/*
DP - recursive
Problem Name	: UVA 10400 - Game Show Math
Problem Link    : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1341
Vjudge.net  	: https://vjudge.net/problem/UVA-10400
Verdict	        : Accepted
Language	    : C++11
Solved on   	: 2018-06-01

*/


#include<bits/stdc++.h>
using namespace std;
#define LL long long int
LL tc,p,ara[105],res;
string expp;
int dp[105][64005];
bool flag;

int call(int cur, int sum)
{
    //cout<<"cur, sum = "<<cur<<", "<<sum<<endl;
    if(flag==true) return 0;

    if(sum>32000 || sum<-32000) return 0;

    if(cur==p)
    {
        if(sum==res)
        {
            flag=true;
            return 1;
        }
        else return 0;
    }

    int &ret = dp[cur][sum+32000];
    if(ret!=-1) return ret;

    ret = call(cur+1,sum+ara[cur+1]);
    if(ret==1)
    {
        expp+="+";
        return ret;
    }

    ret= call(cur+1,sum-ara[cur+1]);
    if(ret==1)
    {
        expp+="-";
        return ret;
    }

    ret= call(cur+1,sum*ara[cur+1]);
    if(ret==1)
    {
        expp+="*";
        return ret;
    }

    if(sum%ara[cur+1]==0)
    {
        ret= call(cur+1,sum/ara[cur+1]);
        if(ret==1)
        {
            expp+="/";
            return ret;
        }
    }
     else
      return ret=0;
}

int main()
{
    cin>>tc;
    for(LL cs=1; cs<=tc; cs++)
    {
        memset(dp,-1,sizeof(dp));

        cin>>p;
        for(LL i=1; i<=p; i++)
            cin>>ara[i];
        cin>>res;

        expp = "";
        flag=false;
        int ans = call(1, ara[1]);

        if(ans == 0)
            cout<<"NO EXPRESSION"<<endl;
        else
        {
            for(int i=1,j=expp.size(); i<=p; i++,j--)
            {
                if(i==1) cout<<ara[i];
                else cout<<expp[j]<<ara[i];
            }
            cout<<"="<<res<<endl;
        }
    }
}
