/*
Problem Name : CDF-935A-Fafa and the Gates
Problem Link : https://codeforces.com/contest/935/problem/B
Language     : C++
Verdict      : ACCEPTED
Solved On    : Feb/19/2018
*/

#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    string s;
    cin>>n;
    getchar();
    cin>>s;

    int x=0,y=0;
    int ans=0;

    if(s[0]=='U') y++;
    else x++;

    int a;
    if(x>y) a=0;
    else if(y>x) a=1;
   // cout<<x<<" "<<y<<endl;

    for(int i=1; i<s.size(); i++)
    {
        if(s[i]=='U')
            y++;
        else if(s[i]=='R')
            x++;

       // cout<<x<<" "<<y<<endl;
        if(a==1 && x>y)
        {
            ans++;
            a=0;
        }
        else if(a==0 && y>x)
        {
            ans++;
            a=1;
        }

    }
    cout<<ans;

}
 
