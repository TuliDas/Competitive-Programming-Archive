// Problem Name	: UVA 884 - Factorial Factors
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=825
// Verdict	: Accepted
// Language	: C++11
// Solved on   	: 2017-09-10

#include<bits/stdc++.h>
using namespace std;

#define M 1000001
int ans[M];
bool isPrime[M];
vector<int> prime;

void sieve()
{
    memset(isPrime,true,sizeof(isPrime));

    isPrime[0]= isPrime[1]= false;

    int val=sqrt(M);

    for(int i=2; i<=val; i++)
    {
        if(isPrime[i])
        {
            for(int j=i*i; j<=M; j+=i)
                isPrime[j]=false;
        }
    }

    for(int i=2; i<=M; i++)
        if(isPrime[i]) prime.push_back(i);
}


void pre_calculate()
{
    ans[1]=0;
    for(int i=2; i<=M; i++)
    {
        ans[i]= ans[i-1];

        int num=i,j=0;

        while(!isPrime[num])
        {
            if(num%prime[j]==0)
            {
                ans[i]++;
                num/=prime[j];
            }
            else j++;
        }

        if(isPrime[num]) ans[i]++;

    }
}

int main()
{
    int n;
    sieve();
    pre_calculate();

    while(scanf("%d",&n)!=EOF)
    {
        cout<<ans[n]<<endl;
    }
}

