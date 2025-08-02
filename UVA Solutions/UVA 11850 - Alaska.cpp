// Problem Name : UVA 11850 - Alaska
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2950
// Vjudge.net   : https://vjudge.net/problem/UVA-11850
// Verdict      : Accepted
// Language     : C++11
// Solved on    : 2016-10-13

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ara[1450];
    while(scanf("%d",&n)==1)
    {
        if(n==0) break;
        bool flag=true;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&ara[i]);
        }
        sort(ara,ara+n);
        for(int i=1;i<n;i++)
        {
            if(ara[i]-ara[i-1]>200)
            {
                flag=false;
                break;
            }
        }
        if(1422-ara[n-1]>100)
            flag=false;





    if(flag)
        printf("POSSIBLE\n");
    else
        printf("IMPOSSIBLE\n");

    }
}




