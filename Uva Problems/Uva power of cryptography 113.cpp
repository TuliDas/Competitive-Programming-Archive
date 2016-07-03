#include<stdio.h>

int main()
{
    long long i,j,n,m,mul;

    while(scanf("%lld %lld",&n,&m)==2)
    {
        for(i=1;i<=m;i++)
        {
            mul=1;
            for(j=0;j<n;j++)
            {
              mul=mul*i;
            }
            if(mul==m)
            {
                break;
            }
        }
        printf("%lld\n",i);
    }
    return 0;
}
