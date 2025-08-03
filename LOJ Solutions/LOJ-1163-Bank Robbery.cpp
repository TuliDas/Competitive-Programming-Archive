/*
Problem Name : LOJ-1163-Bank Robbery
Problem Link : https://lightoj.com/problem/bank-robbery
Language     : C++
Verdict      : ACCEPTED
Solved On    : 2016-06-12
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,m,n;
    cin>>m;
    for(int i=1; i<=m; i++)
    {
        long double x,n,a;
        cin>>n;

        x=(10.0*n)/9.0;
        a=(long long int)x%10;

        if(a==0)
            cout<<"Case "<<i<<": "<<(long long int)x-1<<" "<<(long long int)x<<endl;
        else
        {
            cout<<"Case "<<i<<": "<<(long long int)x<<endl;
        }
    }
    return 0;
}
