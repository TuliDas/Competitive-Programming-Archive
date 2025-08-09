/*
Problem Name : CDF-598A-Tricky Sum
Problem Link : https://codeforces.com/contest/598/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Jan/15/2017
*/

#include<bits/stdc++.h>
using namespace std;
map <long long,long long> mp,ans;

int main()
{

    mp.clear();
    for(int i=0; i<=30; i++)
    {
        mp[powl(2,i)]=i;
    }
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long n,sum;
        cin>>n;
        sum = (n*(n+1))/2;

        map <long long,long long> :: iterator it;
        for(it=mp.begin(); it!=mp.end(); it++)
        {
            if(it->first > n)
                break;

            sum-= it->first*2;
        }
        cout<<sum<<endl;


    }

}
