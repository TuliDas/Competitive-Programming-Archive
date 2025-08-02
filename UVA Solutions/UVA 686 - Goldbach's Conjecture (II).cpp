// Problem Name	: UVA 686 - Goldbach's Conjecture (II)
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=627
// Verdict	: Accepted
// Language	: C++11
// Solved on   	: 2017-09-10


#include<bits/stdc++.h>
using namespace std;
#define M 35000
bool prime[M];

void sieve()
{
    memset(prime,true,sizeof(prime));
    int val;
    val=sqrt(M)+1;
    for(int i=2; i<=val; i++)
    {
        if(prime[i])
        {
            for(int j=i*2; j<=M; j+=i)
                prime[j]=false;
        }
    }
}

int main()
{
    int n;
    sieve();
    while(scanf("%d",&n)==1)
    {
        if(n==0) break;
        int val,cnt=0;


        for(int i=2; i<=n/2; i++)
        {
            if(prime[i] && prime[n-i])
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}
