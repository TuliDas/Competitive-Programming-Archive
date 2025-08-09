/*
Problem Name : CDF-231A-Team
Problem Link : https://codeforces.com/contest/231/problem/A
Verdict      : ACCEPTED
Solved On    : Jun/11/2016
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int a,b,c,d;
        d=0;
        for(int i=0;i<n;i++)
        {
            cin>>a>>b>>c;
            if((a==1 && b==1 && c==1) || (a==1 && b==1) || (b==1 && c==1) || (a==1 && c==1))
                d++;
        }
        cout<<d<<endl;
    }
    return 0;
}
