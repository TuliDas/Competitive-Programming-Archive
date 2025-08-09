/*
Problem Name : CDF-268B-Buttons
Problem Link : https://codeforces.com/contest/268/problem/B
Language     : C++
Verdict      : ACCEPTED
Solved On    : Dec/01/2016
*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int ans;
        ans=n;

        for(int i=1;i<n;i++)
            ans+= i*(n-i);

        cout<<ans<<endl;
    }
}
