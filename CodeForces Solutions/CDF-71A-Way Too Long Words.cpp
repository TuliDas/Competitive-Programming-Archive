/*
Problem Name : CDF-71A-Way Too Long Words
Problem Link : https://codeforces.com/contest/71/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Jun/28/2016
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,i,l;
    while(cin>>n)
    {
        string s[100];
        for(i=0;i<n;i++)
        {
            cin>>s[i];
            l=s[i].size();
            if(l<=10)
                cout<<s[i]<<endl;
            else
            {
                cout<<s[i][0]<<l-2<<s[i][l-1]<<endl;
            }
        }
    }
    return 0;
}

 
