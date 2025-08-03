/*
NUMBER THEORY
Problem Name : LOJ-1215- Finding LCM
Problem Link : https://lightoj.com/problem/finding-lcm
Language     : C++ 11
Verdict      : ACCEPTED
Solved On    : 2018-04-03
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll lcm(ll a,ll b)
{
    return (a*b)/__gcd(a,b);
}

int main()
{
    ll a,b,L,tc;
    scanf("%lld",&tc);
    for(int i=1; i<=tc; i++)
    {
        scanf("%lld %lld %lld",&a,&b,&L);
        ll x=lcm(a,b);
        if(x>L || L%x!=0)
        {
            cout<<"Case "<<i<<": impossible"<<endl;
            continue;
        }

        ll ans,g;
        ans= L/x;
        while((g=__gcd(ans,x))!=1)
        {
            ans*=g;
            x/=g;
        }
        cout<<"Case "<<i<<": "<<ans<<endl;
    }
    return 0;
}
