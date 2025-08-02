// Problem Name	: UVA 11000 - Bee
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1941
// Verdict	: Accepted
// Language	: C
// Solved on   	: 2016-03-05

#include<stdio.h>

int main()
{
    while(true)
    {
        long long m,f,i,j,p,k,sum1,sum2,n;
        scanf("%lld",&n);

        if(n<0)
        {
            break;
        }

        else if(n==0)
        {
            printf("0 1\n");
        }

        else
        {
            m=1;
            f=1;
            p=0;
            k=0;
            sum2=0;
            sum1=0;

            for(i=0; i<n ; i++)
            {
                f=p+f;
                p=f-p;
                sum2=sum2+f;
            }

            for(j=0; j<n-1; j++)
            {
                m=m+k;
                k=m-k;
                sum1=sum1+m;
            }
            printf("%lld %lld\n",sum1+1,sum2+1);
        }

    }
    return 0;
}
