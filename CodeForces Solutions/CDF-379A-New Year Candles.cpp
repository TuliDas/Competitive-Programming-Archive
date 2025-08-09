/*
Problem Name : CDF-379A-New Year Candles
Problem Link : https://codeforces.com/contest/379/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Dec/01/2016
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    while(cin>>a>>b)
    {
       int ans,tt;
       ans=a;

       while(true)
       {
          tt=a/b;
          if(tt==0)
                break;
          ans+=tt;
          a= a/b + a%b;
       }
       cout<<ans<<endl;

    }
}
 
