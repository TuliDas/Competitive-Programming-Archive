/*
Problem Name : CDF-262A-Roma and Lucky Numbers
Problem Link : https://codeforces.com/problemset/problem/262/A
Vjudge.net   : https://vjudge.net/problem/CodeForces-262A
Language     : C++
Verdict      : ACCEPTED
Solved On    : 2016-05-28
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        int a,b,c,cc;
        int i;
        cc=0;
        for(i=0;i<n;i++)
        {
            cin>>a;

         c=0;
        while(a!=0)
        {
            b=a%10;
            if(b==4 || b==7)
            {
                c++;
            }
                a=a/10;
        }
        if(c<=m)
        {
            cc++;
        }
      }
      cout<<cc<<'\n';

    }
    return 0;
}
