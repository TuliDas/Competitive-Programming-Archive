/*
Problem Name : CDF-GYM-102346L-Less Coin Tosses
Problem Link : https://codeforces.com/gym/102346/problem/L
Language     : C++
Verdict      : ACCEPTED
Solved On    : Oct/24/2019
*/

#include<iostream>
using namespace std;

typedef long long int ll;
ll n,ans;

int main()
{
    cin>>n;
    ans = 1LL<<__builtin_popcountll(n);
    cout<<ans;
}
