#include<stdio.h>

int main()

{
    int n,i;
    scanf("%d",&n);
    i=1;
    while(n--)
    {
        int ara[50];
        int j,N,high,low;
        scanf("%d",&N);
        for(j=0; j<N; j++)
        {
            scanf("%d",&ara[j]);
        }
        high=0;
        low=0;

        for(j=0; j<N-1; j++)
        {
            if(ara[j]<ara[j+1])
            {
                high++;
            }
            if(ara[j]>ara[j+1])
            {
                low++;
            }
        }

        printf("Case %d: %d %d\n",i,high,low);
        i++;
    }
    return 0;
}
