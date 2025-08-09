/*
Problem Name : CDF-466A-Cheap Travel
Problem Link : https://codeforces.com/contest/466/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Jan/06/2017
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a,b;
    while(cin>>n>>m>>a>>b)
    {
        long long ans,p;

        p= n*a;
        ans=p;
        int mm;
        mm=m;
        while(true)
        {
           // cout<<"mm = "<<mm<<", n+m = "<<n+m<<endl;
            if(mm>n+m)
                break;

            ans= (mm/m)*b;
            if(mm<n)
               ans+= (n-mm)*a;
              //cout<<"ans = "<<ans<<endl;
            ans= min(p,ans);

            p=ans;
            mm+=m;

        }
        cout<<ans<<endl;

    }
}
