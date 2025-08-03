/*
Problem Name : LOJ-1136-Division by 3
Problem Link : https://lightoj.com/problem/division-by-3
Language     : C++
Verdict      : ACCEPTED
Solved On    : 2016-10-13
*/

#include<bits/stdc++.h>
using namespace std;
int fun(int a)
{
    int ret;
    ret=a/3;
    ret*=2;
    if(a%3==2)
        ret++;
    return ret;
}
int main()
{
    int n,kase=1;
    scanf("%d",&n);
    while(n--)
    {
       int m,n,ans;
       scanf("%d %d",&m,&n);
       ans= fun(n)-fun(m-1);


            printf("Case %d: %d\n",kase++,ans);

    }
}


