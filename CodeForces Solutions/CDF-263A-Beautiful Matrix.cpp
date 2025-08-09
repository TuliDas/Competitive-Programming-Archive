/*
Problem Name : CDF-263A-Beautiful Matrix
Problem Link : https://codeforces.com/contest/263/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Dec/01/2016
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ans;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            cin>>n;
            if(n==1)
                ans= max (abs(j-i), abs(6-i-j));
        }
    }
    cout<<ans<<endl;
}


 
