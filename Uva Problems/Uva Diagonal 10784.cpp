#include<stdio.h>
#include<math.h>

int main()

{
    int i;
    i=1;
    while(true)
    {
        double d,n,m;
        scanf("%lf",&d);

        if(d==0)
        {
            break;
        }

        n=(3.0 + sqrt(9.0 + 4*2*d))/2.0;
        m=ceil(n);

        printf("Case %d: %.0lf\n",i,m);
        i++;
    }
    return 0;
}
