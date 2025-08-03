/*
Problem Name : LOJ-1022-Circle in Square
Problem Link : https://lightoj.com/problem/circle-in-square
Language     : C++11
Verdict      : ACCEPTED
Solved On    : 2016-10-12
*/

#include<stdio.h>
#include<math.h>
#define pi 2*acos(0.0)


int main()
{
    double a,r;
    int n;
    scanf("%d", &n);

    for(int i=1;i<=n;i++)
    {
        scanf("%lf", &r);

        //printf("%lf\n", r);
        a = ((r+r)*(r+r)) - (pi * r * r);
        printf("Case %d: %.2lf\n",i,a);
    }
    return 0;
}
