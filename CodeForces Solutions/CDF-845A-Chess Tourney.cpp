/*
Problem Name : CDF-845A-Chess Tourney
Problem Link : https://codeforces.com/contest/845/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Aug/21/2017
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,p;
    cin>>n;
    p=2*n;
    int ara[205];

    for(int i=0;i<p;i++)
        cin>>ara[i];

    sort(ara,ara+p);
    if(ara[n-1]<ara[n])
        cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
}
