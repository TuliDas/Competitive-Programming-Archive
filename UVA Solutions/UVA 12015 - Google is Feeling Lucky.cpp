// Problem Name : UVA 12015 - Google is Feeling Lucky
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3166
// Vjudge.net  	: https://vjudge.net/problem/UVA-12015
// Verdict      : Accepted
// Language     : C++11
// Solved on    : 2016-11-01

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        string s[11];
        int ara[11];
        int maxx=0,n;
        for(int j=0;j<10;j++)
        {
            cin>>s[j]>>ara[j];
            if(ara[j]>maxx)
                maxx=ara[j];
        }

        printf("Case #%d:\n",i);

        for(int j=0;j<10;j++)
        {

            if(maxx==ara[j])
                cout<<s[j]<<endl;
        }

    }
    return 0;
}
