#include<stdio.h>

int main()
{
    int i,j,k,test;
    j=5;


    for(i=6; i<1000000; i++)
    {
        test=0;

        for(k=4; k<i; k++)
        {
            if(i%k==0 && k!=5)
            {
                test++;
            }
        }

        if ((test==0) && (i%2==0 || i%3==0 || i%5==0))
        {
                j++;
        }


        if(j==1500)
        {
            break;
        }
    }

    printf("The 1500'th ugly number is %d",i);
    return 0;
}
