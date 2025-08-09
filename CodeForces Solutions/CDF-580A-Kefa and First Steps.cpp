/*
Problem Name : CDF-580A-Kefa and First Steps
Problem Link : https://codeforces.com/contest/580/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Dec/01/2016
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ara[100005];
    while(cin>>n)
    {
        int cnt=1,maxx=1;

        cin>>ara[0];
       for(int i=1;i<n;i++)
       {
             cin>>ara[i];
             if(ara[i]>=ara[i-1])
               {
               cnt++;
               maxx=max(maxx,cnt);

               }
             else
             {

                 cnt=1;
             }
             //cout<<"maxx = "<<maxx<<endl;
       }
       cout<<maxx<<endl;
    }
}
 
