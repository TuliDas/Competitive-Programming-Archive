/*
Number Theory
Problem Name : LOJ-1236-Pairs Forming LCM
Problem Link : https://lightoj.com/problem/pairs-forming-lcm
Language     : C++ 11
Verdict      : ACCEPTED
Solved On    : 2018-04-07
*/


#include<bits/stdc++.h>
using namespace std;

#define M 10000000
vector<int> prime;
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
    for( int i = 3; i <= sqrt(M); i += 2 )
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
        if(Check(mark[i/32],i%32)==0)
            prime.push_back(i);

}

int main()
{
    bitwise_sieve();

    int tc;
    long long n,ans;
    scanf("%d",&tc);

    for(int t=1; t<=tc; t++)
    {
        scanf("%lld",&n);
        ans=1;
        for(int i=0; prime[i]<=sqrt(n) && i<prime.size(); i++)
        {

            if(n%prime[i]==0)
            {
                int cnt;
                cnt=0;
                while(n%prime[i]==0)
                {
                    n/=prime[i];
                    cnt++;
                }
                ans*=((cnt*2)+1);

            }
        }
        if(n>1)
            ans*=(3);

        ans = (ans+1)/2;


        printf("Case %d: %lld\n",t,ans);
    }
}
