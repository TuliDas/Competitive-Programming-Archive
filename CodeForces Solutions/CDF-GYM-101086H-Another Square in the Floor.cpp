/*
Problem Name : CDF-GYM-101086H-Another Square in the Floor
Problem Link : https://codeforces.com/gym/101086/problem/H
Vjudge.net   : https://vjudge.net/problem/Gym-101086H
Language     : C++
Verdict      : ACCEPTED
Solved On    : 2018-05-15
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    long long int n,m,ans;
    cin>>tc;
    while(tc--)
    {
        scanf("%lld %lld",&n,&m);
        ans= max(n,m);
        ans*=ans;
        cout<<ans<<endl;
    }
}
