#include<stdio.h>

int main()

{
    int n;
    while(n=1)
    {
        int h1,m1,h2,m2,i;
        int h,m,ans;
        scanf("%d %d %d %d",&h1,&m1,&h2,&m2);

        if(h1==0 && m1==0 && h2==0 && m2==0)
        {
            break;
        }
        m=0;
        h=0;

        if(h2>h1)
        {
            while(h1!=h2 && m1!=m2)
            {

                m1++;
                if(m1>59)
                {
                    h1++;
                    m1=0;
                }
                m++;
                if(m>59)
                {
                    h++;
                    m=0;
                }
            }

                ans= (h*60)+ m;
                printf("%d\n",ans);
            }
        }

        return 0;

}

