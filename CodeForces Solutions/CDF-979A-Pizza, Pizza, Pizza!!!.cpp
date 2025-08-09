/*
Problem Name : CDF-979A-Pizza, Pizza, Pizza!!!
Problem Link : https://codeforces.com/contest/979/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : May/15/2018
*/

#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long int n;
    cin>>n;
    n++;
    if(n==1) cout<<"0"<<endl;
    else if(n%2==0)
    {
        cout<<n/2<<endl;
    }
    else
    {
        cout<<n<<endl;
    }
}
