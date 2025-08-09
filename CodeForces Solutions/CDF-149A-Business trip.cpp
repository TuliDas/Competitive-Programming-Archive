/*
Problem Name : CDF-149A-Business trip
Problem Link : https://codeforces.com/contest/149/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Dec/01/2016
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ara[15];
    while(cin>>n)
    {
        for(int i=0; i<12; i++)
            cin>>ara[i];
        if(n==0)
            cout<<"0"<<endl;
        else
        {

            sort(ara,ara+12);
            int ans=0,cnt=0;
            for(int i=11; i>=0; i--)
            {
                ans+=ara[i];
                cnt++;
                if(ans>=n)
                    break;

            }
            if(ans>=n)
            cout<<cnt<<endl;
            else
                cout<<"-1"<<endl;

        }
    }
}


 
