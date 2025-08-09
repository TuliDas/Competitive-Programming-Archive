/*
Problem Name : CDF-520A-Pangram
Problem Link : https://codeforces.com/contest/520/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Dec/17/2016
*/

#include<bits/stdc++.h>
using namespace std;
map <char,bool> mp;
int main()
{
    int n;
    string s;
    while(cin>>n>>s)
    {
        mp.clear();
        for(int i=0;i<s.size();i++)
            mp[s[i]]=true;

        int i,j;
        char a,b;
        bool flag=true;
        for(i=65,j=97; i<=90;i++,j++)
        {
            a=i;
            b=j;
            if(mp[a]==false && mp[b]==false)
            {
                flag=false;
                break;
            }
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

}
