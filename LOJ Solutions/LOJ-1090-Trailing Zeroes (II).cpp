/*
Number Theory
Problem Name : LOJ-1090-Trailing Zeroes (II)
Problem Link : https://lightoj.com/problem/trailing-zeroes-ii
Language     : C++ 11
Verdict      : ACCEPTED
Solved On    : 2018-04-04
*/

#include<bits/stdc++.h>
using namespace std;
#define M 1000000
#define ll long long

ll nCr5[M+5];
ll nCr2[M+5];

void calculate_tralling()
{
    nCr5[1]=0;
    nCr5[2]=0;
    nCr2[1]=0;
    nCr2[2]=1;

    for(int i=3; i<=M; i++)
    {
        if(i%5!=0)
        {
            nCr5[i]=nCr5[i-1];
        }
         if(i%5==0)
        {
            nCr5[i]= (i/5) + nCr5[i/5];
        }
         if(i%2!=0)
        {
            nCr2[i]=nCr2[i-1];

        }

         if(i%2==0)
        {
            nCr2[i]= (i/2) + nCr2[i/2];
        }

    }
}

int main()
{
    calculate_tralling();

    int tc;
    long long n,r,q,ans,p;

    scanf("%d",&tc);

    for(int t=1; t<=tc; t++)
    {
        ll ans5,ans2;
        scanf("%lld %lld %lld %lld",&n,&r,&p,&q);

        ans5 =  nCr5[n] - nCr5[r]-nCr5[n-r];
        ans2 =  nCr2[n] - nCr2[r]-nCr2[n-r];

        ans5 += (nCr5[p]-nCr5[p-1])*q;
        ans2 += (nCr2[p]-nCr2[p-1])*q;

        ans = min(ans5,ans2);

        printf("Case %d: %lld\n",t,ans);
    }


}
