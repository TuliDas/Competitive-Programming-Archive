/*
Problem Name : LOJ-1053-Higher Math
Problem Link : https://lightoj.com/problem/higher-math
Language     : C++
Verdict      : ACCEPTED
Solved On    : 2016-10-12
*/

#include<bits/stdc++.h>
using namespace std;



int main()
{
    long long int a[3];
    int n;
    scanf("%d", &n);

    for(int i=1;i<=n;i++)
    {
        scanf("%lld %lld %lld", &a[0],&a[1],&a[2]);
        sort(a,a+3);
        if((a[0]*a[0] + a[1]*a[1] )== a[2]*a[2])
        printf("Case %d: yes\n",i);
        else
        printf("Case %d: no\n",i);

    }
    return 0;
}
