/*
Problem Name : CDF-749A-Bachgold Problem
Problem Link : https://codeforces.com/contest/749/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Dec/20/2016
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int cnt,c;
        if(n%2==0)
            cnt=n/2;
        else
            cnt=n/2 - 1;

          cout<<n/2<<endl;

        while(cnt--)
            cout<<"2 ";
        if(n%2!=0)
            cout<<"3"<<endl;
            else
                cout<<endl;

    }
}
