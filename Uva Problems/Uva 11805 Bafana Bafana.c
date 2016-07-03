#include<stdio.h>

int main()

{
    int n,j;
    j=1;
    scanf("%d",&n);
    while(n--)
    {
        int i,N,K,P;
        scanf("%d %d %d",&N,&K,&P);

        for(i=0; i<P; i++)
        {
            if(K<N)
            {
                K++;
            }

            else if(K>=N)
            {
                K=1;
            }
        }
        printf("Case %d: %d\n",j,K);
        j++;
    }
    return 0;
}
