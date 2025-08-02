// Problem Name	: UVA 11150 - Cola
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2091
// Verdict	: Accepted
// Language	: C
// Solved on   	: 2016-03-01


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
