/*
Problem Name : CDF-1238B-Kill 'Em All
Problem Link : https://codeforces.com/contest/1238/problem/B
Language     : C++
Verdict      : ACCEPTED
Solved On    : Oct/22/2019
*/

#include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

vector <int> v;
int n,r;
int main()
{
    int tc;
    scanf("%d",&tc);

    while(tc--)
    {
        v.clear();
        scanf("%d %d",&n,&r);
        int temp;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&temp);
            v.push_back(temp);
        }
        sort(v.begin(),v.end());
        v.erase( unique( v.begin(),v.end()),v.end());
        reverse(v.begin(),v.end());

        int radius = 0;
        int cnt = 0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]-radius > 0)
            {
                radius += r ;
                cnt++ ;
            }
            else break;
        }
        printf("%d\n",cnt);

    }
    return 0;
}
