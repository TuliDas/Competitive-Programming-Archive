#include<stdio.h>

int main()

{
    int n,i;
    i=1;
    scanf("%d",&n);
    while(n--)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);

        if(a>1 && a<21 && b<21 && c<21)
        {
            printf("Case %d: good\n",i);
        }
        else
        {
            printf("Case %d: bad\n",i);
        }
        i++;
    }
    return 0;
}
