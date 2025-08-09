/*
Problem Name : CDF-61A-Ultra-Fast Mathematician
Problem Link : https://codeforces.com/contest/61/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Dec/01/2016
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    while(cin>>s>>t)
    {
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==t[i])
                cout<<"0";
            else
                cout<<"1";
        }
        cout<<endl;


    }
}

 
