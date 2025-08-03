/*
Problem Name : CDF-318A-Even Odds
Problem Link : https://codeforces.com/problemset/problem/318/A
Vjudge.net   : https://vjudge.net/problem/CodeForces-318A
Language     : C++
Verdict      : ACCEPTED
Solved On    : 2016-06-10
*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int m,n,evn,odd,t;
    while(cin>>n>>m)
    {
        if(n%2==0)
        {
            odd=n/2;
            evn=n/2;
        }
        else
        {
            odd=(n+1)/2;
            evn=(n-1)/2;
        }

        if(m<=odd)
        {
            t=m*2-1;
        }
        else
        {
            t=(m-odd)*2;
        }
        cout<<t<<endl;
    }
    return 0;

}
