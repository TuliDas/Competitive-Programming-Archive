#include<stdio.h>

int main()
{
    int a,N,i,j,A,F,k;
    scanf("%d",&N);
    printf("\n");

    for(a=0; a<N; a++)
    {
        scanf("%d %d",&A,&F);

        for(k=0; k<F; k++)
        {
            for(i=1; i<=A; i++)
            {
                j=i;
                while(j--)
                {
                    printf("%d",i);
                }
                printf("\n");
            }

            for(i=A-1; i>=1; i--)
            {
                j=i;
                while(j--)
                {
                    printf("%d",i);
                }
                printf("\n");
            }
            printf("\n");
        }
    }
    return 0;
}
