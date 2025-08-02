// Problem Name : UVA 12578 - 10:6:2
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=4023
// Vjudge.net  	: https://vjudge.net/problem/UVA-12578
// Verdict      : Accepted
// Language     : C++
// Solved on    : 2016-02-27

#include<stdio.h>
#include<math.h>

#define PI 2*acos(0.0)

int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        double l,r,w,g_area,r_area;
        scanf("%lf",&l);

        r=l/5.0;
        w=.6*l;
        r_area= PI *r*r;
        g_area=(l*w)-r_area;

        printf("%.2lf %.2lf\n",r_area,g_area);
    }

    return 0;
}
