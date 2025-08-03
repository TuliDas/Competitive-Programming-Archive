/*
Problem Name : LOJ-1000-Greetings from LightOJ
Problem Link : https://lightoj.com/problem/greetings-from-lightoj
Language     : C++
Verdict      : ACCEPTED
Solved On    : 2016
*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc,kase=1;
    cin>>tc;
    while(tc--)
    {
        int a,b;
        cin>>a>>b;
        printf("Case %d: %d\n",kase++,a+b);
    }
}
