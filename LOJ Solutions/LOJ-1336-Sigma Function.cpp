/*
Number Theory 1
Problem Name : LOJ-1336-Sigma Function
Problem Link : https://lightoj.com/problem/sigma-function
Language     : C++ 11
Verdict      : ACCEPTED
Solved On    : 2018-04-27
*/

#include<bits/stdc++.h>
using namespace std;
#define LL long long

int main()
{
   int tc;
   LL ans,n;
   //fstream myfile("output.txt");

   scanf("%d",&tc);
   for(int cs=1;cs<=tc;cs++)
   {
       cin>>n;
       ans = sqrt(n);
       ans+= sqrt(n/2);
       cout<<"Case "<<cs<<": "<<n-ans<<endl;
   }
}
