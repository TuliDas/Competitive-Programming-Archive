#include<stdio.h>
#include<math.h>

int main()

{
    int i;
    i=1;
    while(true)
    {
        int N;
        scanf("%d",&N);
        double u,v,s,a,t;

        if(N==0)
        {
            break;
        }

        else if(N==1)
        {
            scanf("%lf %lf %lf",&u,&v,&t);
            a=(v-u)/t;
            s=u*t + 0.5*a*t*t;
            printf("Case %d: %.3lf %.3lf\n",i,s,a);
        }

        else if(N==2)
        {
            scanf("%lf %lf %lf",&u,&v,&a);
            t=(v-u)/a;
            s=u*t + 0.5*a*t*t;
            printf("Case %d: %.3lf %.3lf\n",i,s,t);
        }

        else if(N==3)
        {
            scanf("%lf %lf %lf",&u,&a,&s);
            v=u*u + 2*a*s;
            v=sqrt(v);
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",i,v,t);
        }

        else if(N==4)
        {
            scanf("%lf %lf %lf",&v,&a,&s);
            u=v*v - 2*a*s;
            u=sqrt(u);
            t=(v-u)/a;

            printf("Case %d: %.3lf %.3lf\n",i,u,t);
        }
        i++;
    }
    return 0;
}
