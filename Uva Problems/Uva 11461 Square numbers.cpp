#include<stdio.h>

int main()
{
    while(true)
    {
        int a,b,i,j,s;
        j=0;
        scanf("%d %d",&a,&b);

        if(a==0 && b==0)
        {
            break;
        }

        for(i=1; i*i<=b; i++)
        {
            s=i*i;

            if(s>=a)
            {
                j++;
            }
        }
        printf("%d\n",j);
    }
    return 0;
}
