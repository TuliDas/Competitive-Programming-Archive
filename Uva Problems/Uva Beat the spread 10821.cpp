#include<stdio.h>

int main()

{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int m,p,a,b;
        scanf("%d %d",&m,&p);
        a=(m+p)/2;
        b=m-a;

        if((m+p)%2!=0 || a<0 || b<0)
        {
            printf("impossible\n");
        }

        else
        {
            printf("%d %d\n",a,b);
        }
    }
    return 0;
}
