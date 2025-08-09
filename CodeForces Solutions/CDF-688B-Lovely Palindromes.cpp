/*
Problem Name : CDF-688B-Lovely Palindromes
Problem Link : https://codeforces.com/contest/688/problem/B
Language     : C++
Verdict      : ACCEPTED
Solved On    : Jun/29/2016
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while(cin>>s)
    {
        cout<<s;
        reverse(s.begin(),s.end());
        cout<<s;
        cout<<endl;
    }
    return 0;
}

 
