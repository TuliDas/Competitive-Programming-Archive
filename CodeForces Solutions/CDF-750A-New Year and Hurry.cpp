/*
Problem Name : CDF-750A-New Year and Hurry
Problem Link : https://codeforces.com/contest/750/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Feb/14/2017
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    while(cin>>n>>k)
    {
        int t,cnt=0;
        t=240-k;
        for(int i=5;i<=t&&n!=0;i+=5)
        {
            cnt++;
            t-=i;
            n--;
        }
        cout<<cnt<<endl;
    }
}
