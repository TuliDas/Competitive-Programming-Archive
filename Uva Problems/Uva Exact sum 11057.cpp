#include<stdio.h>

int diff(int a,int b)
{
    int r;
    if(b>a)
    {
     r=b-a;
    }
    else
    {
        r=a-b;
    }
    return r;
}

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int a[10000];
        int m,i,s,b,j,sum,k,l,r;
        for(k=0; k<n; k++)
        {
            scanf("%d",&a[k]);
        }
        scanf("%d",&m);
        s=1000001;

        for(i=0; i<n-1; i++)
        {
            for(j=i+1; j<n; j++)
            {
                sum=a[i]+a[j];

                r=diff(a[i],a[j]);

                if(sum==m && r<=s)
                {
                    l=a[i];
                    b=a[j];
                    s=r;
                }
            }
        }

        if(l<=b)
        {
            printf("Peter should buy books whose prices are %d and %d.\n\n",l,b);
        }
        else
        {
            printf("Peter should buy books whose prices are %d and %d.\n\n",b,l);
        }
    }
    return 0;
}
