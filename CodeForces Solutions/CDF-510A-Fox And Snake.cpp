/*
Problem Name : CDF-510A-Fox And Snake
Problem Link : https://codeforces.com/contest/510/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Dec/01/2016
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        bool flag=true;


        for(int i=1; i<=n; i++)
        {
            if(i%2!=0)
            {
                for(int j=1; j<=m; j++)
                    cout<<"#";
            }
            else
            {
                if(flag)
                {


                    for(int j=1; j<m; j++)
                        cout<<".";
                    cout<<"#";
                    flag=false;
                }
                else
                {
                    cout<<"#";
                    for(int j=1; j<m; j++)
                        cout<<".";

                    flag=true;
                }
            }

            cout<<endl;
        }
    }
}
