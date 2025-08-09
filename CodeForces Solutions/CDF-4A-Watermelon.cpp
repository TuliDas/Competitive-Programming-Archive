/*
Problem Name : CDF-4A-Watermelon
Problem Link : https://codeforces.com/contest/4/problem/A
Verdict      : ACCEPTED
Solved On    : Jun/10/2016
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        if(n%2==0 && n>2)
            cout<<"YES"<<endl;
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
