/*
Problem Name : CDF-69A-Young Physicist
Problem Link : https://codeforces.com/contest/69/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Jun/29/2016
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a,b,c,x,y,z,i;
    while(cin>>n)
    {
        a=0;
        b=0;
        c=0;
        for(i=0; i<n; i++)
        {
            cin>>x>>y>>z;
            a=a+x;
            b=b+y;
            c=c+z;
        }
        if(n==1)
        {
            if(a+b+c==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;

        }
        else
        {
            if(a==0 && b==0 && c==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}

 
