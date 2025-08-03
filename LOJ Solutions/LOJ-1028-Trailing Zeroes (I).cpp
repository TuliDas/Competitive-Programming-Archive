/*
NUMBER THEORY
Problem Name : LOJ-1028-Trailing Zeroes (I)
Problem Link : https://lightoj.com/problem/trailing-zeroes-i
Vjudge.net   : https://vjudge.net/problem/LightOJ-1028
Language     : C++ 11
Verdict      : ACCEPTED
Solved On    : 2018-04-03
*/

#include<bits/stdc++.h>
using namespace std;

#define M 1000000
#define ll long long

vector <int> prime;
bool mark[M+5];
void sieve()
{
    memset(mark,true,sizeof(mark));

    prime.push_back(2);

    for(int i=3; i*i<=M; i+=2)
    {
        if(mark[i])
        {
            for(int j=i*i; j<=M; j+=2*i)
                mark[j]=false;
        }
    }


    for(int i=3; i<=M; i+=2)
    {
        if(mark[i])
            prime.push_back(i);
    }
}

int main()
{
    sieve();
    int tc;
    ll n,cnt,sum;

    scanf("%d",&tc);
    for(int t=1; t<=tc; t++)
    {
        scanf("%lld",&n);
        sum=1;
        if(n>1)
        {
            for(int i=0; i<prime.size() && prime[i]<=sqrt(n); i++)
            {
                if(n%prime[i]==0)
                {
                    cnt=0;
                    while(n%prime[i]==0)
                    {
                        cnt++;
                        n/=prime[i];
                    }
                    sum*=(cnt+1);
                }
            }
            if(n>1)
                sum*=2;
        }

        printf("Case %d: %lld\n",t,sum-1);
    }
}
