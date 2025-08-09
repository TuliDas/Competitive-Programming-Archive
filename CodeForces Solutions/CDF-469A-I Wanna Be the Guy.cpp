/*
Problem Name : CDF-469A-I Wanna Be the Guy
Problem Link : https://codeforces.com/contest/469/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Dec/01/2016
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,ara[105];
    memset(ara,0,sizeof(ara));
    cin>>a>>b;
    int p;
    for(int i=0; i<b; i++)
    {
        cin>>p;
        ara[p]=1;
    }
    cin>>c;

    for(int i=0; i<c; i++)
    {
        cin>>p;
        ara[p]=1;
    }
    bool flag=true;
    for(int i=1; i<=a; i++)
    {
        if(ara[i]!=1)
        {
            flag=false;
            break;
        }
    }
    if(flag)
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;


}

 
