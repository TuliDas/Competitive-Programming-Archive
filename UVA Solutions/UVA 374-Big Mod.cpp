// Problem Name: UVA 374 - Big Mod
// Prolem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=310
// Verdict	: Accepted
// Language	: C++11
// Solved on   	: 2016-10-18

#include<bits/stdc++.h>
using namespace std;
int m;
int mod_fun(int b,int p)
{
    if(p==0) return 1;
    if(p%2==0)
    {
        int ret=mod_fun(b,p/2);
        return ((ret%m)*(ret%m))%m;
    }
    else
        return ((b%m)*(mod_fun(b,p-1)%m))%m;
}
int main()
{
    int b,p;
    while(scanf("%d %d %d",&b,&p,&m)==3)
    {
        int r=mod_fun(b,p);
        printf("%d\n",r);
    }
}
