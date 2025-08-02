// Problem Name : UVA 12405 - Scarecrow
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3836
// Vjudge.net  	: https://vjudge.net/problem/UVA-12405
// Verdict      : Accepted
// Language     : C++11
// Solved on    : 2016-10-13


#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n,j,p;
    j=1;
    cin>>n;
    while(n--)
    {
        cin>>p;
        cin>>s;
        int cnt=0;

        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='.')
            {
                cnt++;
                i+=2;
            }


        }


        printf("Case %d: %d\n",j++,cnt);

    }
}
