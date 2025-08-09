/*
Problem Name : CDF-25A-IQ test
Problem Link : https://codeforces.com/contest/25/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Dec/01/2016
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    while(cin>>n)
    {
        int ev=0,od=0,even,odd;

        for(int i=1; i<=n; i++)
        {
            cin>>m;
            if(m%2==0)
            {
                ev++;
                even=i;
            }
            else
            {
                od++;
                odd=i;
            }
        }
        if(od==1)
            cout<<odd<<endl;
        else
            cout<<even<<endl;

    }
}
 
