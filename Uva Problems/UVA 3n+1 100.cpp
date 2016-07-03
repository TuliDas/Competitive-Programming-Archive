#include<stdio.h>

int main()
{
    long long t,i,j,n,m,maximum,cycle,start,last,b;
    while(scanf("%lld %lld", &i, &j) == 2)
    {
        m=0;
        start=i;
        last=j;

        if(i>j)
        {
           start=j;
           last=i;
        }


        for(start=start; start<=last; start++)
        {
            cycle=1;
            n=start;
            if(n==1)
            {
                cycle=cycle;
            }
            while(n>1)
            {
                if(n%2==0)
                {
                    n=n/2;
                    cycle++;
                }
                else
                {
                    n=3*n+1;
                    cycle++;
                }
            }
            m++;
            if(m==1)
            {
                maximum=cycle;
            }
            else
            {
                b=cycle;
                if(b>maximum)
                {
                    maximum=b;
                }
            }
        }
        printf("%lld %lld %lld\n",i,j,maximum);
    }
    return 0;
}
