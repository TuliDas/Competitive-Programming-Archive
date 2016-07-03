#include<stdio.h>

int Odd_Even(int a)
{
    if(a==1)
    {
        return a;
    }

    else if(a>1 && a%2!=0)
    {
        return a;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int n,i,a,b,sum,r;
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d %d",&a,&b);
        sum=0;

        while(a<=b)
        {
            r=Odd_Even(a);
            if(r==a)
            {
                sum=sum+r;
            }
            a++;
        }

        printf("Case %d: %d\n",i+1,sum);
    }
    return 0;
}
