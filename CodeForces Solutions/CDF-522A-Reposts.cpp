/*
Problem Name : CDF-522A-Reposts
Problem Link : https://codeforces.com/contest/522/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Aug/21/2017
*/

#include<bits/stdc++.h>
using namespace std;
map <string,int>mp;

int main()
{
    int tc;
    string s;
    stringstream ss;
    int ans=1;
    cin>>tc;
    getchar();
    mp.clear();
    mp["POLYCARP"]=1;
    while(tc--)
    {
        getline(cin,s);
        transform(s.begin(),s.end(),s.begin(), :: toupper);
        ss<<s;
        string n1,n2,temp;
        ss>>n1;
        ss>>temp;
        ss>>n2;
        mp[n1]= mp[n2]+1;
        ss.clear();
        ans=max(ans,mp[n1]);
    }
    cout<<ans<<endl;
}
