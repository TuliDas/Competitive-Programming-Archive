/*
Problem Name : LOJ-1001-Opposite Task
Problem Link : https://lightoj.com/problem/circle-in-square
Language     : C++ 11
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
        int a,c,d;
        cin>>a;
        if(a>=10)
        {
            c= a-10;
            d= a- c;
        }

        else
        {
            c=0;
            d=a;
        }


        cout<<c<<" "<<d<<endl;
    }
}
