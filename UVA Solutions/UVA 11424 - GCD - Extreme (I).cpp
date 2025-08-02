/*
Number Theory 1
Problem Name	: UVA 11424 - GCD - Extreme (I)
Problem Link    : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2419
Vjudge.net  	: https://vjudge.net/problem/UVA-11424
Verdict	        : Accepted
Language	    : C++11
Solved on   	: 2018-04-28
*/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define M 4000005
LL phi[M];
LL ans[M];
LL temp[M];

void create_phi()
{
    memset(phi,0,sizeof(phi));
    for(LL i=2; i<=M; i++)
    {
        if(phi[i]==0)
        {
            phi[i]= i-1;
            for(LL j=i*2; j<=M; j+=i)
            {
                if(phi[j]==0)
                    phi[j]=j;

                phi[j] = phi[j]/i * (i-1);
            }

        }
    }

}

void precalculate()
{
    memset(ans,0,sizeof(ans));
    memset(temp,0,sizeof(temp));

    for(LL i=1; i<=M; i++)
    {
        for(LL j=2*i; j<=M; j+=i)
        {
            ans[j] += (i * phi[j/i]);
        }
    }
    for(int i=2; i<=M; i++)
        ans[i] += ans[i-1];
}

int main()
{
    create_phi();
    precalculate();

    int tc;
    LL n;
    //fstream myfile("output.txt");
    int cs=1;
    while(scanf("%lld",&n)==1)
    {
        if(n==0) break;
        cout<<ans[n]<<endl;

    }

}
