// Problem Name : UVA 12708 - GCD The Largest
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=4446
// Vjudge.net  	: https://vjudge.net/problem/UVA-12708
// Verdict      : Accepted
// Language     : C++11
// Solved on    : 2016-10-13

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        long long a,ans;
        scanf("%lld",&a);
        ans=a/2;
        printf("%lld\n",ans);

    }
}

