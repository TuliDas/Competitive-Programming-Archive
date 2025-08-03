/*
Problem Name : LOJ-1054-Efficient Pseudo Code
Problem Link : https://lightoj.com/problem/efficient-pseudo-code
Language     : C++ 11
Verdict      : ACCEPTED
Solved On    : 2018-04-11
*/


#include<bits/stdc++.h>
#include<fstream>
using namespace std;

#define M 100005
#define LL unsigned long long
#define mod 1000000007

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

    for( int i = 3; (i*i)<=M ; i += 2 )
    {
        if( Check(mark[i/32],i%32)==0)
        {
            for( int j = i*i; j <= M; j += 2*i )
            {
                mark[j/32]=Set(mark[j/32],j % 32)   ;
            }
        }
    }
    prime.push_back(2);
    for(int i=3; i<=M; i+=2)
        if( Check(mark[i/32],i%32)==0)
            prime.push_back(i);

}

LL  F(LL  N,LL  P)
{
    if(P==0) return 1;
    if(P%2==0)
    {
        LL  ret=F(N,P/2);
        return ((ret%mod)*(ret%mod))% mod;
    }
    else return ((N%mod)*(F(N,P-1)%mod))%mod;
}

int main()
{
    bitwise_sieve();
    LL m,tc,n,cnt,s,up,down,N,sum;
    scanf("%lld",&tc);

    for(LL  t=1; t<=tc; t++)
    {
        scanf("%lld %lld",&n,&m);
        N=n;
        sum = 1;
        for(LL  i=0; i<prime.size() && prime[i]<N; i++)
        {
            if(n%prime[i]==0)
            {
                cnt=0;
                while(n%prime[i]==0)
                {
                    n/=prime[i];
                    cnt++;
                }
                cnt = cnt*m + 1;
                up = ( F(prime[i],cnt) - 1)%mod ;
                down = F(prime[i]-1,mod-2);

                s = ( (up%mod) *(down%mod) )% mod;

                sum =  ((sum%mod)*(s%mod))% mod;

            }

        }

        if(n>1)
        {
            cnt = m+1;

            if(n%mod==0)
                sum = 1;
            else
            {
                up = ( F(n,cnt) - 1)%mod;
                down = F(n-1,mod-2);
                s = ((up%mod) * (down%mod)) % mod;
                sum =((sum%mod)*(s%mod)) % mod;
            }
        }
        printf("Case %lld: %lld\n",t,sum);

    }
}
