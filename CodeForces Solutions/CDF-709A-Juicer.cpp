/*
Problem Name : CDF-709A-Juicer
Problem Link : https://codeforces.com/contest/709/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Sep/15/2016
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,b,d;
    while(cin>>n>>b>>d)
    {
        long long int ws=0,a,ans=0;

        for(int i=0;i<n;i++)
        {
            cin>>a;
            if(a<=b)
                ws=ws+a;

                if(ws>d)
                {
                    ans++;
                    ws=0;
                }
        }

        cout<<ans<<endl;
    }
    return 0;
}
