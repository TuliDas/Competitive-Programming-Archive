/*
Problem Name : CDF-281A-Word Capitalization
Problem Link : https://codeforces.com/contest/281/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Jun/25/2016
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while(cin>>s)
    {
            s[0]=toupper(s[0]);

        cout<<s<<endl;
    }
    return 0;
}
