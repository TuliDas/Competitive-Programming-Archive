// Problem Name: UVA 10346 - Peter's Smokes
// Prolem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1287
// Verdict	: Accepted
// Language	: C++
// Solved on   	: 2016-03-05

#include<stdio.h>

int main()
{
    int n,k;
    while(scanf("%d %d",&n,&k)!=EOF)
    {
        int a,c,b,i,e;
        c=n;

        if(k>n)
        {
            printf("%d\n",n);
        }

        else
        {
            e=0;
            for(i=k; i<=n+e; i=i+k)
            {
                c++;
                e++;
            }

            printf("%d\n",c);
        }
    }

    return 0;
}
