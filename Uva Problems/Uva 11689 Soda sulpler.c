#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int a,b,c,j,m;
        scanf("%d %d %d",&a,&b,&c);
        j=0;
        m=a+b;

        while(m>=c)
        {
            j++;
            m=m-c+1;
        }
        printf("%d\n",j);
    }
    return 0;
}
