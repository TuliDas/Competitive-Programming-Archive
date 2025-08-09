/*
Problem Name : CDF-837A-Text Volume
Problem Link : https://codeforces.com/contest/837/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Aug/20/2017
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,vol=0;
    string p,s;
    stringstream ss;
    cin>>n;
    getchar();
    getline(cin,p);
    ss<<p;
    while(!ss.eof())
    {
        ss>>s;
        int temp=0;
        for(int i=0; i<s.size(); i++)
        {
            if(isupper(s[i]))
                temp++;
        }
        vol=max(vol,temp);
    }
    cout<<vol<<endl;
}
