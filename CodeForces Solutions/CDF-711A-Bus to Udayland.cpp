/*
Problem Name : CDF-711A-Bus to Udayland
Problem Link : https://codeforces.com/problemset/problem/711/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Sep/11/2016
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,test;
    while(cin>>n)
    {
        string s[1005];

        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        test=0;
        for(int j=0;j<n;j++)
        {
            if(s[j][0]=='O' && s[j][1]=='O')
            {
                test=1;
                s[j][0]='+';
                s[j][1]='+';
                break;

            }
            else if(s[j][3]=='O' && s[j][4]=='O')
            {
                test=1;
                s[j][3]='+';
                s[j][4]='+';
                break;

            }
        }

        if(test==0)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++)
                cout<<s[i]<<endl;
        }
    }
    return 0;
}
