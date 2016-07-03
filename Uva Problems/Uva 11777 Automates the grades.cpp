#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
    int n,i;
    i=1;
    scanf("%d",&n);
    while(n--)
    {
        int ara[7],pra[3];
        int j,f,a,t;
        f=0;

        for(j=0; j<7; j++)
        {
            scanf("%d",&ara[j]);
        }

        for(j=0; j<4; j++)
        {
            f=f+ara[j];
        }

        pra[0]=ara[4];
        pra[1]=ara[5];
        pra[2]=ara[6];
        sort(pra,pra+3);

        a=(pra[1]+pra[2])/2;
        t=f+a;

        if(t<60)
        {
            printf("Case %d: F\n",i);
        }

        else if(t>=90)
        {
            printf("Case %d: A\n",i);
        }

        else if(t>=80)
        {
            printf("Case %d: B\n",i);
        }

        else if(t>=70)
        {
            printf("Case %d: C\n",i);
        }
        else
        {
            printf("Case %d: D\n",i);
        }
        i++;
    }
    return 0;
}
