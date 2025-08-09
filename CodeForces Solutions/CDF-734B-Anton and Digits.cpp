/*
Problem Name : CDF-734B-Anton and Digits
Problem Link : https://codeforces.com/contest/734/problem/B
Language     : C++
Verdict      : ACCEPTED
Solved On    : Nov/15/2016
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;

    while(cin>>a>>b>>c>>d)
    {

      long long ans=0,test,tt;

       test= min(a,min(c,d));

       ans+= test*256;

       a -=test;
       ans+= min(a,b) * 32;

       cout<<ans<<endl;



    }
}
 
