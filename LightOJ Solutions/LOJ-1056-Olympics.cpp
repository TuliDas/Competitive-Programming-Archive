/*
Problem Name : LOJ-1056-Olympics
Problem Link : https://lightoj.com/problem/olympics
Language     : C++
Verdict      : ACCEPTED
Solved On    : 2016
*/

#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)

int main()
{
    long double a,b,r,s,angle,k,l,w;
    char ch;
    int tc,kase=1;
    cin>>tc;
    while(tc--)
    {
        cin>>a>>ch>>b;

        r=sqrt( (a*a)/4 + (b*b)/4);
        angle =atan(b/a);
        //angle = (180.0)/pi * angle;
        //cout<<angle<<endl;
        s= r*angle*2;
        k= 400.0/(2*s + 2*a);
        l=a*k;
        w=b*k;
        cout<<"Case "<<kase++<<": "<<fixed<<setprecision(10)<<l<<" "<<w<<endl;
    }
}
