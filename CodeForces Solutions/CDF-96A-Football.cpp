/*
Problem Name : CDF-96A-Football
Problem Link : https://codeforces.com/contest/96/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Jun/29/2016
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while(cin>>s)
    {
        long long int i,a,b;
        a=0;
        b=0;
        for(i=0; i<s.size(); i++)
        {
            if(s[i]=='1')
                a++;

            if(s[i]!='1')
                a=0;

            if(s[i]=='0')
               b++;

            if(s[i]!='0')
                b=0;

          if(a>=7 || b>=7)
                break;

        }
        if(a>=7 || b>=7)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
