/*
Problem Name : CDF-141A-Amusing Joke
Problem Link : https://codeforces.com/contest/141/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Dec/17/2016
*/

#include<bits/stdc++.h>
using namespace std;
map <char,int> mp1,mp;
int main()
{
    int n;
    string s1,s2,s;
    while(cin>>s1>>s2>>s)
    {
        mp1.clear();
        mp.clear();

        for(int i=0;i<s1.size();i++)
            mp1[s1[i]]++;

        for(int i=0;i<s2.size();i++)
            mp1[s2[i]]++;

        for(int i=0;i<s.size();i++)
            mp[s[i]]++;

        int i;

        char a;
        bool flag=true;

        for(i=65; i<=90;i++)
        {
                 a=i;

                if(mp1[a]!=mp[a])
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
 
