/*
Problem Name : CDF-939A-Love Triangle
Problem Link : https://codeforces.com/contest/939/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Feb/17/2018
*/

#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,ara[5005];
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>ara[i];
    int a,b,c,d;
    bool flag=false;
    for(int i=1; i<=n; i++)
    {
        d=-1;
        a=-1,b=-1,c=-1;

        a=i;
        if(ara[a]<=n)
            b=ara[a];
        if(b<=n) c=ara[b];
        if(c<=n) d=ara[c];

        if(a!=-1 && b!=-1 && c!=-1 && d!=-1 && a==d)
        {
            cout<<"YES"<<endl;
            flag=true;
            break;
        }

    }
    if(flag==false) cout<<"NO"<<endl;
}
