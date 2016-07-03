#include<stdio.h>

int main()
{
    int n,i;
    i=1;
    scanf("%d",&n);

    while(n--)
    {
        int N,j,m,k;
        int ara[100];
        scanf("%d",&N);
        for(j=0; j<N; j++)
        {
            scanf("%d",&ara[j]);
        }

        m=ara[0];

        for(k=0; k<N; k++)
        {
            if(ara[k]>=m)
            {
                m=ara[k];
            }
        }

        printf("Case %d: %d\n",i,m);
        i++;
    }
    return 0;
}

