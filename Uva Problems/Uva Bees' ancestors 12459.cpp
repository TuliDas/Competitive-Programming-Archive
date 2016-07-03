#include<stdio.h>

int main()
{
    int n;
    while(true)
    {
        long long ara[85];
        long long i,sum,j;

        scanf("%lld",&n);

        if(n==0)
        {
            break;
        }

        sum=1;
        ara[0]=0;
        ara[1]=1;

        for(i=2; i<85; i++)
        {
            ara[i]=ara[i-1]+ara[i-2];
        }

        for(j=0; j<n; j++)
        {
            sum=sum+ara[j];
        }

        printf("%lld\n",sum);
    }

    return 0;
}
