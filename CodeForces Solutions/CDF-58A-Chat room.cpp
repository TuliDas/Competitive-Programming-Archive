/*
Problem Name : CDF-58A-Chat room
Problem Link : https://codeforces.com/problemset/problem/58/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Nov/12/2016
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while(cin>>s)
    {
        int h=0,e=0,l=0,o=0,test=0;
        bool hh=false,ee=false,ll=false,oo=false;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='h')
                {
                    hh=true;
                    h++;
                    test++;

                }

            else  if(s[i]=='e' && hh==true)
                {
                    ee=true;
                    e++;
                    test++;
                }

        else  if(s[i]=='l' && ee==true)
                {
                    ll=true;
                    l++;
                    test++;
                }

                   else  if(s[i]=='o' && ll==true)
                {
                    oo=true;
                    o++;
                }
        }

        if(l>=2 && oo==true)
            cout<<"YES"<<endl;

        else
         cout<<"NO"<<endl;
    }
}
