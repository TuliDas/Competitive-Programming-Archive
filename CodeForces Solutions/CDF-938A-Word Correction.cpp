/*
Problem Name : CDF-938A-Word Correction
Problem Link : https://codeforces.com/contest/938/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Feb/17/2018
*/

#include<bits/stdc++.h>
using namespace std;

bool check(char ch)
{
    char ara[]= {'a','e','i','o','u','y'};
    for(int i=0; i<6; i++)
    {
        if(ara[i]==ch) return true;
    }
    return false;
}

int main()
{
    int n;
    string str,s;
    cin>>n;
    getchar();
    cin>>str;
    s="";
    if(str.size()==1) cout<<str;
    else
    {
        int cur=0;
        s+= str[cur];

        for(int i=1; i<str.size(); i++)
        {
           if(check(str[i]) && check(str[cur]))
           {

           }
           else
           {
               s+=str[i];
               cur=i;
           }
        }
        //reverse(s.begin(),s.end());
        cout<<s;
    }
}
