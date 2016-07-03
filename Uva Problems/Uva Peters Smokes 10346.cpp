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
