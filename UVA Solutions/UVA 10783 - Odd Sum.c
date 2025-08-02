// Problem Name	: UVA 10783 - Odd Sum
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1724
// Verdict	: Accepted
// Language	: C
// Solved on   	: 2016-02-05

#include<stdio.h>

int main()
{
    int n,i,a,b,sum;
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d %d",&a,&b);
        sum=0;

        if(a==0)
        {
            sum=0;
            a++;
        }

        if(a==1)
        {
            sum=1;
            a++;
        }

        while(a>1 && a<=b)
        {
            if(a%2!=0)
            {
                sum=sum+a;
            }
            a++;
        }

        printf("Case %d: %d\n",i+1,sum);
    }
    return 0;
}

