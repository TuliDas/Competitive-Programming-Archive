/*
Number Theory
Problem Name	: UVA 11064 - Number Theory
Problem Link    : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2005
Vjudge.net  	: https://vjudge.net/problem/UVA-11064
Language	    : C++
Solved on   	: 2018-05-04
*/

#include<bits/stdc++.h>
using namespace std;

#define M 100000
#define LL long long int
#define sz 78555

vector<LL> prime;
int mark[M/32];

bool Check(int n,int pos)
{
    return (bool)(n & (1<<pos));
}
int Set(int n,int pos)
{
    n=n | (1<<pos);
    return n;
}


void bitwise_sieve()
{

    for( LL i = 3;i*i<=M; i += 2 )
    {
        if( Check(mark[i/32],i%32)==0)
        {
            for( LL j = i*i; j <= M; j += 2*i )
            {
                mark[j/32]=Set(mark[j/32],j % 32)   ;
            }
        }
    }

     prime.push_back(2);
    for(LL i=3; i<=M; i+=2)
    {
        if( Check(mark[i/32],i%32)==0)
            prime.push_back(i);
    }
}




int main()
{
    bitwise_sieve();

    LL p;

    while(scanf("%lld",&p)!=EOF)
    {
        LL phi=p,div=1,cnt,ans,n;
        n=p;

        for(LL i=0;i<prime.size() && prime[i]<=p;i++)
        {
            if(p%prime[i]==0)
            {
                phi/=prime[i];
                phi*=(prime[i]-1);
                cnt=0;
                while(p%prime[i]==0)
                {
                    cnt++;
                    p/=prime[i];
                }
                div*=(cnt+1);
            }
        }

        if(p>1)
        {
            div*=2;
            phi/=p;
            phi*=(p-1);
        }
        phi--;
      ans = n-(div+phi);
        printf("%lld\n",ans);
    }
}


