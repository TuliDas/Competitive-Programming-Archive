/*
Problem Name : CDF-734A-Anton and Danik
Problem Link : https://codeforces.com/contest/734/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Nov/15/2016
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    while(cin>>n>>s)
    {
        int a=0,d=0,f=0;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='A')
                a++;

            else
                d++;
        }
        if(a>d)
            cout<<"Anton"<<endl;

         else if(d>a)
            cout<<"Danik"<<endl;

            else cout<<"Friendship"<<endl;
    }
}
