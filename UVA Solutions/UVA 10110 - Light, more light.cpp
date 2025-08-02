// Problem Name	: UVA 10110 - Light, more light
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1051
// Verdict	: Accepted
// Language	: C++
// Solved on   	: 2016-10-18


#include<stdio.h>
#include<math.h>
int main()
{
    long long n,r;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            break;
        r=sqrt(n);
        if(r*r==n)
            printf("yes\n");
        else
            printf("no\n");
    }
}
