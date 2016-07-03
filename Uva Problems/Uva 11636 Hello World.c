#include<stdio.h>

int main()
{
    int n,i;
    i=1;

    while(n=1)
    {
        int j,N,k;
        scanf("%d",&N);

        if(N<0)
        {
            break;
        }
        else if(N==1)
        {
            j=0;
        }

        else
        {
            j=1;
            for(k=2; k<N; k=k*2)
            {
                j++;
            }
        }

        printf("Case %d: %d\n",i,j);
        i++;
    }
    return 0;
}
