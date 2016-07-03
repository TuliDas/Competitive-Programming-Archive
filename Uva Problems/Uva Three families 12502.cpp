#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        double a,b,c;
        double m,result;

        scanf("%lf %lf %lf",&a,&b,&c);

        m=c/(a+b);

        if(a>b)
        {
            result= (m*a) + (a-b)*m;
        }
        else if(b>a)
        {
          result= (m*a) - (b-a)*m;
        }

        else if(a=b)
        {
            result= (m*a);
        }


        printf("%.0lf\n",result);


    }
    return 0;
}
