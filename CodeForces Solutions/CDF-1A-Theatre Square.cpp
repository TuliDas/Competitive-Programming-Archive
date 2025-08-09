/*
Problem Name : CDF-1A-Theatre Square
Problem Link : https://codeforces.com/contest/1/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Sep/21/2016
*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    long double a,b,c;
    long long int ans;
    while(cin>>a>>b>>c)
    {
        ans= ceil((b-c)/c)*ceil(a/c) + ceil(a/c) ;
        cout<<ans<<endl;
    }
}
