// Problem Name : UVA 11636 - Hello World!
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2683
// Vjudge.net  	: https://vjudge.net/problem/UVA-11636
// Verdict      : Accepted
// Language     : C++11
// Solved on    : 2016-02-27

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ans,i=1;
    while(cin>>n)
    {
        ans=1;
        int cnt=0;

        if(n<0)
            break;

        if(n==1 || n==0)
            cnt=0;

        else
        {
            while(true)
            {
                ans+=ans;
                cnt++;

                if(ans>=n)
                    break;
            }
        }
        printf("Case %d: %d\n",i++,cnt);
    }

    return 0;
}
