/*
Problem Name : LOJ-1294-Positive Negative Sign
Problem Link : https://lightoj.com/problem/positive-negative-sign
Language     : C++
Verdict      : ACCEPTED
Solved On    : 2016-05-24
*/

#include<stdio.h>

int main()
{
    long long int c,i;
    scanf("%lld",&c);
    i=1;
    while(c--)
    {

        long long int n,m,a;
        scanf("%lld %lld",&n,&m);
        a=m*(n/2);

        printf("Case %lld: %lld\n",i,a);
        i++;
    }
    return 0;

}

