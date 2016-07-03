#include<stdio.h>

int main()
{
    int n;
    int a,b,c1,c2,minimum,temp;
    while(n=1)
    {
        scanf("%d %d",&a,&b);
        if(a== -1 && b== -1)
        {
            break;
        }

        if(a>b)
        {
            temp=a;
            a=b;
            b=temp;
        }

        c1=b-a;
        c2=(100-b)+a;

        if(c1<c2)
        {
            minimum=c1;
        }

        else
        {
            minimum=c2;
        }

        printf("%d\n",minimum);


    }
    return 0;
}

