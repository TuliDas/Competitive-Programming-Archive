/*
Problem Name : CDF-746A-Compote
Problem Link : https://codeforces.com/contest/746/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Dec/18/2016
*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
    int cnt=0;
    while(true)
    {
        if(a>=1 && b>=2 && c>=4)
        {
            cnt+=7;
            a-=1;
            b-=2;
            c-=4;
        }
        else
            break;
    }
    cout<<cnt<<endl;
}
}
