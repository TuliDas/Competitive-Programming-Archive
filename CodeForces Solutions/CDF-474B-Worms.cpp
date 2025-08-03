/*
Problem Name : CDF-474B-Worms
Problem Link : https://codeforces.com/problemset/problem/474/B
Language     : C++
Verdict      : ACCEPTED
Solved On    : Nov/06/2016
*/

#include<bits/stdc++.h>
using namespace std;
map <long long ,long long > mp;
int main()
{
   long long n,m,ara[100005],pp,sum;

   cin>>n;
   mp.clear();
   sum=0;
   scanf("%lld",&ara[1]);
   mp[1]=1;
   for(long long i=2;i<=ara[1];i++)
         mp[i] = 1;

   sum+=ara[1];
   // cout<<" 1 = "<<1<<" 1 "<<ara[1]<<endl;
   for(long long i=2;i<=n;i++)
   {
       scanf("%lld",&ara[i]);
       //cout<<" i = "<<i<<" = "<<sum+1<<" , "<<sum+ara[i]<<endl;
       for(long long j=sum+1;j<=sum+ara[i];j++)
        mp[j]=i;
       sum+=ara[i];
   }

  scanf("%lld",&m);
for(long long i=0;i<m;i++)
   {
       scanf("%lld",&pp);
       cout<<mp[pp]<<endl;
   }
   return 0;
}
