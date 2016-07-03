#include<stdio.h>

void base_convertion(int n, int b)
{
    if(n>0)
    {
        int digit;
        digit=n%b;
        base_convertion(n/b,b);

    }


}

int main()
{
    while(true)
    {
        int n,b;
        b=3;
        scanf("%d",&n);

        if(n<0)
        {
            break;
        }
        base_convertion(n,b);
        printf("\n");

    }
    return 0;
}
