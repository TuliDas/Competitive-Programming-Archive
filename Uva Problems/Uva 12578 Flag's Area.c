#include<stdio.h>
#include<math.h>

#define PI 2*acos(0.0)

int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        double l,r,w,g_area,r_area;
        scanf("%lf",&l);

        r=l/5.0;
        w=.6*l;
        r_area= PI *r*r;
        g_area=(l*w)-r_area;

        printf("%.2lf %.2lf\n",r_area,g_area);
    }

    return 0;
}
