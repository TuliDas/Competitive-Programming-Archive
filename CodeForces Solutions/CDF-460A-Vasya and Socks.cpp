/*
Problem Name : CDF-460A-Vasya and Socks
Problem Link : https://codeforces.com/contest/460/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Jun/27/2016
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m,i,j,c;
    while(cin>>n>>m)
    {
        c=n;
        for(i=1; i<=n; i++)
        {

            if(i%m==0)
            {
                c++;
                n++;
            }
        }
        cout<<n<<endl;

    }
    return 0;
}
