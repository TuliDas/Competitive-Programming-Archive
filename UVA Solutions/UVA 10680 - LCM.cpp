/*
Number Theory
Problem Name	: UVA 10680 - LCM
Problem Link    : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1621
Vjudge.net  	: https://vjudge.net/problem/UVA-10680
Verdict	        : Accepted
Language	    : C++11
Solved on   	: 2018-05-04
*/

#include<bits/stdc++.h>
using namespace std;

#define M 1000005
#define LL long long int
#define sz 78555

LL prime[sz];
LL mul[sz];
LL cnt;
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




int main()
{
    bitwise_sieve();

    LL p;

    //fstream myfile;
     //myfile.open("output.txt");

    while(scanf("%lld",&p)==1)
    {
        if(p==0) break;
        LL ans=1,c2=0,c5=0;


        for(LL i=2; i<=p; i*=2) c2++;
        for(LL i=5; i<=p; i*=5) c5++;

        for(LL i=0; i<c2-c5; i++) ans= (ans*2)%10;

        for( LL i=1; i<cnt && prime[i]<=p; i++)
        {
            if(i==2) continue;

            for(LL j=prime[i]; j<=p; j*=prime[i])
            {
                ans= (ans*prime[i])%10;
            }
        }

        printf("%lld\n",ans);
       // myfile<<ans<<endl;
    }
}
