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
        long long a[3];
        int j;
        for(j=0; j<3; j++)
        {
            scanf("%lld",&a[j]);
        }

        sort(a,a+3);

        if((a[0]+a[1])<=a[2] || a[0]<=0 || a[1]<=0 || a[2]<=0)
        {
            printf("Case %d: Invalid\n",i);
        }

        else if(a[0]==a[1] && a[1]==a[2] && (a[0]+a[1])>a[2])
        {
            printf("Case %d: Equilateral\n",i);
        }

        else if((a[0]+a[1])>a[2] && a[0]!=a[1] && a[1]!=a[2])
        {
            printf("Case %d: Scalene\n",i);
        }

        else if((a[0]+a[1])>a[2] && (a[0]==a[1] || a[1]==a[2]))
        {
            printf("Case %d: Isosceles\n",i);
        }

        i++;
    }

    return 0;
}

