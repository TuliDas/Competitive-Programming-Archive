/*
Problem Name : CDF-337A-Puzzles
Problem Link : https://codeforces.com/problemset/problem/337/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Nov/12/2016
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,m;
    while(cin>>n>>m)
    {
        int ara[55];
        int dd,nn;
        dd=2147483647;

        for(int i=0; i<m; i++)
            cin>>ara[i];


        sort(ara,ara+m);


        int i=0,l,h;
        l=0;
        h= n-1+l;

        while(true)
        {
            dd = min((ara[h]-ara[l]),dd);
            l++;
            h = n+l-1;

            if(h>m-1)
                break;

        }

        cout<<dd<<endl;
    }
}
