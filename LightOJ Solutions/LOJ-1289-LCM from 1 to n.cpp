/*
Number Theory 1
Problem Name : LOJ-1289-LCM from 1 to n
Problem Link : https://lightoj.com/problem/lcm-from-1-to-n
Language     : C++ 11
Verdict      : ACCEPTED
Solved On    : 2018-04-12
*/

#include<bits/stdc++.h>
using namespace std;

#define M 100000100
#define mod 4294967296
#define LL unsigned
#define sz 5761461

LL prime[sz];
unsigned int mul[sz];
int cnt;
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

    cnt=0;
    prime[cnt++]=2;

    for(int i=3; i<=M; i+=2)
    {
        if( Check(mark[i/32],i%32)==0)
            prime[cnt++]=i;
    }
}


void precalculate()
{
    mul[0]=2;
    for(int i=1; i<cnt; i++)
        mul[i] = mul[i-1] * (unsigned)prime[i];
}

int main()
{
    bitwise_sieve();
    precalculate();
    //cout<<cnt<<endl;

    int tc;
    LL p;
    scanf("%d",&tc);
    // fstream myfile;
    // myfile.open("output.txt");

    for(int t=1; t<=tc; t++)
    {
        scanf("%u",&p);
        LL ans=1;
        LL temp,test;


        int i=0;
        for( ; i<cnt && prime[i]*prime[i]<=p; i++)
        {
            temp=p/prime[i];
            test=prime[i];

            while(test<=temp)
            {
                ans = ans * (unsigned)prime[i];
                test*=prime[i];
            }
        }


        int indx= lower_bound(prime,prime+cnt,p) - prime;
        if(prime[indx]>p) indx--;

        //cout<<indx<<endl;
        ans *= mul[indx];
        printf("Case %d: %u\n",t,ans);
        //cout<<"Case "<<t<<": "<<ans<<endl;
    }
}
