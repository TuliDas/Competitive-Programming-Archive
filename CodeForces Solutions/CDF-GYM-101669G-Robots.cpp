/*
Problem Name : CDF-GYM-101669G-Robots
Problem Link : https://codeforces.com/gym/101669/attachments
Vjudge.net   : https://vjudge.net/problem/Gym-101669G
Language     : C++
Verdict      : ACCEPTED
Solved On    : 2018-03-20
*/

#include<bits/stdc++.h>
using namespace std;
double u,v,a,t,s,S;

#define lb double

struct physics
{
     lb ace;
     lb time;
};
physics vv[10005];

bool CMP(physics a,physics b)
{
    if(a.ace>b.ace) return true;

    if(a.ace==b.ace)
    {
        return (a.time>b.time);
    }

    return false;
}

int main()
{
    int tc;
    scanf("%d",&tc);
    lb S1,S2;
    u=0;
    S1=0;
    for(int i=0;i<tc;i++)
    {
        physics p;
        scanf("%lf %lf",&vv[i].ace,&vv[i].time);
        a=vv[i].ace;
        t=vv[i].time;
        s=u*t + (0.5*a*t*t);
        u=u + (a*t);
        S1+=s;

    }
    sort(vv,vv+tc,CMP);

    S2=0;
    u=0;

    for(int i=0;i<tc;i++)
    {
        a=vv[i].ace;
        t=vv[i].time;
        s=u*t + (0.5*a*t*t);
        u=u + (a*t);
        S2+=s;
    }

    printf("%0.1f\n",S2-S1);
}
