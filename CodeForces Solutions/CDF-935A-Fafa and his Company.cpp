/*
Problem Name : CDF-935A-Fafa and his Company
Problem Link : https://codeforces.com/contest/935/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Feb/19/2018
*/

#include<bits/stdc++.h>
using namespace std;


int main()
{
   long long int n;
   cin>>n;
   int ans=0;
   int a,b;
   for(int i=1;i<n;i++)
   {
       a=i;
       b=n-i;
       if(b%a==0) ans++;
   }
   cout<<ans;

}

 
