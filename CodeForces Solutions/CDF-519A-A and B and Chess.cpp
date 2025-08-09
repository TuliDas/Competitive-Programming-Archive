/*
Problem Name : CDF-519A-A and B and Chess
Problem Link : https://codeforces.com/contest/519/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Dec/01/2016
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
   // while(true)
    {
        string s;
        int w=0,b=0;
        for(int j=1; j<=8; j++)
        {
            cin>>s;

            for(int i=0; i<8; i++)
            {
                if(s[i]!='.' && s[i]!='K' && s[i]!='k')
                {
                    if(s[i]=='q')
                        b+=9;
                    else if(s[i]=='r')
                        b+=5;

                    else if(s[i]=='b' || s[i]=='n')
                        b+=3;
                    else if(s[i]=='p')
                        b+=1;

                    else if(s[i]=='P')
                        w+=1;

                    else if(s[i]=='Q')
                        w+=9;
                         else if(s[i]=='R')
                        w+=5;

                    else if(s[i]=='B' || s[i]=='N')
                        w+=3;


                }
            }
        }
       // cout<<"w = "<<w<<" . b = "<<b<<endl;
        if(w>b)
            cout<<"White"<<endl;
        else if(b>w)
            cout<<"Black"<<endl;
        else
            cout<<"Draw"<<endl;

    }
}

 
