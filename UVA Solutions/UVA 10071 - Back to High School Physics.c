// Problem Name	: UVA 10071 - Back to High School Physics
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1012
// Verdict	    : Accepted
// Language	    : C
// Solved on   	: 2016-02-05



#include<stdio.h>

int main()
{
    int v,t,s;
    while(scanf("%d %d",&v,&t)==2)
    {
        s=2*v*t;
        printf("%d\n",s);
    }
    return 0;
}
