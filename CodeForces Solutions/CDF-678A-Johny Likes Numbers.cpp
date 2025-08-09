/*
Problem Name : CDF-678A-Johny Likes Numbers
Problem Link : https://codeforces.com/contest/678/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Jun/13/2016
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m,c,i;
    while(cin>>n>>m)
    {
        if(n%m==0)
            cout<<n+m<<endl;
        else
        {
            c= n + m - n%m;
            cout<<c<<endl;
        }
    }

    return 0;
}


 
