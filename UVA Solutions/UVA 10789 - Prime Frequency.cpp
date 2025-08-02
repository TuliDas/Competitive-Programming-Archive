// Problem Name : UVA 10789 - Prime Frequency
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1730
// Vjudge.net  	: https://vjudge.net/problem/UVA-10789
// Verdict      : Accepted
// Language     : C++11
// Solved on    : 2016-11-13

#include<bits/stdc++.h>
using namespace std;

int prime(int n)
{
    if(n==1)
        return 0;
    if(n==2 || n==3)
        return 1;

    if(n%2==0)
        return 0;

    else
    {
        for(int i=3;i<n;i+=2)
        {
            if(n%i==0)
                return 0;
        }
    }
    return 1;
}
map <char,int> mp;

int main()
{
    int tc,kase=1;
    cin>>tc;
    while(tc--)
    {
    mp.clear();

    string s,ss;
    ss="";
    cin>>s;

    for(int i=0;i<s.size();i++)
    {
        mp[s[i]]++;
    }

    map <char,int> :: iterator it;

    //for(it=mp.begin();it!=mp.end();it++)
    {
       // cout<<it->first<<" -- "<<it->second<<endl;
    }

    for(it=mp.begin();it!=mp.end();it++)
    {
        int r = prime(it->second);

        //cout<<r<<"--"<<it->second<<endl;
        if(r)
        {
            ss+=it->first;
        }
    }

    if(ss=="")
        printf("Case %d: empty\n",kase++);

    else
        cout<<"Case "<<kase++<<": "<<ss<<endl;
    }
}
