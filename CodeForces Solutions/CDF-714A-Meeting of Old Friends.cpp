/*
Problem Name : CDF-714A-Meeting of Old Friends
Problem Link : https://codeforces.com/contest/714/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Sep/13/2016
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,c,d,k,ans,st,et;
    while(cin>>a>>b>>c>>d>>k)
    {
        if(b<c)
            cout<<"0"<<endl;
        else if(d<a)
            cout<<"0"<<endl;
        else
        {
            st = max(a,c);
            et = min(b,d);

            if(st<=k&&k<=et)
            {
                cout<<et-st<<endl;
            }
            else
                cout<<et-st+1<<endl;
        }
    }
}
