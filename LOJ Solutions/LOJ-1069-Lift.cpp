/*
Problem Name : LOJ-1069-Lift
Problem Link : https://lightoj.com/problem/lift
Language     : C++
Verdict      : ACCEPTED
Solved On    : 2016-10-12
*/


#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n,li1,li2,p,mm;
    scanf("%d", &n);

    for(int i=1;i<=n;i++)
    {
        scanf("%d %d", &li1,&li2);

  mm=fabs(li2-li1);
        p=19+ mm*4+ li1*4;
        printf("Case %d: %d\n",i,p);
    }
    return 0;
}

