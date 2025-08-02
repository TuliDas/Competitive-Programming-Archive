// Problem Name: UVA 488 - Triangle Wave
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=429
// Verdict	: Accepted
// Language	: C++
// Solved on   	: 2016-02-06

#include<stdio.h>

int main()
{
    int a,N,i,j,A,F,k;
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w+", stdout);
    scanf("%d",&N);

    //printf("\n");

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

            if(a!=N-1 || k!=F-1)
            {
                printf("\n");
            }
        }
    }
    return 0;
}

