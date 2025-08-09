/*
Problem Name : CDF-116A-Tram
Problem Link : https://codeforces.com/contest/116/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Sep/20/2016
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int ans=0,mmm=0,a,b;
        for(int i=0;i<n;i++)
        {
            cin>>a>>b;
            ans=ans-a+b;
            mmm=max(ans,mmm);

        }
        cout<<mmm<<endl;
    }
}
