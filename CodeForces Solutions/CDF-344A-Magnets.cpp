/*
Problem Name : CDF-344A-Magnets
Problem Link : https://codeforces.com/problemset/problem/344/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Dec/01/2016
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,gr=0;
    string s;
    char k;
    vector<int>v;
    cin>>n;
    cin>>s;
    k=s[s.length()-1];
    n--;
    while(n--)
    {
        cin>>s;
        if(k==s[0])
            gr++;
            k=s[s.length()-1];

    }
    cout<<gr+1<<endl;
}

