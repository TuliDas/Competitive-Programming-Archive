/*
Problem Name : CDF-41A-Translation
Problem Link : https://codeforces.com/contest/41/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Dec/01/2016
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,ss;
    while(cin>>s>>ss)
    {

        reverse(ss.begin(),ss.end());
        if(s==ss)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
