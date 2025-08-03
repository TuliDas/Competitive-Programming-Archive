/*
Problem Name : CDF-4C-Registration system
Problem Link : https://codeforces.com/problemset/problem/4/C
Language     : C++
Verdict      : ACCEPTED
Solved On    : 2016-09-24
*/


#include<bits/stdc++.h>
using namespace std;

map <string,int> mp;
 int main()
 {
     int n;
     string s[100000];
     while(cin>>n)
     {
         for(int i=0;i<n;i++)
            {
                cin>>s[i];
            }


            for(int i=0;i<n;i++)
            {
                mp[s[i]]++;
                if(mp[s[i]]==1)
                    cout<<"OK"<<endl;
                else cout<<s[i]<<mp[s[i]]-1<<endl;
            }
     }
 }
