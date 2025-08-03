/*
Problem Name : CDF-352A-Jeff and Digits
Problem Link : https://codeforces.com/problemset/problem/352/A
Vjudge.net   : https://vjudge.net/problem/CodeForces-352A
Language     : C++
Verdict      : ACCEPTED
Solved On    : 2016-10-17
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        int f=0,z=0,input,sum=0,maxx=0;

        for(int i=0;i<n;i++)
        {
            scanf("%d",&input);
            sum+=input;

            if(sum%9==0)
                maxx=sum;

            if(input==0)
                z++;
        }

        if(z==0)
            printf("-1\n");
        else if(z!=0 && maxx==0)
            printf("0\n");

        else //if(z!=0 && maxx%9==0)
        {
            f=maxx/5;
            while(f--)
                printf("5");
            while(z--)
                printf("0");
            printf("\n");
        }

    }
    return 0;
}
