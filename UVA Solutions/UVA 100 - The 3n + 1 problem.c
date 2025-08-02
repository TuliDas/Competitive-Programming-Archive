// Problem Name: UVA 100 - The 3n + 1 problem
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=36
// Vjudge.net   : https://vjudge.net/problem/UVA-100
// Verdict: Accepted
// Language: C
// Solved on   : 2016-02-05

#include<stdio.h>

int main()
{
    int i,j,n,m,maximum,cycle,temp,b;

    long long TULI;

    while(scanf("%d %d", &i, &j) == 2)
    {
        m=0;
        temp=i;

        for(temp=i; temp<=j; temp++)
        {
            cycle=1;
            TULI = temp;
            if(TULI == 1)
            {
                cycle=cycle;
            }
            while(TULI > 1)
            {
                if(TULI%2==0)
                {
                    TULI = TULI/2;
                    cycle++;
                }
                else
                {
                    TULI= 3*TULI + 1;
                    cycle++;
                }
            }
            m++;
            if(m==1)
            {
                maximum=cycle;
            }
            else
            {
                b=cycle;
                if(b>maximum)
                {
                    maximum=b;
                }
            }
        }
        printf("%d %d %d\n",i,j,maximum);
    }
    return 0;
}
