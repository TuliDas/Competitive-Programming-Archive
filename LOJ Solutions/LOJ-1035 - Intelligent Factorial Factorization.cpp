/*
NUMBER THEORY
Problem Name : LOJ-1035 - Intelligent Factorial Factorization
Problem Link : https://lightoj.com/problem/intel-factor-factorization
Language     : C++ 11
Verdict      : ACCEPTED
Solved On    : 2018-04-03
*/

#include<bits/stdc++.h>
using namespace std;


#define M 105
vector <int> prime;
pair<int,int> pp;
vector < int > fact[105];

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


void precalculate()
{
    int a,b,freq,test,cnt,p;
    for(int i=2; i<=100; i++)
    {
        for(int j=0;prime[j]<=i && j<prime.size(); j++)
        {
            cnt=0;
            p=prime[j];
            test=i/p;
            while(test>0)
            {
                cnt+= test;
                p*=prime[j];
                test=i/p;
            }

            fact[i].push_back(cnt);
        }
    }
}

int main()
{
    sieve();
    precalculate();

    int tc,n;
    scanf("%d",&tc);

    for(int i=1; i<=tc; i++)
    {
        scanf("%d",&n);
        cout<<"Case "<<i<<": "<<n<<" = ";
        int it=0;
        int t=fact[n].size()-1;
        for(int j=0; j<fact[n].size()-1; j++)
        {
            cout<<prime[it++]<<" ("<<fact[n][j]<<") * ";
        }
        cout<<prime[it++]<<" ("<<fact[n][t]<<")"<<endl;
    }

}

