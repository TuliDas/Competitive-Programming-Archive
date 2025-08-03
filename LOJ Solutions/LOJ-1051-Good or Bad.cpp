/*
DP - Recursive
Problem Name : LOJ-1051-Good or Bad
Problem Link : https://lightoj.com/problem/good-or-bad
Language     : C++11
Verdict      : ACCEPTED
Solved On    : 2018-06-01
*/


#include<bits/stdc++.h>
using namespace std;
#define LL long long int
string s;
int dp[60][60][60];


void convert()
{
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            s[i]='v';
        else if (s[i]!='?')
            s[i]='c';
    }
}

int call(int pos,int vow,int con)
{
    //cout<<pos<<" "<<vow<<" "<<con<<endl;

    if(vow>=3 || con>=5) return 2;

    if(pos==s.size())
    {
        if(vow>=3 || con>=5) return 2;
        else return 1;
    }

    int &ret=dp[pos][vow][con];
    if(ret!=-1) return ret;

    if(s[pos]=='v')
        ret = call(pos+1,vow+1,0);

    else if(s[pos]=='c')
        ret = call(pos+1,0,con+1);

    else
    {
        int ret1,ret2;
        ret1= call(pos+1,vow+1,0);
        ret2= call(pos+1,0,con+1);
        ret=  ret1 | ret2;
    }
    return ret;
}

int main()
{
    int tc;
    scanf("%d",&tc);
    for(int cs=1; cs<=tc; cs++)
    {
        cin>>s;
        string ans;
        convert();
        memset(dp,-1,sizeof(dp));

        LL res=call(0,0,0);
        if(res==1)
            ans="GOOD";
        else if(res==2) ans="BAD";
        else ans="MIXED";
        cout<<"Case "<<cs<<": "<<ans<<endl;

    }

}
