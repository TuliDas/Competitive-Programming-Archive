/*
Problem Name : CDF-236A-Boy or Girl
Problem Link : https://codeforces.com/contest/236/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Sep/18/2016
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    set <char> ss;
    string s;
    while(cin>>s)
    {
        ss.clear();
        for(int i=0;i<s.size();i++)
        {
            ss.insert(s[i]);
        }
        if(ss.size()%2==0)
            cout<<"CHAT WITH HER!"<<endl;
        else
            cout<<"IGNORE HIM!"<<endl;
    }
}
