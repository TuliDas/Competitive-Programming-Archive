#include<stdio.h>

int main()
{
    while(true)
    {
        int n,c,i,j,k;
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        c=0;
        for(i=1; i<=n; i++)
        {
            for(j=i; j<=n; j++)
            {
                for(k=i; k<=n; k++)
                {
                    c++;
                }
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
