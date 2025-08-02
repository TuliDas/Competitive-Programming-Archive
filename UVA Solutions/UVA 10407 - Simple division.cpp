/*
Number Theory
Problem Name	: UVA 10407 - Simple division
Problem Link    : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1348
Vjudge.net  	: https://vjudge.net/problem/UVA-10407
Verdict	        : Accepted
Language	    : C++11
Solved on   	: 2018-04-02
*/



#include<bits/stdc++.h>
using namespace std;
vector<long long> v;


int main()
{
    long long n,a,b,ans,gcd;
    while(true)
    {
        v.clear();
        scanf("%lld",&n);
        if(n==0 && v.size()==0) break;
        v.push_back(n);
        while(true)
        {
            scanf("%lld",&n);
            if(n==0) break;
            v.push_back(n);
        }
        gcd=0;
        long long p;
        for(int i=1; i<v.size(); i++)
        {
            a= v[i];
            b=v[i-1];
            p = (abs(a-b));
            gcd = __gcd(gcd,p);
            //cout<<"gcd = "<<ans<<endl;
        }
        printf("%lld\n",gcd);
    }
}
