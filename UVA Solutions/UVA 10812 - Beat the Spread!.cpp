// Problem Name	: UVA 10812 - Beat the Spread!
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1753
// Verdict	: Accepted
// Language	: C++11
// Solved on   	: 2016-03-04

#include<stdio.h>

int main()

{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int m,p,a,b;
        scanf("%d %d",&m,&p);
        a=(m+p)/2;
        b=m-a;

        if((m+p)%2!=0 || a<0 || b<0)
        {
            printf("impossible\n");
        }

        else
        {
            printf("%d %d\n",a,b);
        }
    }
    return 0;
}
