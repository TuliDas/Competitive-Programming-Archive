#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    while(a--)
    {
        int n,m,i,j,c;
        scanf("%d %d",&n,&m);
        c=0;
        for(i=3; i<=n; i=i+3)
        {
            for(j=3; j<=m; j=j+3)
            {
                c++;
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
