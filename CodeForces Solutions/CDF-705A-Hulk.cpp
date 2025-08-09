/*
Problem Name : CDF-705A-Hulk
Problem Link : https://codeforces.com/contest/705/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Sep/18/2016
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        for(int i=1;i<=n;i++)
        {
            if(i%2!=0)
                cout<<"I hate ";
            else if(i%2==0)
                cout<<"I love ";
            if(i!=n)
                cout<<"that ";
            if(i==n)
                cout<<"it";
        }
        cout<<endl;
    }
}
