/*
Problem Name	: UVA 11428 - Cubes
Problem Link    : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2423
Language	: C++
Solved on   	: 2016-02-29
*/

#include<stdio.h>
#include<math.h>

int main()

{
    while(true)
    {
        int N,p,x,y,X,Y;
        scanf("%d",&N);
        X= -1;
        Y= -1;

        if(N==0)
        {
            break;
        }

        p=sqrt(N);

        for(x=p; x>=2; x--)
        {
            for(y=1; y<x; y++)
            {

                if((x*x*x)-(y*y*y)==N)
                {
                    X=x;
                    Y=y;
                }
            }
        }

        if(X!=-1 && Y!=-1)
        {
            printf("%d %d\n",X,Y);
        }

        else
        {
            printf("No solution\n");
        }

    }

    return 0;
}
