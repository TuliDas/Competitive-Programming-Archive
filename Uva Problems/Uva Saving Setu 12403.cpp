#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int m,t;
        t=0;
        m=0;
        char s[15];
        scanf("%s %d",&s,&m);
        if(strcmp(s,"donate")==0)
        {
            scanf("%d",m);
            //printf("\n");
        else if(strcmp(s,"report")==0)
        {
            t=t+m;
            printf("%d\n",t);
        }

    }

    return 0;
}
