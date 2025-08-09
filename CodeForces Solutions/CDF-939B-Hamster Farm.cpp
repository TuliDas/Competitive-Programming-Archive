/*
Problem Name : CDF-939B-Hamster Farm
Problem Link : https://codeforces.com/contest/939/problem/B
Language     : C++
Verdict      : ACCEPTED
Solved On    : Feb/17/2018
*/

#include<bits/stdc++.h>
using namespace std;


int main()
{
   long long int n,k;
   long long int ara[100005];
   long long int type,number,mod1,mod2;
   cin>>n>>k;
   for(int i=1;i<=k;i++)
    cin>>ara[i];
   type=1;
   mod1= n%ara[1];
   number=n/ara[1];
   for(int i=2;i<=k;i++)
   {
             mod2=n%ara[i];
             if(mod2<mod1)
             {
                 mod1=mod2;
                 type=i;
                 number= n/ara[i];
             }
   }
   cout<<type<<" "<<number;

}
 
