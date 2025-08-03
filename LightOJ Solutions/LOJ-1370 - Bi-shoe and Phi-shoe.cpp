/*
Number Theory 1
Problem Name : LOJ-1370 - Bi-shoe and Phi-shoe
Problem Link : https://lightoj.com/problem/bi-shoe-and-phi-shoe
Vjudge.net   : https://vjudge.net/problem/LightOJ-1370
Language     : C++ 11
Verdict      : ACCEPTED
Solved On    : 2018-04-12 [Vjudge.net]
NOTE         : few updates needed [Segmentation error] for LOJ submission **
*/


#include<bits/stdc++.h>
using namespace std;

#define M 40000
#define N 1000003
vector <int> prime;
int D[N+5];
bool mark[M];
int ara[N+5];

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

void co_prime()
{
    memset(ara,0,sizeof(ara));
    ara[1]=2;
    D[1]=1;
    D[2]=1;
    int n,m,cnt;

    for(int i=3; i<=N; i++)
    {
        n=m=i;
        int val=sqrt(n)+1;

        for(int j = 0; j < prime.size() && 1LL * prime[j] * prime[j] <= n; j++)
        {
            if(m%prime[j]==0)
            {
                cnt=0;
                int num=1;
                while(m%prime[j]==0)
                {
                    m/=prime[j];
                    num*=prime[j];
                }

                int p;
                p=num/prime[j];
                p= num-p;
                D[n]= p * D[m];

                if(ara[D[n]]==0)
                    ara[D[n]]=n;
                break;
            }
        }
        if(n==m)
        {
            D[n]= n-1;
            if(ara[n-1]==0)
                ara[n-1]=n;
        }

    }
}

void update()
{
    for(int i=4; i<=N; i++)
    {
        if(ara[i]!=0)
        {
            int val=ara[i];
            for(int j=i-1; j>=0; j--)
            {
                if(ara[j]!=0 && ara[j]<val) break;
                if(ara[j]==0) ara[j]=val;
                if(ara[j]>val) ara[j]=val;
            }
        }
    }
}

int main()
{
    sieve();
    co_prime();
    update();

    int tc;
    int n,temp;
    long long sum;

    scanf("%d",&tc);
    for(int t=1; t<=tc; t++)
    {
        sum=0;
        scanf("%d",&n);
        while(n--)
        {
            scanf("%d",&temp);
            sum+=ara[temp];

        }
        printf("Case %d: %lld Xukha\n",t,sum);
    }
}

