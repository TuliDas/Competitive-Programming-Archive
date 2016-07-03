#include<stdio.h>

int main()
{
    int t;
    t=1;
    while(true)
    {
        int n,m,i,j,k,l,x,a,b,z;
        int ara[10000],pra[10000];
        scanf("%d %d",&n,&m);

        if(n==0 && m==0)
        {
            break;
        }

        for(i=0; i<n; i++)
        {
            scanf("%d",&ara[i]);
        }
        for(j=0; j<m; j++)
        {
            scanf("%d",&pra[j]);

        }
        printf("Case #%d:\n",t);

        for(x=1; x<=m; x++)
        {
            for(k=0; k<m; k++)
            {
                z=0;

                for(l=0; l<n; l++)
                {
                    if(pra[k]==ara[l])
                    {
                        z++;
                        if(z==1)
                        {
                            a=pra[k];
                            b=l+2;
                        }
                    }
                }

                if(z==1)
                {
                   printf("%d fount at %d\n",a,b);
                }

                else if(z==0)
                {

                     printf("%d not found \n",pra[k]);
                }
            }
        }
        t++;
      }
    return 0;
}
