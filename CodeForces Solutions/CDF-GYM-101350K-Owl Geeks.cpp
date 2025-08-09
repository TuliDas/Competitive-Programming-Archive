/*
Problem Name : CDF-GYM-101350K-Owl Geeks
Problem Link : https://codeforces.com/gym/101350/problem/K
Language     : C++
Verdict      : ACCEPTED
Solved On    : Oct/20/2019
*/
#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<assert.h>
#include<unordered_map>
#include<unordered_set>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
#include <iomanip>
using namespace std;
#define lead_zero(x)    __builtin_clzll(x)
#define trail_zero(x)   __builtin_ctz(x)
#define total_1s(x)     __builtin_popcount(x)
#define ll long long int
#define pi 3.14159265358979323846
#define filein freopen("input.txt", "r", stdin)

map <ll,ll> mp;

void digits_count(ll n)
{
    ll p,mx = -1 ;

    map<ll,ll> ttt;
    set<ll> st;
    ttt.clear();
    st.clear();

    while(n!=0)
    {
        p = n % 10 ;
        ttt[p]++;
        n/=10;
    }

    map<ll,ll> :: iterator it;

    for(it=ttt.begin(); it!=ttt.end(); it++)
    {
        mx=max(mx,it->second);
    }


    for(it=ttt.begin(); it!=ttt.end(); it++)
    {
        if(it->second == mx)
            mp[ it->first ] += 1 ;
    }
}

int main()
{
    // filein;
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        mp.clear();
        ll a,b,N;
        scanf("%lld %lld %lld",&a,&b,&N);

        for(ll i=1;; i++)
        {

            ll temp = ( a * i * i ) + (b*i);

            if(temp>N)
                break ;

            digits_count(temp);

        }

        ll max_di = -1;
        ll max_freq = 0;

        for(ll i=0; i<=9; i++)
        {
            if(mp[i] > max_freq)
            {
                max_freq = mp[i];
                max_di = i ;
            }
        }
        cout<<max_di<<endl;

    }
    return 0 ;
}
