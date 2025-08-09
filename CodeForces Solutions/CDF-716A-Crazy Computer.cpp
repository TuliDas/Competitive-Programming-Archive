/*
Problem Name : CDF-716A-Crazy Computer
Problem Link : https://codeforces.com/contest/716/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Sep/18/2016
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c,a[100000];
    while(cin>>n>>c)
    {
        int ans;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(i>0)
            {
                if(a[i]-a[i-1]<=c)
                    ans++;
                    else
                        ans=0;
                    //cout<<a[i]<<" "<<a[i-1]<<endl;
                    //cout<<ans<<endl;
            }
        }
        cout<<ans+1<<endl;
    }
}
