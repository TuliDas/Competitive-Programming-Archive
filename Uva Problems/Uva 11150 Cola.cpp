#include<stdio.h>

int main()
{
    int e;
    while(scanf("%d",&e)==1)
    {
        int r,c;
        c=e;
        r=e;

        while(true)
        {

            if(r>=3)
            {
                c++;
                r=r-2;
            }
            else if(r==2)
            {
                c++;
                break;
            }

            else if(r<=1)
            {
                break;
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
